dnl
dnl $Id: config.m4,v 1.4.2.6 2005/12/04 00:21:39 tony2001 Exp $
dnl

PHP_ARG_ENABLE(xmlwriter, whether to enable XMLWriter support,
[  --enable-xmlwriter     Enable XMLWriter support], no)

if test -z "$PHP_LIBXML_DIR"; then
  PHP_ARG_WITH(libxml-dir, libxml2 install dir,
  [  --with-libxml-dir=DIR     XMLWriter: libxml2 install prefix], no, no)
fi

if test "$PHP_XMLWRITER" != "no"; then

  if test "$PHP_LIBXML" = "no"; then
    AC_MSG_ERROR([XMLWriter extension requires LIBXML extension, add --enable-libxml])
  fi

  PHP_SETUP_LIBXML(XMLWRITER_SHARED_LIBADD, [
    AC_DEFINE(HAVE_XMLWRITER,1,[ ])
    PHP_NEW_EXTENSION(xmlwriter, php_xmlwriter.c, $ext_shared)
    PHP_SUBST(XMLWRITER_SHARED_LIBADD)
  ], [
    AC_MSG_ERROR([xml2-config not found. Please check your libxml2 installation.])
  ])
fi
