# File : zxid/Metadata/Makefile.PL
# $Id: Makefile.PL,v 1.1 2006/09/14 23:18:48 sampo Exp $
use ExtUtils::MakeMaker;
WriteMakefile(
  NAME    => "Net::SAML::Metadata",
  INC     => '-I.. -I/apps/openssl/std/include -I/apps/include',
  LIBS    => ["-L.. -L/apps/openssl/std/lib -L/apps/lib -lzxid -lcrypto -lcurl -ldl -lz"],
  OBJECT  => "Metadata_wrap.o"
);
