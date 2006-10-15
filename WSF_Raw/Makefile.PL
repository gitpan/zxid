# File : zxid/WSF_Raw/Makefile.PL
# $Id: Makefile.PL,v 1.2 2006/09/18 06:35:23 sampo Exp $
use ExtUtils::MakeMaker;
WriteMakefile(
  NAME    => "Net::WSF::Raw",
  INC     => '-I.. -I/apps/openssl/std/include -I/apps/include',
  LIBS    => ["-L.. -L/apps/openssl/std/lib -L/apps/lib -lzxid -lcrypto -lcurl -ldl -lz"],
  OBJECT  => "Raw_wrap.o"
);
