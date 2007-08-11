#!/usr/bin/perl
# $Id: call-anal.pl,v 1.1 2007/02/23 05:00:29 sampo Exp $
# 16.6.2003, Sampo Kellomaki <sampo@iki.fi>
# 25.6.2003, fixed C++ destructor handling, improved origin centered call graphs --Sampo
# 14.12.2003, added function number initialization facility --Sampo
# Perform total call graph analysis
#  - produce graph with graph viz
#  - annotate the source with comments to effect
#
# Some simplifying assumptions are made:
#  - Function calls are assumed to be of form
#        func(...), or
#        name::space::func(...), or
#        ->func(...), or
#        .func(...)
#  - Function definitions are assumed to be of form
#        type func(struct...
#        type func(int...
#        type func(void...

$usage = <<USAGE;
Usage: ./call-anal.pl [opts] */*.c */*.cc >graph.dot
        -n  perform simulation, do not alter the source

dot -Tps graph.dot -o graph.ps && gv graph.ps
http://www.research.att.com/sw/tools/graphviz/download.html
USAGE
    ;

$dot_header = <<DOT;
// Generated graph. Do not edit. Any changes will be lost.
// dot -Tps graph.dot -o graph.ps && gv graph.ps
// http://www.research.att.com/sw/tools/graphviz/download.html
DOT
    ;

$write = 1;
if ($ARGV[0] eq '-n') {
    shift;
    $write = 0;
}
die $USAGE if $ARGV[0] =~ /^-/;
undef $/;

# Function at origin of graph => call depth from the function
%local_graphs = ( main => 6,     # the start
		  yyparse => 3,  # center of compiler
		  );

# N.B. names in all upper case, i.e. macros, are always ignored
@ignore_callee = qw(for if return sizeof switch while);
push @ignore_callee,
    qw(accept atoi close fclose fcntl fprintf fputs ftruncate free
       getpid getuid getegid htons htonl getenv gmtime_r inetaton
       lseek dlsym dlopen
       malloc memchr memcpy memcmp memmove memset mmap munmap
       new open printf poll
       closedir opendir rewinddir pow
       perror pthread_mutex_init pthread_mutex_lock pthread_mutex_unlock
       pthread_cancel pthread_detach pthread_setcanceltype pthread_setspecific
       read sleep sort sprintf strcat strchr strcmp strcpy strdup strerror
       sscanf strlen strncmp strncpy strspn strtok toupper tolower
       va_end va_start vprintf vsnprintf vsprintf vsyslog
       write writev);

push @ignore_callee, qw(new_ds_ei);

select STDERR; $|=1; select STDOUT;

sub process_func {
    my ($fn, $func, $body) = @_;
    #warn "process_func($fn,$func,".length($body).")";
    $func =~ s/^~/D_/;
    push @{$def{$func}}, $fn;     # where is function defined
    push @{$funcs_in_file{$fn}}, $func;
      
    ### Analyze body to detect function calls
    
    $body =~ s{/\*.*?\*/}{}gs;    # strip comments
    $body =~ s{"[^\n\"]+?"}{}gs;  # strip strings (debug output)
    $body =~ s{if\s*\(}{}gs;
    $body =~ s{while\s*\(}{}gs;
    $body =~ s{for\s*\(}{}gs;
    $body =~ s{switch\s*\(}{}gs;
    
    #                        01     1     0
    @func_calls = $body =~ m%((~?\w+)\s*\()%sg;
    while (@func_calls) {
	$callee = $func_calls[1];
	next if $callee =~ /^[A-Z0-9_]+$/;   # Ignore macros
	next if $callee =~ /^[A-Z0-9_]{3,}/; # Ignore all caps starts
	next if grep $callee eq $_, @ignore_callee;
	$callee =~ s/^~/D_/;
	#warn "dslex2() body: >$callee< >>$func_calls[0]<<" if $func eq 'dslex2';
	$called_by{$callee}{$func}++;
	$calls{$func}{$callee}++;
	#warn "ds_scan_identifier x dslex2: `$called_by{$callee}{$func}' `$calls{$func}{$callee}'" if ($func eq 'dslex2') && ($callee eq 'ds_scan_identifier');
	$fnf{$fn}{$func}{$callee}++;
	#warn "fn=$fn func=$func callee=$callee: $fnf{$fn}{$func}{$callee}";
    } continue {
	splice @func_calls, 0, 2;
    }
}

# Process files, grabbing what looks like function calls
# and what looks like function definitions

$0 = "reading input";
for $fn (@ARGV) {
    next if $fn =~ /~$/;  # Ignore backups
    next if $fn =~ /CVS/; # Ignore files in CVS special directories
    open F, "<$fn" or die "Can't read `$fn': $!";
    $x = <F>;
    close F;
    warn "Analyzing $fn...\n";

  #$x =~ s{/\*.*?\*/}{}gs;  # strip comments

  # 0=whole match, 1=proto, 2=ret type, 3=rtc, 4=name, 5=namespace, 6=local name, 7=params, 8=body
  #            0123               3 245     5 6   64 .7                    7 ,1    :8   8   ;0
  #@fx = $x =~ /(((([\w\*:\[\]]+\s+)+)((\w+::)*(\w+))\(([\w\(\)\*:\[\],\s]*?)\))\s*\{(.+?)\n\})/sg;  # version 1, requires comment removal

  # 0=whole match, 1=proto, 2=ret type, 3=name, 4=namespace, 5=local name, 6=params, 7=body
  #                                             0  12                  2                              34     4 5   53       .6                    6 ,1                                                 :7   7   ;0
  @fx = $x =~ m%(?:\n/\* Called by:[^\*/]*?\*/)?(\n((\w[\w\*:\[\] \t]+?)(?:[ \t]*/\*[^\*/\n]*?\*/)?\s+((\w+::)*(\w+))[ \t]*\(([\w\*:\[\],\s/.&=]*?)\))\s*(?:YYPARSE_PARAM_DECL)?(?:/\*[^\*/]*?\*/)?\s*\{(.+?)\n\})%sg;  # version 2, comment tolerant

  # Constructors and destructors
  # 0=whole match, 1=proto, 2=name, 3=namespace, 4=local name, 5=params, 6=body
  #                                             0  123   3  4    42       .5                    5 ,1                          :6   6   ;0
  @fy = $x =~ m%(?:\n/\* Called by:[^\*/]*?\*/)?(\n(((\w+)::(~?\4))[ \t]*\(([\w\*:\[\],\s/.&=]*?)\))\s*(?:/\*[^\*/]*?\*/)?\s*\{(.+?)\n\})%sg;  # version 2, comment tolerant

  while (@fx) {
      #warn "  $fx[4]()\n";
#WHOLE >>$fx[0]<<
#BODY >>$fx[7]<<
      print <<DEBUG if 0;
=================================================================
WHOLE >>$fx[0]<<
PROTO: >$fx[1]<
RET TYPE: >$fx[2]<
NAME: >$fx[3]<
NAMESPACE: >$fx[4]<
LOCALNAME: >$fx[5]<
PARAMS: >$fx[6]<

DEBUG
    ;
      process_func($fn, $fx[5], $fx[7]);
      splice @fx, 0, 8;
  }

  while (@fy) {
      #warn "  $fy[4]()\n";
#WHOLE >>$fy[0]<<
#BODY >>$fy[6]<<
      print <<DEBUG if 0;
=================================================================
WHOLE >>$fy[0]<<
PROTO: >$fy[1]<
NAME: >$fy[2]<
NAMESPACE: >$fy[3]<
LOCALNAME: >$fy[4]<
PARAMS: >$fy[5]<

DEBUG
    ;
      process_func($fn, $fy[4], $fy[6]);
      splice @fy, 0, 7;
  }
}

$callee = 'ds_scan_identifier';
$func = 'dslex2';
#warn "ds_scan_identifier x dslex2: `$called_by{$callee}{$func}' `$calls{$func}{$callee}'";

$0 = "generating output";
warn "Generating output...\n";

open F, ">function.list" or die "Cant write function.list: $!";
print F map qq(DSFUNC_DEF("$_","$def{$_}[0]")\n), sort keys %def;
close F;

open F, ">file.list" or die "Cant write file.list: $!";
print F map qq(DSFILE_DEF("$_")\n), sort keys %fnf;
close F;

print "$dot_header\n// Files of definition\n// =====\n";

for $k (sort keys %def) {
    print "// $k:\t" . join(',', @{$def{$k}}) . "\n";
}

print "\n// Called by\n// =========\n";

for $callee (sort keys %called_by) {
    $s = '';
    for $k (sort keys %{$called_by{$callee}}) {
	$s .= "$k $called_by{$callee}{$k}, ";
    }
    chop $s; chop $s;
    print "// $callee:\t$s\n";
}

###
### Draw the call graph
###

print <<DOT;
digraph CALL_GRAPH {
rankdir=LR;
ratio=compress;
//size="10,7"; orientation=landscape;
//size="7,10";
//ranksep=2;
//nodesep=0.1;
//page="8,11";
compound=true;
concentrate=true;

DOT
    ;
$0 = "generating dot";
for $fn (sort keys %fnf) {
    ($fn2 = $fn) =~ tr[A-Za-z0-9][_]c;
    print "subgraph cluster_$fn2 {\n  label=\"$fn\";\n";
    for $f (sort keys %{$fnf{$fn}}) {
	next if !$def{$f};
	if ($f =~ /^dsvm/) {
	    print "  $f [style=filled,color=red];\n";  # [shape=box]
	} elsif ($f =~ /^ds/) {
	    print "  $f [style=filled,color=yellow];\n";  # [shape=box]
	} elsif ($f eq 'main') {
	    print "  $f [style=filled,color=red, shape=octagon];\n";  # [shape=box]
	} else {
	    print "  $f;\n";  # [shape=box]
	}
	for $c (sort keys %{$fnf{$fn}{$f}}) {
	    if ($fnf{$fn}{$f}{$c} > 1) {
		print "  $f -> $c [label=\"$fnf{$fn}{$f}{$c}\"];\n";
	    } else {
		print "  $f -> $c;\n";
	    }
	}
    }
    print "}\n\n";
}

print "}\n\n//EOF\n";

###
### Draw function oriented call graphs
###

# Generate files listing such that its not too wide

sub gen_files {
    my ($f) = @_;
    my $fns = '';
    my $n = 1;
    for $fn (@{$def{$f}}) {
	$fns .= $fn;
	if ($n++ % 2) {
	    $fns .= ", ";
	} else {
	    $fns .= ",%";
	}
    }
    chop $fns; chop $fns;
    $fns =~ s/%/\\n/g;
    return $fns;
}

sub render_level {
    my ($point, $level) =@_;
    my %seen_here = ();
    my $callee;
    for $callee (sort keys %{$calls{$point}}) {
	next if !$def{$callee};
	next if $seen{$callee};
	$seen{$callee} = 1;
	$seen_here{$callee} = 1;
	$files = gen_files($callee);
	if ($level == $local_graphs{$origin}) {
	    print F "$callee [style=filled,color=yellow,label=\"$callee\\n<$files>\"];\n";
	} else {
	    print F "$callee [label=\"$callee\\n<$files>\"];\n";
	}
    }
    
    for $callee (sort keys %{$calls{$point}}) {
	next if !$def{$callee};
	if ($level) {
	    if ($calls{$point}{$callee} > 1) {
		print F "$point -> $callee [label=\"$calls{$point}{$callee}\"];\n";
	    } else {
		print F "$point -> $callee;\n";
	    }
	} else {
	    if ($calls{$point}{$callee} > 1) {
		print F "$point -> $callee [style=dotted,label=\"$calls{$point}{$callee}\"];\n";
	    } else {
		print F "$point -> $callee [style=dotted];\n";
	    }
	}
    }
    
    return if !$level;
    --$level;
    for $callee (sort keys %{$calls{$point}}) {
	next if !$def{$callee};
	next if !$seen_here{$callee} && $seen{$callee};
	render_level($callee, $level);
    }
}

for $origin (sort keys %local_graphs) {
    open F, ">$origin-call.dot" or die "Can't write `$origin-call.dot': $!";
    $files = gen_files($origin);
    print F <<DOT;
$dot_header
digraph CALLS_$origin {
rankdir=LR;
ratio=compress;
//size="10,7"; orientation=landscape;
//size="7,10";
//ranksep=2;
//nodesep=0.1;
//page="8,11";
compound=true;
concentrate=true;

$origin [shape=octagon,style=filled,color=red,label="$origin\\n<$files>"];
DOT
    ;

%seen = ($origin, 1);

# render abbreviated "callers" graph

for $cb (sort keys %{$called_by{$origin}}) {
    next if !$def{$cb};
    $seen{$cb} = 1;
    $files = gen_files($cb);
    print F "$cb [label=\"$cb\\n<$files>\"];\n";
    if ($called_by{$func}{$cb} > 1) {
	print F "$cb -> $origin [label=\"$called_by{$origin}{$cb}\"]\n";
    } else {
	print F "$cb -> $origin;\n";
    }
}

# render down stream call graph

render_level($origin, $local_graphs{$origin});

print F "}\n//EOF\n";
close F;
warn "Wrote $origin-call.dot\n";
}

### Annotate the source files with comments indicating where
### each defined function is called from

sub gen_called_by {
    my ($func) = @_;
    my $cb = '';
    $func =~ s/^~/D_/;
    my $y = "\n/* Called by:  ";
    for $cb (sort keys %{$called_by{$func}}) {
	next if !$def{$cb};
	if ($called_by{$func}{$cb} > 1) {
	    $y .= "$cb x$called_by{$func}{$cb}, ";
	} else {
	    $y .= "$cb, ";
	}
    }
    chop $y; chop $y;
    return $y . " */";
}

for $fn (sort keys %fnf) {
    next unless $fn;
    print STDERR "Annotating $fn ... ";
    open F, "<$fn" or die "Can't read `$fn': $!";
    $x = <F>;
    close F;

  # 0=whole match, 1=proto, 2=ret type, 3=name, 4=namespace, 5=local name, 6=params, 7=body
  #                                             0  12                  2                              34     4 5   53       .6                    6 ,1                          :7   7   ;0
  $n  = $x =~ s%(?:\n/\* Called by:[^\*/]*?\*/)?(\n((\w[\w\*:\[\] \t]+?)(?:[ \t]*/\*[^\*/\n]*?\*/)?\s+((\w+::)*(\w+))[ \t]*\(([\w\*:\[\],\s/.&=]*?)\))\s*(?:/\*[^\*/]*?\*/)?\s*\{(.+?)\n\})%gen_called_by($6).$1%sge;  # version 2, comment tolerant

  # Constructors and destructors
  # 0=whole match, 1=proto, 2=name, 3=namespace, 4=local name, 5=params, 6=body
  #                                             0  123   3  4    42       .5                    5 ,1                          :6   6   ;0
  $m  = $x =~ s%(?:\n/\* Called by:[^\*/]*?\*/)?(\n(((\w+)::(~?\4))[ \t]*\(([\w\*:\[\],\s/.&=]*?)\))\s*(?:/\*[^\*/]*?\*/)?\s*\{(.+?)\n\})%gen_called_by($5).$1%sge;  # version 2, comment tolerant
    
    if (($n || $m) && $write) {
	open F, ">$fn" or die "Can't write `$fn': $!";
	print F $x;
	close F;
	warn "wrote $n changes in $fn\n";
    } else {
	warn "$n changes. Nothing written.\n";
    }
}

#EOF call-anal.pl
