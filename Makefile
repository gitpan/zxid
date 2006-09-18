# zxid/Makefile  -  How to build ZXID
# Copyright (c) 2006 Sampo Kellomaki (sampo@iki.fi), All Rights Reserved.
# This is confidential unpublished proprietary source code of the author.
# NO WARRANTY, not even implied warranties. Contains trade secrets.
# Distribution prohibited unless authorized in writing. See file COPYING.
# $Id: Makefile,v 1.44 2006/09/16 05:59:56 sampo Exp $
# Build so far only tested on Linux. This makefile needs gmake-3.78 or newer.
# (See dietlibc (fefe.de) Makefile for some usefule wizardry.)
# Try `make help'

vpath %.c ../zxid
vpath %.h ../zxid

all: zxid libzxid.so.0.0

REL=0.6
VERSION=0x000006

PREFIX=/usr/local/zxid/$(REL)

# If you change following, be sure to edit zxidconf.h as well. N.B. Trailing / is needed.
ZXID_PATH=/var/zxid/

###
### Module selection options
###

ENA_SSO=1
ENA_SAML2=1
ENA_FF12=1
ENA_SAML11=1

ENA_WSF=1
ENA_WSF2=1
ENA_WSF11=1

###
### Environment dependent options
###

TOP=$(shell pwd)
CURL_ROOT=/apps
OPENSSL_ROOT=/apps/openssl/std
#OPENSSL_ROOT=/usr/local/ssl
PHP_CONFIG=php-config
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
LIBS=-lpthread -L$(CURL_ROOT)/lib -L$(OPENSSL_ROOT)/lib -lcrypto -ldl -lcurl -lz

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

CFLAGS=-g -fpic -fmessage-length=0 -Wno-unused-label -Wno-unknown-pragmas -fno-strict-aliasing $(CDEF) $(CDIR)
CFLAGS += -Os
#CFLAGS += -Wall

###
### End of platform dependent options, start of dependencies and targets (mortals
### can look, but should not edit).
###

ZXID_LIB_OBJ=zxidsso.o zxidslo.o zxidmk.o zxidlib.o zxidmeta.o
ZX_OBJ=zxlib.o zxutil.o \
  c/saml2-attrs.o  c/saml2md-attrs.o \
  c/saml2-elems.o  c/saml2md-elems.o \
  c/saml2-ns.o     c/saml2md-ns.o \
  c/license.o
WSF_OBJ=

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

ifeq ($(ENA_SSO),1)

# Nonpulverized build. This will result in bigger binaries because gnu ld does
# not understand to do dead function elimination. However, this is faster to build.

ZX_OBJ += \
  c/saml2-dec.o    c/saml2md-dec.o \
  c/saml2-enc.o    c/saml2md-enc.o \
  c/saml2-aux.o    c/saml2md-aux.o \
  c/saml2-getput.o c/saml2md-getput.o

endif

ifeq ($(ENA_WSF),1)

WSF_OBJ += c/wsf-dec.o c/wsf-enc.o c/wsf-aux.o c/wsf-getput.o

endif

endif

#ZXID_OBJ=zxid.o zxidlib.o zxidmeta.o $(ZX_OBJ)
ZXID_OBJ=zxid.o
ZXBENCH_OBJ=zxbench.o $(ZX_OBJ)

#
# Schemata and potential xml document roots.
# See also sg/saml20-soap11.sg for a place to "glue" new functions in.
#

# SAML 2.0

ifeq ($(ENA_SAML2),1)

ZX_SG+=sg/saml-schema-assertion-2.0.sg sg/saml-schema-protocol-2.0.sg sg/xmldsig-core.sg sg/xenc-schema.sg sg/saml20-soap11.sg
ZX_ROOTS+=-r sa:Assertion -r sp:AuthnRequest -r sp:Response -r sp:LogoutRequest -r sp:LogoutResponse -r sp:ManageNameIDRequest -r sp:ManageNameIDResponse -r se:Envelope

ZXMD_SG+=sg/saml-schema-assertion-2.0.sg sg/saml-schema-metadata-2.0.sg sg/xmldsig-core.sg sg/xenc-schema.sg
ZXMD_ROOTS+=-r md:EntityDescriptor -r md:EntitiesDescriptor

endif

# SAML 1.1

ifeq ($(ENA_SAML11),1)

ZX_SG +=     sg/oasis-sstc-saml-schema-protocol-1.1.sg sg/oasis-sstc-saml-schema-assertion-1.1.sg
ZX_ROOTS +=  -r sa11:Assertion -r sp11:Request -r sp11:Response

endif

# Liberty ID-FF 1.2

ifeq ($(ENA_FF12),1)

ZX_SG +=     sg/liberty-idff-protocols-schema-1.2-errata-v2.0.sg sg/liberty-authentication-context-v2.0.sg
ZX_ROOTS +=  -r ff12:Assertion -r ff12:AuthnRequest -r ff12:AuthnResponse -r ff12:AuthnRequestEnvelope -r ff12:AuthnResponseEnvelope -r ff12:RegisterNameIdentifierRequest -r ff12:RegisterNameIdentifierResponse -r ff12:FederationTerminationNotification -r ff12:LogoutRequest -r ff12:LogoutResponse -r ff12:NameIdentifierMappingRequest -r ff12:NameIdentifierMappingResponse
ZXMD_SG+=    sg/liberty-metadata-v2.0.sg
ZXMD_ROOTS+= -r m20:EntityDescriptor -r m20:EntitiesDescriptor

endif

# Liberty ID-WSF 2.0

ifeq ($(ENA_WSF2),1)

WSF_SG += sg/wsf-soap11.sg sg/ds-soap11.sg sg/ws-addr-1.0.sg sg/wss-secext-1.0.sg sg/wss-util-1.0.sg sg/liberty-idwsf-soap-binding.sg sg/liberty-idwsf-soap-binding-v2.0.sg sg/liberty-idwsf-security-mechanisms-v2.0.sg sg/liberty-idwsf-disco-svc-v2.0.sg sg/liberty-idwsf-interaction-svc-v2.0.sg sg/liberty-idwsf-utility-v2.0.sg
WSF_ROOTS+=-r e:Envelope -r dise:Envelope

endif

# Liberty ID-WSF 1.1

ifeq ($(ENA_WSF11),1)

WSF_SG += sg/liberty-idwsf-soap-binding-v1.2.sg sg/liberty-idwsf-security-mechanisms-v1.2.sg sg/liberty-idwsf-disco-svc-v1.2.sg sg/liberty-idwsf-interaction-svc-v1.1.sg

endif

#
# Binaries
#

zxid: $(ZXID_OBJ) libzxid.a
	$(LD) $(LDFLAGS) -o zxid $(ZXID_OBJ) -L. -lzxid $(LIBS)

zxbench: $(ZXBENCH_OBJ)
	$(LD) $(LDFLAGS) -o zxbench $^ $(LIBS)

sizeof:
	$(CC) -o sizeof sizeof.c

#
# Libraries
#

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

libzxid.a: $(ZXID_LIB_OBJ) $(ZX_OBJ) $(WSF_OBJ)
	$(AR) libzxid.a $^

endif

libzxid.so.0.0: libzxid.a
	$(LD) -o libzxid.so.0.0 -shared --export-all-symbols -Wl,-whole-archive $^ -Wl,-no-whole-archive

###
###  Perl Modules
###

# Main Net::SAML module - high level APIs

Net/SAML_wrap.c Net/SAML.pm: c/saml2-data.h zxid.h zxid.i
	$(SWIG) -o Net/SAML_wrap.c -perl zxid.i
	$(PERL) -pi -e 's/\*zxid_/*/i; s/\*SAML2?_/*/i' Net/SAML.pm

# Net::SAML::Metadata - low level metadata APIs

Metadata/Metadata_wrap.c Metadata/Metadata.pm: c/saml2md-data.h zxidmd.i
	$(SWIG) -o Metadata/Metadata_wrap.c -perl zxidmd.i
	$(PERL) -pi -e 's/\*SAML2?_/*/i' Metadata/Metadata.pm

# Net::SAML::Raw - low level assertion and protocol APIs

Raw/Raw_wrap.c Raw/Raw.pm: c/saml2-data.h zxidraw.i
	$(SWIG) -o Raw/Raw_wrap.c -perl zxidraw.i
	$(PERL) -pi -e 's/\*SAML2?_/*/i' Raw/Raw.pm

# Net::WSF::WSC - high level APIs for implementing WSC

WSC/WSC_wrap.c WSC/WSC.pm: c/wsf-data.h zxwsc.h wsc.i
	$(SWIG) -o WSC/WSC_wrap.c -perl wsc.i
	$(PERL) -pi -e 's/\*zxwsc_/*/i; s/\*SAML2?_/*/i' WSC/WSC.pm

# Net::WSF::Raw - low level protocol APIs

WSF_Raw/Raw_wrap.c WSF_Raw/Raw.pm: c/wsf-data.h wsfraw.i
	$(SWIG) -o WSF_Raw/Raw_wrap.c -perl wsfraw.i
	$(PERL) -pi -e 's/\*zxwsc_/*/i; s/\*SAML2?_/*/i' WSF_Raw/Raw.pm

# Overall

samlmod: Net/SAML_wrap.c Net/SAML.pm
	cd Net; $(PERL) Makefile.PL && $(MAKE)

mdmod: Metadata/Metadata_wrap.c Metadata/Metadata.pm
	cd Metadata; $(PERL) Makefile.PL && $(MAKE)

rawmod: Raw/Raw.pm Raw/Raw_wrap.c
	cd Raw; $(PERL) Makefile.PL && $(MAKE)

wscmod: WSC/WSC.pm WSC/WSC_wrap.c
	cd WSC; $(PERL) Makefile.PL && $(MAKE)

wsfrawmod: WSF_Raw/Raw.pm WSF_Raw/Raw_wrap.c
	cd WSF_Raw; $(PERL) Makefile.PL && $(MAKE)

perlmod: samlmod mdmod rawmod wscmod wsfrawmod

perlclean:
	@echo ------------------ Making perlclean
	rm -rf Net/blib Net/*~ Net/*.o Net/Makefile Net/Makefile.old Net/SAML.bs
	rm -rf Metadata/blib Metadata/*~ Metadata/*.o Metadata/Makefile Metadata/Makefile.old Metadata/Metadata.bs
	rm -rf Raw/blib Raw/*~ Raw/*.o Raw/Makefile Raw/Makefile.old Raw/Raw.bs
	rm -rf WSC/blib WSC/*~ WSC/*.o WSC/Makefile WSC/Makefile.old WSC/WSC.bs
	rm -rf WSF_Raw/blib WSF_Raw/*~ WSF_Raw/*.o WSF_Raw/Makefile WSF_Raw/Makefile.old WSF_Raw/Raw.bs

perlcleaner: perlclean
	@echo ------------------ Making perlcleaner
	rm -f Net/SAML.pm Net/SAML_wrap.c
	rm -f Metadata/Metadata_wrap.c Metadata/Metadata.pm
	rm -f Raw/Raw.pm Raw/Raw_wrap.c
	rm -f WSC/WSC.pm WSC/WSC_wrap.c
	rm -f WSF_Raw/Raw.pm WSF_Raw/Raw_wrap.c

###
###  PHP Module
###

php/zxid_wrap.c php/zxid.php php/php_zxid.h php/Makefile: c/saml2-data.h zxid.h zxid.i
	cd php; $(SWIG) -o zxid_wrap.c -noproxy -php ../phpzxid.i

php/zxid_wrap.o: php/zxid_wrap.c
	$(CC) -c -o $@ `$(PHP_CONFIG) --includes` $(CFLAGS) $<

php/php_zxid.so: php/zxid_wrap.o
	$(LD) -o php/php_zxid.so -shared php/zxid_wrap.o -L. -lzxid $(LIBS)

phpzxid: php/php_zxid.so

phpzxid_install: php/php_zxid.so
	@echo Installing in `$(PHP_CONFIG) --extension-dir`
	mkdir -p `$(PHP_CONFIG) --extension-dir`
	cp $< `$(PHP_CONFIG) --extension-dir`

phpclean:
	rm -rf php/*.o php/*~ php/*.so

phpcleaner: phpclean
	rm -rf php/php_zxid.h php/zxid.php php/zxid_wrap.c

#
# Generated files (the zxid/c subdirectory)
#

# SSO

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

# Metadata

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

# WSF

c/wsf-attrs.c: c/wsf-attrs.gperf
	$(GPERF) -t -D -C -T -l -G -W zxwsf_attrs -N zxwsf_attr2tok $< | \
          sed -e 's/lengthtable/zxwsf_attrs_lens/' \
	      -e 's/static const struct zx_tok/const struct zx_tok/' >$@

c/wsf-elems.c: c/wsf-elems.gperf
	$(GPERF) -t -D -C -T -l -G -W zxwsf_elems -N zxwsf_elem2tok $< | \
          sed -e 's/lengthtable/zxwsf_elems_lens/' \
	      -e 's/static const struct zx_tok/const struct zx_tok/' >$@

c/wsf-attrs.gperf c/wsf-elems.gperf c/wsf-dec.c c/wsf-enc.c c/wsf-aux.c c/wsf-getput.c c/wsf-data.h: $(WSF_SG) dec-templ.c enc-templ.c aux-templ.c getput-templ.c $(XSD2SG_PL)
	$(XSD2SG) -gen c/wsf -p zxwsf_ -ext ds -ext xenc -ext sp -ext md -ext sa11 -ext ff12 $(WSF_ROOTS) -S $(WSF_SG) >/dev/null

c/wsf-const.h: c/wsf-attrs.c c/wsf-elems.c
	cat c/wsf-attrs.c | $(PERL) gen-consts-from-gperf-output.pl zxwsf_ _ATTR zxwsf_attrs >$@
	cat c/wsf-elems.c | $(PERL) gen-consts-from-gperf-output.pl zxwsf_ _ELEM zxwsf_elems >>$@

# Other

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

install: zxid libzxid.a libzxid.so.0.0 dir
	@echo "===== Installing in $(PREFIX) (to change do make install PREFIX=/your/path)"
	-mkdir -p $(PREFIX) $(PREFIX)/bin $(PREFIX)/lib $(PREFIX)/include/zxid
	cp zxid $(PREFIX)/bin
	cp libzxid.a libzxid.so* $(PREFIX)/lib
	cp libzxid.so.0.0 $(PREFIX)/lib
	cp *.h c/*.h $(PREFIX)/include/zxid
	@echo "You will need to copy zxid binary where your web server can find it and"
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

#
# Maintenance
#

tags:
	etags *.[hc] c/*.[hc]

megatags:
	etags *.[hc] c/*.[hc] /d/aino/openssl-0.9.8a/*/*.[hc] /d/aino/openssl-0.9.8a/*/*/*.[hc] ~/ds/*/*.[hc] ~/ds/*/*.ds ~/slim/*/*.ds ~/pd/xsd2sg.pl ~/pd/pd2tex ~/ds/io/dsproxy-test.pl

docclean:
	rm -f *.dbx *.tex

cleaner: clean perlcleaner
	@echo ================== Making cleaner
	rm -f c/*.[hc] c/*.gperf c/*.y deps deps.dep c/*.deps
	rm -rf pulver; mkdir pulver

# N.B. The clean and dist targets deliberately does not delete contents of
#      directory c/ although they are generated files. This is to allow
#      zxid to be built without the tools needed to generate those files.
clean: perlclean docclean
	@echo ------------------ Making clean
	rm -f *.o zxid zxbench libzxid.a sizeof zxid.stderr
	rm -f core* *~ .*~ .\#* c/*.o c/.*~ c/.\#* sg/*~ sg/.*~ sg/.\#* foo bar afr.*

dist: clean
	rm -rf zxid-$(REL)
	mkdir zxid-$(REL) zxid-$(REL)/c zxid-$(REL)/sg zxid-$(REL)/t  zxid-$(REL)/tex  zxid-$(REL)/html zxid-$(REL)/pulver zxid-$(REL)/Net zxid-$(REL)/Metadata zxid-$(REL)/Raw zxid-$(REL)/WSC zxid-$(REL)/WSF_Raw zxid-$(REL)/php
	cp *.[hc] *.i Makefile LICENSE-2.0.txt zxid.pl zxid-$(REL)
	cp README.zxid apache.pd ca.crt zxid.pem favicon.ico zxid-$(REL)/
	cp sg/*.sg     zxid-$(REL)/sg
	cp c/*.[hc]    zxid-$(REL)/c
	cp t/*.xml     zxid-$(REL)/t
	cp Net/README.zxid-perl Net/Makefile.PL Net/SAML.pod Net/SAML.pm Net/SAML_wrap.c Net/test.pl zxid-$(REL)/Net
	-cp Metadata/Makefile.PL Metadata/Metadata.pod Metadata/Metadata.pm Metadata/Metadata_wrap.c Metadata/test.pl zxid-$(REL)/Metadata
	-cp Raw/Makefile.PL Raw/Raw.pod Raw/Raw.pm Raw/Raw_wrap.c Raw/test.pl zxid-$(REL)/Raw
	-cp WSC/Makefile.PL WSC/WSC.pod WSC/WSC.pm WSC/WSC_wrap.c WSC/test.pl zxid-$(REL)/WSC
	-cp WSF_Raw/Makefile.PL WSF_Raw/Raw.pod WSF_Raw/Raw.pm WSF_Raw/Raw_wrap.c WSF_Raw/test.pl zxid-$(REL)/WSF_Raw
	-cp php/README.zxid-php php/php_zxid.h php/zxid.php php/zxid_wrap.c zxid-$(REL)/php
	tar czf zxid-$(REL).tgz zxid-$(REL)

release:
	scp zxid-$(REL).tgz html/index.html html/apache.html html/README.zxid.html tex/README.zxid.pdf sampo@zxid.org:zxid.org

cvstag:
	cvs tag ZXID_REL_$(VERSION)

ifeq ($(PULVER),1)

dep: $(PULVER_DEPS)
	rm -f deps.dep
	$(MAKE) deps.dep

deps: $(ZXID_OBJ:.o=.c) $(ZX_OBJ:.o=.c) c/saml2-const.h c/saml2md-const.h c/wsf-const.h $(PULVER_DEPS) c/zxidvers.h
	@echo ================== Making deps
	cat pulver/c_saml2_dec_c.deps | xargs $(CC) $(CDEF) $(CDIR) -MM >>deps.dep
	cat pulver/c_saml2_enc_c.deps | xargs $(CC) $(CDEF) $(CDIR) -MM >>deps.dep
	cat pulver/c_saml2_aux_c.deps | xargs $(CC) $(CDEF) $(CDIR) -MM >>deps.dep
	cat pulver/c_saml2_getput_c.deps | xargs $(CC) $(CDEF) $(CDIR) -MM >>deps.dep
	cat pulver/c_saml2md_dec_c.deps | xargs $(CC) $(CDEF) $(CDIR) -MM >>deps.dep
	cat pulver/c_saml2md_enc_c.deps | xargs $(CC) $(CDEF) $(CDIR) -MM >>deps.dep
	cat pulver/c_saml2md_aux_c.deps | xargs $(CC) $(CDEF) $(CDIR) -MM >>deps.dep
	cat pulver/c_saml2md_getput_c.deps | xargs $(CC) $(CDEF) $(CDIR) -MM >>deps.dep
	$(CC) $(CDEF) $(CDIR) -MM $(ZXID_OBJ:.o=.c) c/saml2-const.h c/saml2md-const.h >>deps.dep

#	echo Deps built. $(foreach fil,$^,$(shell $(fil) >>deps.dep))

else

dep: deps

deps: $(ZXID_OBJ:.o=.c) $(ZX_OBJ:.o=.c) c/saml2-const.h c/saml2md-const.h c/wsf-const.h c/zxidvers.h
	$(CC) $(CDEF) $(CDIR) -MM $^ >deps.dep

endif

# N.B. If deps target and the actual deps.dep file have same name,
# the deps target will be made every time deps is missing - even
# when attempting to run `make clean'

-include deps.dep

help:
	@echo "To compile for Linux 2.6: make"
	@echo "To compile for Solaris 8: make TARGET=sol8"
	@echo "To compile for Sparc Solaris 8 with cross compiler:"
	@echo '  PATH=/apps/gcc/sol8/bin:/apps/binutils/sol8/bin:$$PATH make TARGET=xsol8'
	@echo "Following make targets are available:"
	@grep '^[a-z-]:' Makefile

#EOF
