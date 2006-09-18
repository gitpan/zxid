# File : zxid/Net/Makefile.PL
# $Id: Makefile.PL,v 1.2 2006/09/06 02:33:06 sampo Exp $
use ExtUtils::MakeMaker;
WriteMakefile(
  NAME    => "Net::SAML",
  INC     => '-I.. -I/apps/openssl/std/include -I/apps/include',
  LIBS    => ["-L.. -L/apps/openssl/std/lib -L/apps/lib -lzxid -lcrypto -lcurl -ldl -lz"],
  OBJECT  => "SAML_wrap.o"
);
