# zxid/Makefile  -  How to build ZXID
# Copyright (c) 2006 Sampo Kellomaki (sampo@iki.fi), All Rights Reserved.
# This is confidential unpublished proprietary source code of the author.
# NO WARRANTY, not even implied warranties. Contains trade secrets.
# Distribution prohibited unless authorized in writing. See file COPYING.
# $Id: Makefile,v 1.52 2006/10/15 00:27:26 sampo Exp $
# 15.10.2006, refactor sources to be per namespace --Sampo
#
# Build so far only tested on Linux. This makefile needs gmake-3.78 or newer.
# (See dietlibc (fefe.de) Makefile for some useful wizardry.)
# Try `make help'

vpath %.c ../zxid
vpath %.h ../zxid

all: zxid

REL=0.7
VERSION=0x000007

### Where package is installed (use `make PREFIX=/your/path' to change)
PREFIX=/usr/local/zxid/$(REL)

### Where runtime configuration and temporary data is kept.
### If you change following, be sure to edit zxidconf.h as well. N.B. Trailing / is needed.
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
CURL_ROOT=/usr/local
OPENSSL_ROOT=/usr/local/ssl
PHP_CONFIG=php-config
PERL=perl
XSD2SG_PL= ../pd/xsd2sg.pl
XSD2SG=$(PERL) $(XSD2SG_PL)
PULVERIZE=$(PERL) ./pulverize.pl
GPERF=gperf
SWIG=swig
AR=ar -crs
ARX=ar -x
CC=gcc
LD=gcc

### To change any of the above options, you can either supply
### alternate values on make command line, like `make PREFIX=/your/path'
### or you can create localconf.mk file to hold your options. This
### file is included here, but if it's missing, no problem.

-include localconf.mk

CDIR+= -I$(TOP) -I$(OPENSSL_ROOT)/include -I$(CURL_ROOT)/include
CDEF+= -D_REENTRANT -DDEBUG -DZXID=$(VERSION) -DREL="\"$(REL)\"" -DCOMPILED_DATE=`date +%s`
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
#CFLAGS += -Os    # gcc-3.4.6 miscompiles with -Os on ix86
#CFLAGS += -Wall

###
### End of platform dependent options, start of dependencies and targets (mortals
### can look, but should not edit).
###

ZXID_LIB_OBJ=zxidsso.o zxidslo.o zxidmk.o zxidlib.o zxidmeta.o
ZX_OBJ=zxlib.o zxutil.o zxsig.o c/license.o c/zx-attrs.o c/zx-elems.o
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

#ZX_OBJ +=

endif

ifeq ($(ENA_WSF),1)

#WSF_OBJ +=

endif

endif

#ZXID_OBJ=zxid.o zxidlib.o zxidmeta.o $(ZX_OBJ)
ZXID_OBJ=zxid.o
ZXBENCH_OBJ=zxbench.o zxidlib.o zxidmeta.o zxidsso.o zxidmk.o zxidslo.o $(ZX_OBJ)

#
# Schemata and potential xml document roots.
# See also sg/saml20-soap11.sg for a place to "glue" new functions in.
#

ZX_SG+=sg/xmldsig-core.sg sg/xenc-schema.sg

# SAML 2.0

ifeq ($(ENA_SAML2),1)

ZX_SG+=sg/saml-schema-assertion-2.0.sg sg/saml-schema-protocol-2.0.sg sg/saml20-soap11.sg
ZX_ROOTS+=-r sa:Assertion -r sp:AuthnRequest -r sp:Response
ZX_ROOTS+=-r sp:LogoutRequest -r sp:LogoutResponse
ZX_ROOTS+=-r sp:ManageNameIDRequest -r sp:ManageNameIDResponse
ZX_ROOTS+=-r se:Envelope

ZX_SG+=sg/saml-schema-metadata-2.0.sg
ZX_ROOTS+=-r md:EntityDescriptor -r md:EntitiesDescriptor

endif

# SAML 1.1

ifeq ($(ENA_SAML11),1)

ZX_SG +=     sg/oasis-sstc-saml-schema-protocol-1.1.sg sg/oasis-sstc-saml-schema-assertion-1.1.sg
ZX_ROOTS +=  -r sa11:Assertion -r sp11:Request -r sp11:Response

endif

# Liberty ID-FF 1.2

ifeq ($(ENA_FF12),1)

ZX_SG += sg/liberty-idff-protocols-schema-1.2-errata-v2.0.sg sg/liberty-authentication-context-v2.0.sg
ZX_ROOTS+= -r ff12:Assertion -r ff12:AuthnRequest -r ff12:AuthnResponse
ZX_ROOTS+= -r ff12:AuthnRequestEnvelope -r ff12:AuthnResponseEnvelope
ZX_ROOTS+= -r ff12:RegisterNameIdentifierRequest -r ff12:RegisterNameIdentifierResponse
ZX_ROOTS+= -r ff12:FederationTerminationNotification
ZX_ROOTS+= -r ff12:LogoutRequest -r ff12:LogoutResponse
ZX_ROOTS+= -r ff12:NameIdentifierMappingRequest -r ff12:NameIdentifierMappingResponse
ZX_SG+=    sg/liberty-metadata-v2.0.sg
ZX_ROOTS+= -r m20:EntityDescriptor -r m20:EntitiesDescriptor

endif

# Liberty ID-WSF 2.0

ifeq ($(ENA_WSF2),1)

ZX_SG += sg/wsf-soap11.sg sg/ds-soap11.sg sg/ws-addr-1.0.sg
ZX_SG += sg/wss-secext-1.0.sg sg/wss-util-1.0.sg
ZX_SG += sg/liberty-idwsf-soap-binding.sg sg/liberty-idwsf-soap-binding-v2.0.sg
ZX_SG += sg/liberty-idwsf-security-mechanisms-v2.0.sg sg/liberty-idwsf-disco-svc-v2.0.sg
ZX_SG += sg/liberty-idwsf-interaction-svc-v2.0.sg sg/liberty-idwsf-utility-v2.0.sg
ZX_ROOTS+=-r e:Envelope -r dise:Envelope

#ZX_SG += sg/saml-schema-assertion-2.0.sg sg/saml-schema-protocol-2.0.sg sg/xmldsig-core.sg sg/xenc-schema.sg sg/saml-schema-metadata-2.0.sg sg/oasis-sstc-saml-schema-protocol-1.1.sg sg/oasis-sstc-saml-schema-assertion-1.1.sg sg/liberty-idff-protocols-schema-1.2-errata-v2.0.sg sg/liberty-authentication-context-v2.0.sg

endif

# Liberty ID-WSF 1.1

ifeq ($(ENA_WSF11),1)

ZX_SG += sg/liberty-idwsf-soap-binding-v1.2.sg  sg/liberty-idwsf-security-mechanisms-v1.2.sg
ZX_SG += sg/liberty-idwsf-disco-svc-v1.2.sg     sg/liberty-idwsf-interaction-svc-v1.1.sg

endif

#
# Generated files (the zxid/c subdirectory)
#

ZX_GEN_H=\
 c/zx-a-data.h    c/zx-di12-data.h  c/zx-lu-data.h    c/zx-se-data.h     c/zx-xenc-data.h \
 c/zx-ac-data.h   c/zx-dise-data.h  c/zx-m20-data.h   c/zx-sec-data.h    c/zx-xml-data.h \
 c/zx-b-data.h    c/zx-ds-data.h    c/zx-md-data.h    c/zx-sec12-data.h  c/zx-xs-data.h \
 c/zx-b12-data.h  c/zx-e-data.h     c/zx-ns.h         c/zx-sp-data.h \
 c/zx-ff12-data.h c/zx-sa-data.h    c/zx-sp11-data.h \
 c/zx-data.h      c/zx-is-data.h    c/zx-sa11-data.h  c/zx-wsse-data.h \
 c/zx-di-data.h   c/zx-is12-data.h  c/zx-sbf-data.h   c/zx-wsu-data.h
ZX_GEN_C=\
 c/zx-a-aux.c      c/zx-di12-dec.c    c/zx-is-enc.c      c/zx-sa11-dec.c     c/zx-sp11-dec.c \
 c/zx-a-dec.c      c/zx-di12-enc.c    c/zx-is-getput.c   c/zx-sa11-enc.c     c/zx-sp11-enc.c \
 c/zx-a-enc.c      c/zx-di12-getput.c c/zx-is12-aux.c    c/zx-sa11-getput.c  c/zx-sp11-getput.c \
 c/zx-a-getput.c   c/zx-dise-aux.c    c/zx-is12-dec.c    c/zx-sbf-aux.c      c/zx-wsse-aux.c \
 c/zx-ac-aux.c     c/zx-dise-dec.c    c/zx-is12-enc.c    c/zx-sbf-dec.c      c/zx-wsse-dec.c \
 c/zx-ac-dec.c     c/zx-dise-enc.c    c/zx-is12-getput.c c/zx-sbf-enc.c      c/zx-wsse-enc.c \
 c/zx-ac-enc.c     c/zx-dise-getput.c c/zx-lu-aux.c      c/zx-sbf-getput.c   c/zx-wsse-getput.c \
 c/zx-ac-getput.c  c/zx-ds-aux.c      c/zx-lu-dec.c      c/zx-se-aux.c       c/zx-wsu-aux.c \
 c/zx-ds-dec.c     c/zx-lu-enc.c      c/zx-se-dec.c      c/zx-wsu-dec.c \
 c/zx-aux.c        c/zx-ds-enc.c      c/zx-lu-getput.c   c/zx-se-enc.c       c/zx-wsu-enc.c \
 c/zx-b-aux.c      c/zx-ds-getput.c   c/zx-m20-aux.c     c/zx-se-getput.c    c/zx-wsu-getput.c \
 c/zx-b-dec.c      c/zx-e-aux.c       c/zx-m20-dec.c     c/zx-sec-aux.c      c/zx-xenc-aux.c \
 c/zx-b-enc.c      c/zx-e-dec.c       c/zx-m20-enc.c     c/zx-sec-dec.c      c/zx-xenc-dec.c \
 c/zx-b-getput.c   c/zx-e-enc.c       c/zx-m20-getput.c  c/zx-sec-enc.c      c/zx-xenc-enc.c \
 c/zx-b12-aux.c    c/zx-e-getput.c    c/zx-md-aux.c      c/zx-sec-getput.c   c/zx-xenc-getput.c \
 c/zx-b12-dec.c    c/zx-md-dec.c      c/zx-sec12-aux.c   c/zx-xml-aux.c \
 c/zx-b12-enc.c    c/zx-enc.c         c/zx-md-enc.c      c/zx-sec12-dec.c    c/zx-xml-dec.c \
 c/zx-b12-getput.c c/zx-ff12-aux.c    c/zx-md-getput.c   c/zx-sec12-enc.c    c/zx-xml-enc.c \
 c/zx-dec.c        c/zx-ff12-dec.c    c/zx-ns.c          c/zx-sec12-getput.c c/zx-xml-getput.c \
 c/zx-di-aux.c     c/zx-ff12-enc.c    c/zx-sa-aux.c      c/zx-sp-aux.c       c/zx-xs-aux.c \
 c/zx-di-dec.c     c/zx-ff12-getput.c c/zx-sa-dec.c      c/zx-sp-dec.c       c/zx-xs-dec.c \
 c/zx-di-enc.c     c/zx-getput.c      c/zx-sa-enc.c      c/zx-sp-enc.c       c/zx-xs-enc.c \
 c/zx-di-getput.c  c/zx-is-aux.c      c/zx-sa-getput.c   c/zx-sp-getput.c    c/zx-xs-getput.c \
 c/zx-di12-aux.c   c/zx-is-dec.c      c/zx-sa11-aux.c    c/zx-sp11-aux.c

ifeq ($(ENA_GEN),1)

c/zx-attrs.c: c/zx-attrs.gperf
	$(GPERF) -t -D -C -T -l -G -W zx_attrs -N zx_attr2tok $< | \
          sed -e 's/lengthtable/zx_attrs_lens/' \
	      -e 's/static const struct zx_tok/const struct zx_tok/' >$@

c/zx-elems.c: c/zx-elems.gperf
	$(GPERF) -t -D -C -T -l -G -W zx_elems -N zx_elem2tok $< | \
          sed -e 's/lengthtable/zx_elems_lens/' \
	      -e 's/static const struct zx_tok/const struct zx_tok/' >$@

c/zx-attrs.gperf c/zx-elems.gperf $(ZX_GEN_C) $(ZX_GEN_H): $(ZX_SG) dec-templ.c enc-templ.c aux-templ.c getput-templ.c $(XSD2SG_PL)
	$(XSD2SG) -gen c/zx -p zx_ $(ZX_ROOTS) -S $(ZX_SG) >/dev/null

c/zx-const.h: c/zx-attrs.c c/zx-elems.c
	cat c/zx-attrs.c | $(PERL) gen-consts-from-gperf-output.pl zx_ _ATTR zx_attrs >$@
	cat c/zx-elems.c | $(PERL) gen-consts-from-gperf-output.pl zx_ _ELEM zx_elems >>$@

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
endif

###
###  Perl Modules
###

# Main Net::SAML module - high level APIs

ifeq ($(ENA_GEN),1)

Net/SAML_wrap.c Net/SAML.pm: $(ZX_GEN_H) zxid.h zxid.i
	$(SWIG) -o Net/SAML_wrap.c -perl zxid.i
	$(PERL) -pi -e 's/\*zxid_/*/i; s/\*SAML2?_/*/i' Net/SAML.pm

# Net::SAML::Metadata - low level metadata APIs

Metadata/Metadata_wrap.c Metadata/Metadata.pm: $(ZX_GEN_H) zxidmd.i
	$(SWIG) -o Metadata/Metadata_wrap.c -perl zxidmd.i
	$(PERL) -pi -e 's/\*SAML2?_/*/i' Metadata/Metadata.pm

# Net::SAML::Raw - low level assertion and protocol APIs

Raw/Raw_wrap.c Raw/Raw.pm: $(ZX_GEN_H) zxidraw.i
	$(SWIG) -o Raw/Raw_wrap.c -perl zxidraw.i
	$(PERL) -pi -e 's/\*SAML2?_/*/i' Raw/Raw.pm

# Net::WSF::WSC - high level APIs for implementing WSC

WSC/WSC_wrap.c WSC/WSC.pm: $(ZX_GEN_H) zxwsc.h wsc.i
	$(SWIG) -o WSC/WSC_wrap.c -perl wsc.i
	$(PERL) -pi -e 's/\*zxwsc_/*/i; s/\*SAML2?_/*/i' WSC/WSC.pm

# Net::WSF::Raw - low level protocol APIs

WSF_Raw/Raw_wrap.c WSF_Raw/Raw.pm: $(ZX_GEN_H) wsfraw.i
	$(SWIG) -o WSF_Raw/Raw_wrap.c -perl wsfraw.i
	$(PERL) -pi -e 's/\*zxwsc_/*/i; s/\*SAML2?_/*/i' WSF_Raw/Raw.pm

endif

# Overall

samlmod Net/Makefile: Net/SAML_wrap.c Net/SAML.pm
	cd Net; $(PERL) Makefile.PL && $(MAKE)

samlmod_install: Net/Makefile
	cd Net; $(MAKE) install

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

ifeq ($(ENA_GEN),1)

php/zxid_wrap.c php/zxid.php php/php_zxid.h php/Makefile: $(ZX_GEN_H) zxid.h zxid.i
	cd php; $(SWIG) -o zxid_wrap.c -noproxy -php ../phpzxid.i

endif

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

libzxid.a: $(ZX_GEN_C:.c=.o) $(ZXID_LIB_OBJ) $(ZX_OBJ) $(WSF_OBJ)
	$(AR) libzxid.a $^

endif

libzxid.so.0.0: libzxid.a
	$(LD) -o libzxid.so.0.0 -shared --export-all-symbols -Wl,-whole-archive $^ -Wl,-no-whole-archive

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
	etags *.[hc] c/*.[hc] /d/aino/openssl-0.9.8c/*/*.[hc] /d/aino/openssl-0.9.8c/*/*/*.[hc] ~/ds/*/*.[hc] ~/ds/*/*.ds ~/slim/*/*.ds ~/pd/xsd2sg.pl ~/pd/pd2tex ~/ds/io/dsproxy-test.pl

docclean:
	rm -f *.dbx *.tex

cleaner: clean perlcleaner
	@echo ================== Making cleaner
	rm -f c/*.[hc] c/*.gperf c/*.y deps deps.dep c/*.deps
	rm -rf pulver; mkdir pulver

# N.B. The clean and dist targets deliberately do not delete contents of
#      directory c/ although they are generated files. This is to allow
#      zxid to be built without the tools needed to generate those files.
clean: perlclean phpclean docclean
	@echo ------------------ Making clean
	rm -f *.o zxid zxbench libzxid.a libzxid.so* sizeof zxid.stderr
	rm -f core* *~ .*~ .\#* c/*.o c/.*~ c/.\#* sg/*~ sg/.*~ sg/.\#* foo bar afr.*

old-dist: clean
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

dist: clean
	rm -rf zxid-$(REL)
	mkdir zxid-$(REL) zxid-$(REL)/c zxid-$(REL)/sg zxid-$(REL)/t  zxid-$(REL)/tex  zxid-$(REL)/html zxid-$(REL)/pulver zxid-$(REL)/Net zxid-$(REL)/Metadata zxid-$(REL)/Raw zxid-$(REL)/WSC zxid-$(REL)/WSF_Raw zxid-$(REL)/php
	$(PERL) mkdist.pl zxid-$(REL) <Manifest
	tar czf zxid-$(REL).tgz zxid-$(REL)

release:
	scp zxid-$(REL).tgz html/index.html html/apache.html html/README.zxid.html tex/README.zxid.pdf html/i-*.png zxid-frame.html sampo@zxid.org:zxid.org

relhtml:
	scp html/* sampo@zxid.org:zxid.org/html

cvstag:
	cvs tag ZXID_REL_$(VERSION)

prep: c/saml2-const.h c/saml2md-const.h c/wsf-const.h c/zxidvers.h


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

deps: $(ZXID_OBJ:.o=.c) $(ZX_OBJ:.o=.c) $(ZX_GEN_H) $(ZX_GEN_C) c/zx-const.h c/zxidvers.h
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
