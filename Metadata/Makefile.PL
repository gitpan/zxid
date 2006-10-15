# File : zxid/Metadata/Makefile.PL
# $Id: Makefile.PL,v 1.2 2006/09/18 06:35:22 sampo Exp $
use ExtUtils::MakeMaker;
WriteMakefile(
  NAME    => "Net::SAML::Metadata",
  INC     => '-I.. -I/apps/openssl/std/include -I/apps/include',
  LIBS    => ["-L.. -L/apps/openssl/std/lib -L/apps/lib -lzxid -lcrypto -lcurl -ldl -lz"],
  OBJECT  => "Metadata_wrap.o"
);
