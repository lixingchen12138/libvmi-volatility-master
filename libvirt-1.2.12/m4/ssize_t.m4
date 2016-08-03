# ssize_t.m4 serial 6 (gettext-0.18.2)
dnl Copyright (C) 2001-2003, 2006, 2010-2015 Free Software Foundation, Inc.
dnl This file is free software; the Free Software Foundation
dnl gives unlimited permission to copy and/or distribute it,
dnl with or without modifications, as long as this notice is preserved.

dnl From Bruno Haible.
dnl Test whether ssize_t is defined.

AC_DEFUN([gt_TYPE_SSIZE_T],
[
  AC_CACHE_CHECK([for ssize_t], [gt_cv_ssize_t],
    [AC_COMPILE_IFELSE(
       [AC_LANG_PROGRAM(
          [[#include <sys/types.h>]],
          [[int x = sizeof (ssize_t *) + sizeof (ssize_t);
            return !x;]])],
       [gt_cv_ssize_t=yes], [gt_cv_ssize_t=no])])
  if test $gt_cv_ssize_t = no; then
    AC_CACHE_CHECK([for rank of size_t], [gt_cv_size_t_rank],
      [AC_COMPILE_IFELSE(
        [AC_LANG_PROGRAM(
          [[#include <sys/types.h>
          #ifdef __cplusplus
          extern "C" {
          #endif
            int foo(unsigned long bar);
            int foo(size_t bar);
          #ifdef __cplusplus
          }
          #endif
          ]])],
       [gt_cv_size_t_rank=long], [gt_cv_size_t_rank=int])])
    AC_DEFINE_UNQUOTED([ssize_t], [$gt_cv_size_t_rank],
              [Define as a signed type of the same size and rank as size_t.])
  fi
])
