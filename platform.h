/*
 *  $Id: platform.h,v 1.1 2008-05-30 17:39:11 lbernardo Exp $
 */

#ifndef _platform_h
#define _platform_h

#ifdef MINGW
#define fdtype HANDLE
#define BADFD (INVALID_HANDLE_VALUE)
#define closefile(x) (CloseHandle(x)?0:-1)
#define openfile_ro(path) CreateFile((path), GENERIC_READ, FILE_SHARE_READ, 0 /*security*/, OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL, 0)
#else
#define fdtype int
#define BADFD (-1)
#define closefile(x) close(x)
#define openfile_ro(path) open((path),O_RDONLY)
#endif

#endif
