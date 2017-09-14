#                                               -*- Autoconf -*-
# Process this file with autoconf to produce a configure script.
AC_PREREQ([2.69])
AC_INIT([libaescprintf], [1.0.0], [mrcyberfighter@gmail.com])

AC_CONFIG_SRCDIR([/src/libaescprintf.c])
AC_CONFIG_HEADERS([config.h])

AM_INIT_AUTOMAKE([foreign -Wall -Werror])
AM_PROG_AR

LT_INIT([win32-dll])
LT_LANG([C])

AC_CONFIG_MACRO_DIRS([m4])

AC_COPYRIGHT([LGPLv3])

# Checks compilers.
AC_PROG_CC
AC_PROG_CC_C_O
AC_PROG_CPP
AC_PROG_CC_STDC
AC_PROG_CC_C99
AC_PROG_CXX

AC_C_CONST
AC_C_INLINE

AC_CANONICAL_HOST


############################## Not tested !!! #################################
dnl ***************************************************************************
dnl Check for Windows
dnl ***************************************************************************

case $host_os in

  *mingw*)
    platform_win32=yes
    native_win32=yes
    ;;

  pw32* | *cygwin*)
    platform_win32=yes
    native_win32=no
    ;;

  *)
    platform_win32=no
    native_win32=no
    ;;

esac  
###############################################################################

############################## Tested it works ################################
case $host_os in
  *linux-gnu*)
    platform_linux=yes
    platform_darwin=no
    ;;

  *darwin*)
    platform_darwin=yes
    platform_linux=no
    ;;

esac
###############################################################################


AM_CONDITIONAL(PLATFORM_WIN32, test x"$platform_win32" = "xyes")
AM_CONDITIONAL(NATIVE_WIN32, test x"$native_win32" = "xyes")
AM_CONDITIONAL(PLATFORM_LINUX, test x"$platform_linux" = "xyes")
AM_CONDITIONAL(PLATFORM_DARWIN, test x"$platform_darwin" = "xyes")

###############################################################################


# Check va_list: This macro uses compile-time detection
# and so is cross-compile ready.
# I get problems with this m4 macro... ???
# AX_C_REFERENCEABLE_PASSED_VA_LIST

# POSIX programs detection.
AC_PROG_INSTALL
AC_PROG_MKDIR_P
AC_PROG_LN_S
AC_PROG_MAKE_SET
# UNIX sed is different from GNU sed.
#AC_PROG_SED

# coreutils package
AC_PATH_PROG([CHMOD],         [chmod],        [no])
AC_PATH_PROG([RM],            [rm],           [no])
AC_PATH_PROG([SED],           [sed],          [no])

if test x"$CHMOD" = xno ; then

  AC_MSG_ERROR(Install the coreutils package (chmod is missing) !, 1)

fi

if test x"$CP" = xno ; then

  AC_MSG_ERROR(Install the coreutils package (cp is missing) !, 1)

fi


if test x"$RM" = xno ; then

  AC_MSG_ERROR(Install the coreutils package (rm is missing) !, 1)

fi


if test x"$MV" = xno ; then

  AC_MSG_ERROR(Install the coreutils package (mv is missing) !, 1)

fi

if test x"$RMDIR" = xno ; then

  AC_MSG_ERROR(Install the coreutils package (rmdir is missing) !, 1)

fi

if test x"$SED" = xno ; then

  AC_MSG_WARN(Install the sed binary !, 1)

fi

if test x"$WC" = xno ; then

  AC_MSG_WARN(Install the wc binary !, 1)

fi

if test x"$TOUCH" = xno ; then

AC_MSG_ERROR(Install the coreutils package (touch is missing) !, 1)

fi

############### Checking for packages ############

# Checks for libraries.

# Checks for header files.
AC_CHECK_HEADERS([stdio.h stdarg.h stdbool.h string.h stdlib.h])

# Checks for typedefs, structures, and compiler characteristics.
AC_CHECK_HEADER_STDBOOL

# Checks for library functions.
AC_FUNC_MALLOC

AC_CHECK_FUNCS([fprintf vfprintf strcpy strlen])

AC_CONFIG_FILES([ Makefile
                  src/Makefile
                  examples/Makefile
                  doc/manpages/Makefile
                  doc/HTML/Makefile
                  doc/texi/Makefile
                  doc/pdf/Makefile
                 ])

AC_MSG_NOTICE(System check OK !!!)

# $prefix arbitrary set on "/usr" else it does not work. 
prefix=/usr

AC_OUTPUT

echo "
  ************************ ${PACKAGE_STRING} **********************

  Package: ${PACKAGE_NAME}
  Version: ${PACKAGE_VERSION}

  ${PACKAGE_NAME} a minimalist library which permit to color and
  styling the output based on ANSI escape sequences.

  Host:     ${host}
  Compiler: ${CC} ${CFLAGS} ${CPPFLAGS}
  Prefix:   ${prefix}

  Author: Brüggemann Eddie <${PACKAGE_BUGREPORT}>.

  Now enter:

  $ make
  $ sudo make install

  To build and install ${PACKAGE_NAME}.

  Use the linking -laescprintf for enjoy using ${PACKAGE_NAME} !!!"
