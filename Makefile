# zxid/Makefile  -  How to build ZXID
# Copyright (c) 2006 Sampo Kellomaki (sampo@iki.fi), All Rights Reserved.
# This is confidential unpublished proprietary source code of the author.
# NO WARRANTY, not even implied warranties. Contains trade secrets.
# Distribution prohibited unless authorized in writing. See file COPYING.
# $Id: Makefile,v 1.32 2006/09/05 05:09:36 sampo Exp $
# Build so far only tested on Linux. This makefile needs gmake-3.78 or newer.
# (See dietlibc (fefe.de) Makefile for some usefule wizardry.)
# Try `make help'

vpath %.c ../zxid
vpath %.h ../zxid

all: zxid

REL=0.4
VERSION=0x000004

# If you change following, be sure to edit zxidconf.h as well. N.B. Trailing / is needed.
ZXID_PATH=/var/zxid/

###
### Environment dependent options
###

TOP=$(shell pwd)
CURL_ROOT=/apps
OPENSSL_ROOT=/apps/openssl/std
#OPENSSL_ROOT=/usr/local/ssl
PERL=perl
XSD2SG_PL= ~/pd/xsd2sg.pl
XSD2SG=$(PERL) $(XSD2SG_PL)
PULVERIZE=$(PERL) ./pulverize.pl
GPERF=gperf
SWIG=swig
AR=ar -crs
ARX=ar -x
CC=gcc
LD=gcc
CDIR=  -I$(TOP) -I$(OPENSSL_ROOT)/include -I$(CURL_ROOT)/include
CDEF=  -D_REENTRANT -DDEBUG -DZXID=$(VERSION) -DREL="\"$(REL)\"" -DCOMPILED_DATE=`date +%s`
# Without cURL the Artifact Profile, WSC, and metadata fetch features are disabled.
CDEF+= -DUSE_CURL
# Without OpenSSL signing and signature verification are not possible
CDEF+= -DUSE_OPENSSL
LIBS=-lpthread -L$(CURL_ROOT)/lib -L$(OPENSSL_ROOT)/lib -lcrypto -ldl -lcurl

# Following ld flags as well as C flag -ffunction-sections are a quest to
# eliminate unused functions from final link.
#LDFLAGS= -Wl,-O -Wl,2 --gc-sections

###
### Platform dependent options
###

ifeq ($(TARGET),xsol8)

# Cross compilation for Solaris 8 target (on Linux host) Invoke as `make PLATFORM=xsol8'
# You must have the cross compiler installed in /apps/gcc/sol8 and in path. Similarily
# the cross binutils must be in path.
#    export PATH=/apps/gcc/sol8/bin:/apps/binutils/sol8/bin:$PATH

#
SYSROOT=/apps/gcc/sol8/sysroot
CROSS_COMPILE=1
CC=sparc-sun-solaris2.8-gcc
LD=sparc-sun-solaris2.8-gcc
CDEF+=-DSUNOS -DBYTE_ORDER=4321 -DBIG_ENDIAN=4321
LIBS+=-lxnet -lsocket

else
ifeq ($(TARGET),sol8)

# Flags for Solaris 8 native compile (BIG_ENDIAN BYTE_ORDER)
CDEF+=-DSUNOS -DBYTE_ORDER=4321 -DBIG_ENDIAN=4321
LIBS+=-lxnet -lsocket

else

# Flags for Linux 2.6 native compile
CDEF+=-DLINUX

endif
endif

###
### End of platform dependent options, start of dependencies and targets
###

CFLAGS=-g -fmessage-length=0 -Wno-unused-label -Wno-unknown-pragmas -fno-strict-aliasing $(CDEF) $(CDIR)
CFLAGS += -Os
#CFLAGS += -Wall

ZXID_LIB_OBJ=zxidsso.o zxidslo.o zxidmk.o zxidlib.o zxidmeta.o
ZX_OBJ=zxlib.o zxutil.o \
  c/saml2-attrs.o  c/saml2md-attrs.o \
  c/saml2-elems.o  c/saml2md-elems.o \
  c/saml2-ns.o     c/saml2md-ns.o \
  c/license.o

ifeq ($(PULVER),1)

# Pulverize dependencies. These arrange some source files to be split to
# one-function-per-file format ("pulver") so that GNU ld will only pull
# in those files, i.e. functions, that are actually used. This is a workaround for
# GNU ld not having a dead function elimination feature.
# You should do `make PULVER=1' for production or distribution build of this library
# as that will ensure smallest possible binaries for eventual users of the library.

PULVER_DEPS=pulver/c_saml2_dec_c.deps pulver/c_saml2_enc_c.deps \
	pulver/c_saml2_aux_c.deps pulver/c_saml2_getput_c.deps \
	pulver/c_saml2md_dec_c.deps pulver/c_saml2md_enc_c.deps \
	pulver/c_saml2md_aux_c.deps pulver/c_saml2md_getput_c.deps

c_saml2_dec_c_o=$(shell cat pulver/c_saml2_dec_c.deps)
c_saml2_enc_c_o=$(shell cat pulver/c_saml2_enc_c.deps)
c_saml2_aux_c_o=$(shell cat pulver/c_saml2_aux_c.deps)
c_saml2_getput_c_o=$(shell pulver/c_saml2_getput_c.deps)

foo=$(c_saml2_enc_c_o)

#pulver/c_saml2_dec_c.deps $(c_saml2_dec_c_o:.o=.c): c/saml2-dec.c	

pulver/c_saml2_dec_c.deps: c/saml2-dec.c	
	$(PULVERIZE) pulver c/saml2-dec.c >pulver/c_saml2_dec_c.deps

#pulver/c_saml2_enc_c.deps $(c_saml2_enc_c_o:%.o=%.c): c/saml2-enc.c	

pulver/c_saml2_enc_c.deps $(foo:%.o=%.c): c/saml2-enc.c	
	$(PULVERIZE) pulver c/saml2-enc.c >pulver/c_saml2_enc_c.deps

pulver/c_saml2_aux_c.deps $(c_saml2_aux_c_o:.o=.c): c/saml2-aux.c	
	$(PULVERIZE) pulver c/saml2-aux.c >pulver/c_saml2_aux_c.deps
pulver/c_saml2_getput_c.deps $(c_saml2_getput_c_o:.o=.c): c/saml2-getput.c	
	$(PULVERIZE) pulver c/saml2-getput.c >pulver/c_saml2_getput_c.deps

c_saml2md_dec_c_o=$(shell cat pulver/c_saml2md_dec_c.deps)
c_saml2md_enc_c_o=$(shell cat pulver/c_saml2md_enc_c.deps)
c_saml2md_aux_c_o=$(shell cat pulver/c_saml2md_aux_c.deps)
c_saml2md_getput_c_o=$(shell pulver/c_saml2md_getput_c.deps)

pulver/c_saml2md_dec_c.deps $(c_saml2md_dec_c_o:.o=.c): c/saml2md-dec.c	
	$(PULVERIZE) pulver c/saml2md-dec.c >pulver/c_saml2md_dec_c.deps
pulver/c_saml2md_enc_c.deps $(c_saml2md_enc_c_o:.o=.c): c/saml2md-enc.c	
	$(PULVERIZE) pulver c/saml2md-enc.c >pulver/c_saml2md_enc_c.deps
pulver/c_saml2md_aux_c.deps $(c_saml2md_aux_c_o:.o=.c): c/saml2md-aux.c	
	$(PULVERIZE) pulver c/saml2md-aux.c >pulver/c_saml2md_aux_c.deps
pulver/c_saml2md_getput_c.deps $(c_saml2md_getput_c_o:.o=.c): c/saml2md-getput.c	
	$(PULVERIZE) pulver c/saml2md-getput.c >pulver/c_saml2md_getput_c.deps

#-include pulver/c_saml2_dec_c.deps
#-include pulver/c_saml2_enc_c.deps
#-include pulver/c_saml2_aux_c.deps
#-include pulver/c_saml2_getput_c.deps

ZX_OBJ += \
  $(c_saml2_dec_c_o)    $(c_saml2md_dec_c_o) \
  $(c_saml2_enc_c_o)    $(c_saml2md_enc_c_o) \
  $(c_saml2_aux_c_o)    $(c_saml2md_aux_c_o) \
  $(c_saml2_getput_c_o) $(c_saml2md_getput_c_o)

else

# Nonpulverized build. This will result in bigger binaries because gnu ld does
# not understand to do dead function elimination. However, this is faster to build.

ZX_OBJ += \
  c/saml2-dec.o    c/saml2md-dec.o \
  c/saml2-enc.o    c/saml2md-enc.o \
  c/saml2-aux.o    c/saml2md-aux.o \
  c/saml2-getput.o c/saml2md-getput.o

endif

#ZXID_OBJ=zxid.o zxidlib.o zxidmeta.o $(ZX_OBJ)
ZXID_OBJ=zxid.o
ZXBENCH_OBJ=zxbench.o $(ZX_OBJ)

ZX_SG=sg/saml-schema-assertion-2.0.sg sg/saml-schema-protocol-2.0.sg sg/xmldsig-core.sg sg/xenc-schema.sg sg/saml20-soap11.sg
ZX_ROOTS=-r sa:Assertion -r sp:AuthnRequest -r sp:Response -r sp:LogoutRequest -r sp:LogoutResponse -r sp:ManageNameIDRequest -r sp:ManageNameIDResponse -r se:Envelope

ZXMD_SG=sg/saml-schema-assertion-2.0.sg sg/saml-schema-metadata-2.0.sg sg/xmldsig-core.sg sg/xenc-schema.sg
ZXMD_ROOTS=-r md:EntityDescriptor -r md:EntitiesDescriptor

# Binaries

zxid: $(ZXID_OBJ) libzxid.a
	$(LD) $(LDFLAGS) -o zxid $(ZXID_OBJ) -L. -lzxid $(LIBS)

zxbench: $(ZXBENCH_OBJ)
	$(LD) $(LDFLAGS) -o zxbench $^ $(LIBS)

sizeof:
	$(CC) -o sizeof sizeof.c

# Libraries

ifeq ($(PULVER),1)

libzxid.a: $(ZXID_LIB_OBJ) $(ZX_OBJ)
	cat pulver/c_saml2_dec_c.deps      | xargs $(AR) libzxid.a
	cat pulver/c_saml2_enc_c.deps      | xargs $(AR) libzxid.a
	cat pulver/c_saml2_aux_c.deps      | xargs $(AR) libzxid.a
	cat pulver/c_saml2_getput_c.deps   | xargs $(AR) libzxid.a
	cat pulver/c_saml2md_dec_c.deps    | xargs $(AR) libzxid.a
	cat pulver/c_saml2md_enc_c.deps    | xargs $(AR) libzxid.a
	cat pulver/c_saml2md_aux_c.deps    | xargs $(AR) libzxid.a
	cat pulver/c_saml2md_getput_c.deps | xargs $(AR) libzxid.a
	$(AR) libzxid.a $(ZXID_LIB_OBJ)

#	$(foreach fil,$^,$(shell $(AR) libzxid.a $(fil)))

else

libzxid.a: $(ZXID_LIB_OBJ) $(ZX_OBJ)
	$(AR) libzxid.a $^

endif

libzxid.so: libzxid.a
	$(LD) -o libzxid.so.0.0 -shared --export-all-symbols -Wl,-whole-archive $^ -Wl,-no-whole-archive

# Modules

Net/zxid_wrap.c Net/zxid.pm: c/saml2-data.h zxid.i
	$(SWIG) -o Net/zxid_wrap.c -perl zxid.i

Net/SAML.pm: Net/zxid.pm
	sed -e 's/\*zxid_/*/' -e 's/\*ZXID_/*/' -e 's/\*SAML2_/*/' -e 's/\*SAML_/*/' \
            -e 's/package zxid;/package Net::SAML;/' \
            -e 's/bootstrap zxid;/bootstrap Net::SAML;/' \
            -e 's/package zxid::/package Net::SAML::/' \
            -e 's/@ISA = qw( zxid );/@ISA = qw( Net::SAML );/' \
            <Net/zxid.pm >Net/SAML.pm

Net/SAML_wrap.c: Net/zxid_wrap.c
	sed -e 's/define SWIG_init    boot_zxid/define SWIG_init    boot_Net__SAML/' \
            <Net/zxid_wrap.c >Net/SAML_wrap.c

perlmod: Net/SAML_wrap.c Net/SAML.pm
	cd Net; $(PERL) Makefile.PL && $(MAKE)

perlclean:
	rm -rf Net/blib Net/*~ Net/*.o Net/Makefile Net/Makefile.old Net/SAML.bs Net/zxid_wrap.c Net/zxid.pm

perlcleaner: perlclean
	rm -f Net/SAML.pm Net/SAML_wrap.c

# Generated files

c/saml2-attrs.c: c/saml2-attrs.gperf
	$(GPERF) -t -D -C -T -l -G -W zx_attrs -N zx_attr2tok $< | \
          sed -e 's/lengthtable/zx_attrs_lens/' \
	      -e 's/static const struct zx_tok/const struct zx_tok/' >$@

c/saml2-elems.c: c/saml2-elems.gperf
	$(GPERF) -t -D -C -T -l -G -W zx_elems -N zx_elem2tok $< | \
          sed -e 's/lengthtable/zx_elems_lens/' \
	      -e 's/static const struct zx_tok/const struct zx_tok/' >$@

c/saml2-attrs.gperf c/saml2-elems.gperf c/saml2-dec.c c/saml2-enc.c c/saml2-aux.c c/saml2-getput.c c/saml2-data.h: $(ZX_SG) dec-templ.c enc-templ.c aux-templ.c getput-templ.c $(XSD2SG_PL)
	$(XSD2SG) -gen c/saml2 -p zx_ $(ZX_ROOTS) -S $(ZX_SG) >/dev/null

c/saml2-const.h: c/saml2-attrs.c c/saml2-elems.c
	cat c/saml2-attrs.c | $(PERL) gen-consts-from-gperf-output.pl zx_ _ATTR zx_attrs >$@
	cat c/saml2-elems.c | $(PERL) gen-consts-from-gperf-output.pl zx_ _ELEM zx_elems >>$@

c/saml2md-attrs.c: c/saml2md-attrs.gperf
	$(GPERF) -t -D -C -T -l -G -W zxmd_attrs -N zxmd_attr2tok $< | \
          sed -e 's/lengthtable/zxmd_attrs_lens/' \
	      -e 's/static const struct zx_tok/const struct zx_tok/' >$@

c/saml2md-elems.c: c/saml2md-elems.gperf
	$(GPERF) -t -D -C -T -l -G -W zxmd_elems -N zxmd_elem2tok $< | \
          sed -e 's/lengthtable/zxmd_elems_lens/' \
	      -e 's/static const struct zx_tok/const struct zx_tok/' >$@

c/saml2md-attrs.gperf c/saml2md-elems.gperf c/saml2md-dec.c c/saml2md-enc.c c/saml2md-aux.c c/saml2md-getput.c c/saml2md-data.h: $(ZXMD_SG) dec-templ.c enc-templ.c aux-templ.c getput-templ.c $(XSD2SG_PL)
	$(XSD2SG) -gen c/saml2md -p zxmd_ $(ZXMD_ROOTS) -S $(ZXMD_SG) >/dev/null

c/saml2md-const.h: c/saml2md-attrs.c c/saml2md-elems.c
	cat c/saml2md-attrs.c | $(PERL) gen-consts-from-gperf-output.pl zxmd_ _ATTR zxmd_attrs >$@
	cat c/saml2md-elems.c | $(PERL) gen-consts-from-gperf-output.pl zxmd_ _ELEM zxmd_elems >>$@

c/license.c: LICENSE-2.0.txt
	printf 'char* license = "' >$@
	echo 'Copyright (c) 2006 Sampo Kellomaki (sampo@iki.fi), All Rights Reserved.\n\' >>$@ #'
	sed -e 's/"/\\"/g' -e 's/$$/\\n\\/' LICENSE-2.0.txt >>$@
	echo '";' >>$@

c/zxidvers.h:
	echo "#ifndef _zxidvers_h" >c/zxidvers.h
	echo "#define _zxidvers_h" >>c/zxidvers.h
	echo "#define ZXID_VERSION $(VERSION)" >>c/zxidvers.h
	echo "#define ZXID_REL \"$(REL)\"" >>c/zxidvers.h
	echo "#endif" >>c/zxidvers.h

#
# Installation
#

dir:
	-mkdir -p $(ZXID_PATH)
	-mkdir $(ZXID_PATH)cot   # Circle of Trust, i.e. metadata xml of others
	-mkdir $(ZXID_PATH)ses   # Session store
	-mkdir $(ZXID_PATH)log   # Log files
	-mkdir $(ZXID_PATH)pem   # Our certificates and private keys (need to protect well)
	cp zxid.pem $(ZXID_PATH)pem/sign-cert-nopw.pem
	cp zxid.pem $(ZXID_PATH)pem/enc-cert-nopw.pem
	chmod -R 0700 $(ZXID_PATH)pem
	@echo "You may need to run"
	@echo
	@echo "    chown -R nobody $(ZXID_PATH)"
	@echo
	@echo "to make sure the zxid CGI script can write to the $(ZXID_PATH)"
	@echo "directory (substitute nobody with the user your web server runs as)."
	@echo

install: zxid dir
	@echo "Currently there is no official install procedure. Generally you will"
	@echo "need to copy zxid binary where your web server can find it and"
	@echo "make sure your web server is configured to recognize zxid as a CGI script."
	@echo
	@echo "For a quick test, you can try putting following in your /etc/hosts:"
	@echo
	@echo "  127.0.0.1       localhost sp1.zxidcommon.org sp1.zxidsp.org"
	@echo
	@echo "and then run"
	@echo
	@echo "  mini_httpd -p 8443 -c zxid -S -E zxid.pem"
	@echo
	@echo "in the zxid build (usually distribution) directory and then point web browser to"
	@echo
	@echo "https://sp1.zxidsp.org/zxid"
	@echo

# Maintenance

tags:
	etags *.[hc] c/*.[hc]

megatags:
	etags *.[hc] c/*.[hc] /d/aino/openssl-0.9.8a/*/*.[hc] /d/aino/openssl-0.9.8a/*/*/*.[hc] ~/ds/*/*.[hc] ~/ds/*/*.ds ~/slim/*/*.ds

cleaner: clean perlcleaner
	@echo ================== Making cleaner
	rm -f c/*.[hc] c/*.gperf c/*.y
	rm -rf pulver; mkdir pulver

# N.B. The clean and dist targets deliberately does not delete contents of
#      directory c/ although they are generated files. This is to allow
#      zxid to be built without the tools needed to generate those files.
clean: perlclean
	rm -f *.o zxid zxbench libzxid.a sizeof core* *~ .*~ .\#* c/*.o c/.*~ c/.\#* sg/.*~ sg/.\#* foo bar afr.*

dist: clean
	rm -rf zxid-$(REL)
	mkdir zxid-$(REL) zxid-$(REL)/c zxid-$(REL)/sg zxid-$(REL)/t  zxid-$(REL)/tex  zxid-$(REL)/html zxid-$(REL)/pulver zxid-$(REL)/Net
	cp *.[hc] Makefile LICENSE-2.0.txt zxid.pl zxid-$(REL)
	cp README.zxid apache.pd ca.crt zxid.pem zxid-$(REL)/
	cp sg/*.sg     zxid-$(REL)/sg
	cp c/*.[hc]    zxid-$(REL)/c
	cp t/*.xml     zxid-$(REL)/t
	cp Net/README.zxid-perl Net/Makefile.PL Net/SAML.pm Net/SAML_wrap.c Net/test.pl zxid-$(REL)/Net
	tar czf zxid-$(REL).tgz zxid-$(REL)

release:
	scp zxid-$(REL).tgz html/index.html html/apache.html html/README.zxid.html tex/README.zxid.pdf sampo@zxid.org:zxid.org

ifeq ($(PULVER),1)

dep: $(PULVER_DEPS)
	rm -f deps
	$(MAKE) deps

deps: $(ZXID_OBJ:.o=.c) $(ZX_OBJ:.o=.c) c/saml2-const.h c/saml2md-const.h $(PULVER_DEPS) c/zxidvers.h
	@echo ================== Making deps
	cat pulver/c_saml2_dec_c.deps | xargs $(CC) $(CDEF) $(CDIR) -MM >>deps
	cat pulver/c_saml2_enc_c.deps | xargs $(CC) $(CDEF) $(CDIR) -MM >>deps
	cat pulver/c_saml2_aux_c.deps | xargs $(CC) $(CDEF) $(CDIR) -MM >>deps
	cat pulver/c_saml2_getput_c.deps | xargs $(CC) $(CDEF) $(CDIR) -MM >>deps
	cat pulver/c_saml2md_dec_c.deps | xargs $(CC) $(CDEF) $(CDIR) -MM >>deps
	cat pulver/c_saml2md_enc_c.deps | xargs $(CC) $(CDEF) $(CDIR) -MM >>deps
	cat pulver/c_saml2md_aux_c.deps | xargs $(CC) $(CDEF) $(CDIR) -MM >>deps
	cat pulver/c_saml2md_getput_c.deps | xargs $(CC) $(CDEF) $(CDIR) -MM >>deps
	$(CC) $(CDEF) $(CDIR) -MM $(ZXID_OBJ:.o=.c) c/saml2-const.h c/saml2md-const.h >>deps

#	echo Deps built. $(foreach fil,$^,$(shell $(fil) >>deps))

else

dep: deps

deps: $(ZXID_OBJ:.o=.c) $(ZX_OBJ:.o=.c) c/saml2-const.h c/saml2md-const.h c/zxidvers.h
	$(CC) $(CDEF) $(CDIR) -MM $^ >deps

endif

-include deps

help:
	@echo "To compile for Linux 2.6: make"
	@echo "To compile for Solaris 8: make TARGET=sol8"
	@echo "To compile for Sparc Solaris 8 with cross compiler:"
	@echo '  PATH=/apps/gcc/sol8/bin:/apps/binutils/sol8/bin:$$PATH make TARGET=xsol8'
	@echo "Following make targets are available:"
	@grep '^[a-z-]:' Makefile

#EOF
