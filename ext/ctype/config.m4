dnl
dnl $Id: config.m4,v 1.5 2002/03/12 16:44:00 sas Exp $
dnl

PHP_ARG_ENABLE(ctype, whether to enable ctype functions,
[  --enable-ctype         Enable ctype functions], no)

if test "$PHP_CTYPE" != "no"; then
  AC_DEFINE(HAVE_CTYPE, 1, [ ])
  PHP_NEW_EXTENSION(ctype, ctype.c, $ext_shared)
fi
