/* config.h.  Generated from config.h.in by configure.  */
/* config.h.in.  Generated from configure.ac by autoheader.  */

/* Define if building universal (internal helper macro) */
/* #undef AC_APPLE_UNIVERSAL_BUILD */

/* Location of addr2line program */
#define ADDR2LINE "/usr/bin/addr2line"

/* path to apparmor directory */
/* #undef APPARMOR_DIR */

/* path to kernel profiles */
/* #undef APPARMOR_PROFILES_PATH */

/* Location of the bhyve tool */
/* #undef BHYVE */

/* Location of the bhyvectl tool */
/* #undef BHYVECTL */

/* Location of the bhyveload tool */
/* #undef BHYVELOAD */

/* Define to the number of bits in type 'ptrdiff_t'. */
/* #undef BITSIZEOF_PTRDIFF_T */

/* Define to the number of bits in type 'sig_atomic_t'. */
/* #undef BITSIZEOF_SIG_ATOMIC_T */

/* Define to the number of bits in type 'size_t'. */
/* #undef BITSIZEOF_SIZE_T */

/* Define to the number of bits in type 'wchar_t'. */
/* #undef BITSIZEOF_WCHAR_T */

/* Define to the number of bits in type 'wint_t'. */
/* #undef BITSIZEOF_WINT_T */

/* Define to 1 if gcc -Wlogical-op reports false positives on strchr */
/* #undef BROKEN_GCC_WLOGICALOP */

/* Define to 1 if chown fails to change ctime when at least one argument was
   not -1. */
/* #undef CHOWN_CHANGE_TIME_BUG */

/* Define if chown is not POSIX compliant regarding IDs of -1. */
/* #undef CHOWN_FAILS_TO_HONOR_ID_OF_NEGATIVE_ONE */

/* Define if chown modifies symlinks. */
/* #undef CHOWN_MODIFIES_SYMLINK */

/* Define to 1 if chown mishandles trailing slash. */
/* #undef CHOWN_TRAILING_SLASH_BUG */

/* Location of collie program */
/* #undef COLLIE */

/* Define to one of `_getb67', `GETB67', `getb67' for Cray-2 and Cray-YMP
   systems. This function is required for `alloca.c' support on those systems.
   */
/* #undef CRAY_STACKSEG_END */

/* Define to 1 if using `alloca.c'. */
/* #undef C_ALLOCA */

/* Define as the bit index in the word where to find bit 0 of the exponent of
   'double'. */
#define DBL_EXPBIT0_BIT 20

/* Define as the word index where to find the exponent of 'double'. */
#define DBL_EXPBIT0_WORD 1

/* Define as the bit index in the word where to find the sign of 'double'. */
/* #undef DBL_SIGNBIT_BIT */

/* Define as the word index where to find the sign of 'double'. */
/* #undef DBL_SIGNBIT_WORD */

/* Default editor to use */
#define DEFAULT_EDITOR "vi"

/* Location or name of the dmidecode program */
#define DMIDECODE "/usr/sbin/dmidecode"

/* Location or name of the dmsetup program */
/* #undef DMSETUP */

/* Location or name of the dnsmasq program */
#define DNSMASQ "/usr/sbin/dnsmasq"

/* Define to 1 if // is a file system root distinct from /. */
/* #undef DOUBLE_SLASH_IS_DISTINCT_ROOT */

/* path to ebtables binary */
#define EBTABLES_PATH "/sbin/ebtables"

/* whether debugging is enabled */
#define ENABLE_DEBUG /**/

/* Define to 1 if translation of program messages to the user's native
   language is requested. */
#define ENABLE_NLS 1

/* Define this to 1 if F_DUPFD behavior does not match POSIX */
/* #undef FCNTL_DUPFD_BUGGY */

/* Define as the bit index in the word where to find bit 0 of the exponent of
   'float'. */
#define FLT_EXPBIT0_BIT 23

/* Define as the word index where to find the exponent of 'float'. */
#define FLT_EXPBIT0_WORD 0

/* Define as the bit index in the word where to find the sign of 'float'. */
/* #undef FLT_SIGNBIT_BIT */

/* Define as the word index where to find the sign of 'float'. */
/* #undef FLT_SIGNBIT_WORD */

/* Enable compile-time and run-time bounds-checking, and some warnings,
        without upsetting newer glibc. */
     #if !defined _FORTIFY_SOURCE && defined __OPTIMIZE__ && __OPTIMIZE__
     # define _FORTIFY_SOURCE 2
     #endif
    

/* Define to 1 if the system's ftello function has the Solaris bug. */
/* #undef FTELLO_BROKEN_AFTER_SWITCHING_FROM_READ_TO_WRITE */

/* Define to 1 if fflush is known to work on stdin as per POSIX.1-2008, 0 if
   fflush is known to not work, -1 if unknown. */
#define FUNC_FFLUSH_STDIN 0

/* Define to 1 if nl_langinfo (YESEXPR) returns a non-empty string. */
#define FUNC_NL_LANGINFO_YESEXPR_WORKS 1

/* Define to 1 if pthread_sigmask is not a real function */
/* #undef FUNC_PTHREAD_SIGMASK_BROKEN */

/* Define to 1 if realpath() can malloc memory, always gives an absolute path,
   and handles trailing slash correctly. */
#define FUNC_REALPATH_WORKS 1

/* Define to 1 if ungetc is broken when used on arbitrary bytes. */
/* #undef FUNC_UNGETC_BROKEN */

/* Define to the type of elements in the array set by `getgroups'. Usually
   this is either `int' or `gid_t'. */
#define GETGROUPS_T gid_t

/* Define this to 1 if getgroups(0,NULL) does not return the number of groups.
   */
/* #undef GETGROUPS_ZERO_BUG */

/* Define if gettimeofday clobbers the localtime buffer. */
/* #undef GETTIMEOFDAY_CLOBBERS_LOCALTIME */

/* Define this to 'void' or 'struct timezone' to match the system's
   declaration of the second argument to gettimeofday. */
#define GETTIMEOFDAY_TIMEZONE struct timezone

/* Location or name of the gluster command line tool */
/* #undef GLUSTER_CLI */

/* Define to a C preprocessor expression that evaluates to 1 or 0, depending
   whether the gnulib module canonicalize-lgpl shall be considered present. */
#define GNULIB_CANONICALIZE_LGPL 1

/* Define to a C preprocessor expression that evaluates to 1 or 0, depending
   whether the gnulib module fflush shall be considered present. */
#define GNULIB_FFLUSH 1

/* Define to a C preprocessor expression that evaluates to 1 or 0, depending
   whether the gnulib module fscanf shall be considered present. */
#define GNULIB_FSCANF 1

/* Define to a C preprocessor expression that evaluates to 1 or 0, depending
   whether the gnulib module lock shall be considered present. */
#define GNULIB_LOCK 1

/* Define to a C preprocessor expression that evaluates to 1 or 0, depending
   whether the gnulib module mkostemp shall be considered present. */
#define GNULIB_MKOSTEMP 1

/* Define to a C preprocessor expression that evaluates to 1 or 0, depending
   whether the gnulib module mkostemps shall be considered present. */
#define GNULIB_MKOSTEMPS 1

/* Define to a C preprocessor expression that evaluates to 1 or 0, depending
   whether the gnulib module nonblocking shall be considered present. */
#define GNULIB_NONBLOCKING 1

/* Define to 1 if printf and friends should be labeled with attribute
   "__gnu_printf__" instead of "__printf__" */
/* #undef GNULIB_PRINTF_ATTRIBUTE_FLAVOR_GNU */

/* Define to a C preprocessor expression that evaluates to 1 or 0, depending
   whether the gnulib module pthread shall be considered present. */
#define GNULIB_PTHREAD 1

/* Define to a C preprocessor expression that evaluates to 1 or 0, depending
   whether the gnulib module scanf shall be considered present. */
#define GNULIB_SCANF 1

/* Define to a C preprocessor expression that evaluates to 1 or 0, depending
   whether the gnulib module sigpipe shall be considered present. */
#define GNULIB_SIGPIPE 1

/* Define to a C preprocessor expression that evaluates to 1 or 0, depending
   whether the gnulib module snprintf shall be considered present. */
#define GNULIB_SNPRINTF 1

/* Define to a C preprocessor expression that evaluates to 1 or 0, depending
   whether the gnulib module strerror shall be considered present. */
#define GNULIB_STRERROR 1

/* Define to 1 when the gnulib module accept should be tested. */
#define GNULIB_TEST_ACCEPT 1

/* Define to 1 when the gnulib module bind should be tested. */
#define GNULIB_TEST_BIND 1

/* Define to 1 when the gnulib module btowc should be tested. */
#define GNULIB_TEST_BTOWC 1

/* Define to 1 when the gnulib module calloc-posix should be tested. */
#define GNULIB_TEST_CALLOC_POSIX 1

/* Define to 1 when the gnulib module canonicalize_file_name should be tested.
   */
#define GNULIB_TEST_CANONICALIZE_FILE_NAME 1

/* Define to 1 when the gnulib module chown should be tested. */
#define GNULIB_TEST_CHOWN 1

/* Define to 1 when the gnulib module cloexec should be tested. */
#define GNULIB_TEST_CLOEXEC 1

/* Define to 1 when the gnulib module close should be tested. */
#define GNULIB_TEST_CLOSE 1

/* Define to 1 when the gnulib module connect should be tested. */
#define GNULIB_TEST_CONNECT 1

/* Define to 1 when the gnulib module dup should be tested. */
#define GNULIB_TEST_DUP 1

/* Define to 1 when the gnulib module dup2 should be tested. */
#define GNULIB_TEST_DUP2 1

/* Define to 1 when the gnulib module environ should be tested. */
#define GNULIB_TEST_ENVIRON 1

/* Define to 1 when the gnulib module fclose should be tested. */
#define GNULIB_TEST_FCLOSE 1

/* Define to 1 when the gnulib module fcntl should be tested. */
#define GNULIB_TEST_FCNTL 1

/* Define to 1 when the gnulib module fdatasync should be tested. */
#define GNULIB_TEST_FDATASYNC 1

/* Define to 1 when the gnulib module fdopen should be tested. */
#define GNULIB_TEST_FDOPEN 1

/* Define to 1 when the gnulib module fflush should be tested. */
#define GNULIB_TEST_FFLUSH 1

/* Define to 1 when the gnulib module ffsl should be tested. */
#define GNULIB_TEST_FFSL 1

/* Define to 1 when the gnulib module fpurge should be tested. */
#define GNULIB_TEST_FPURGE 1

/* Define to 1 when the gnulib module fseek should be tested. */
#define GNULIB_TEST_FSEEK 1

/* Define to 1 when the gnulib module fseeko should be tested. */
#define GNULIB_TEST_FSEEKO 1

/* Define to 1 when the gnulib module fstat should be tested. */
#define GNULIB_TEST_FSTAT 1

/* Define to 1 when the gnulib module fsync should be tested. */
#define GNULIB_TEST_FSYNC 1

/* Define to 1 when the gnulib module ftell should be tested. */
#define GNULIB_TEST_FTELL 1

/* Define to 1 when the gnulib module ftello should be tested. */
#define GNULIB_TEST_FTELLO 1

/* Define to 1 when the gnulib module ftruncate should be tested. */
#define GNULIB_TEST_FTRUNCATE 1

/* Define to 1 when the gnulib module getaddrinfo should be tested. */
#define GNULIB_TEST_GETADDRINFO 1

/* Define to 1 when the gnulib module getcwd should be tested. */
#define GNULIB_TEST_GETCWD 1

/* Define to 1 when the gnulib module getdelim should be tested. */
#define GNULIB_TEST_GETDELIM 1

/* Define to 1 when the gnulib module getdtablesize should be tested. */
#define GNULIB_TEST_GETDTABLESIZE 1

/* Define to 1 when the gnulib module getgroups should be tested. */
#define GNULIB_TEST_GETGROUPS 1

/* Define to 1 when the gnulib module gethostname should be tested. */
#define GNULIB_TEST_GETHOSTNAME 1

/* Define to 1 when the gnulib module getline should be tested. */
#define GNULIB_TEST_GETLINE 1

/* Define to 1 when the gnulib module getpagesize should be tested. */
#define GNULIB_TEST_GETPAGESIZE 1

/* Define to 1 when the gnulib module getpeername should be tested. */
#define GNULIB_TEST_GETPEERNAME 1

/* Define to 1 when the gnulib module getsockname should be tested. */
#define GNULIB_TEST_GETSOCKNAME 1

/* Define to 1 when the gnulib module getsockopt should be tested. */
#define GNULIB_TEST_GETSOCKOPT 1

/* Define to 1 when the gnulib module gettimeofday should be tested. */
#define GNULIB_TEST_GETTIMEOFDAY 1

/* Define to 1 when the gnulib module grantpt should be tested. */
#define GNULIB_TEST_GRANTPT 1

/* Define to 1 when the gnulib module ioctl should be tested. */
#define GNULIB_TEST_IOCTL 1

/* Define to 1 when the gnulib module isatty should be tested. */
#define GNULIB_TEST_ISATTY 1

/* Define to 1 when the gnulib module listen should be tested. */
#define GNULIB_TEST_LISTEN 1

/* Define to 1 when the gnulib module localeconv should be tested. */
#define GNULIB_TEST_LOCALECONV 1

/* Define to 1 when the gnulib module lseek should be tested. */
#define GNULIB_TEST_LSEEK 1

/* Define to 1 when the gnulib module lstat should be tested. */
#define GNULIB_TEST_LSTAT 1

/* Define to 1 when the gnulib module malloc-posix should be tested. */
#define GNULIB_TEST_MALLOC_POSIX 1

/* Define to 1 when the gnulib module mbrtowc should be tested. */
#define GNULIB_TEST_MBRTOWC 1

/* Define to 1 when the gnulib module mbsinit should be tested. */
#define GNULIB_TEST_MBSINIT 1

/* Define to 1 when the gnulib module mbsrtowcs should be tested. */
#define GNULIB_TEST_MBSRTOWCS 1

/* Define to 1 when the gnulib module mbtowc should be tested. */
#define GNULIB_TEST_MBTOWC 1

/* Define to 1 when the gnulib module memchr should be tested. */
#define GNULIB_TEST_MEMCHR 1

/* Define to 1 when the gnulib module mkdtemp should be tested. */
#define GNULIB_TEST_MKDTEMP 1

/* Define to 1 when the gnulib module mkostemp should be tested. */
#define GNULIB_TEST_MKOSTEMP 1

/* Define to 1 when the gnulib module mkostemps should be tested. */
#define GNULIB_TEST_MKOSTEMPS 1

/* Define to 1 when the gnulib module mktime should be tested. */
#define GNULIB_TEST_MKTIME 1

/* Define to 1 when the gnulib module nanosleep should be tested. */
#define GNULIB_TEST_NANOSLEEP 1

/* Define to 1 when the gnulib module nl_langinfo should be tested. */
#define GNULIB_TEST_NL_LANGINFO 1

/* Define to 1 when the gnulib module nonblocking should be tested. */
#define GNULIB_TEST_NONBLOCKING 1

/* Define to 1 when the gnulib module open should be tested. */
#define GNULIB_TEST_OPEN 1

/* Define to 1 when the gnulib module openpty should be tested. */
#define GNULIB_TEST_OPENPTY 1

/* Define to 1 when the gnulib module perror should be tested. */
#define GNULIB_TEST_PERROR 1

/* Define to 1 when the gnulib module pipe should be tested. */
#define GNULIB_TEST_PIPE 1

/* Define to 1 when the gnulib module pipe2 should be tested. */
#define GNULIB_TEST_PIPE2 1

/* Define to 1 when the gnulib module poll should be tested. */
#define GNULIB_TEST_POLL 1

/* Define to 1 when the gnulib module posix_openpt should be tested. */
#define GNULIB_TEST_POSIX_OPENPT 1

/* Define to 1 when the gnulib module posix_spawnattr_destroy should be
   tested. */
#define GNULIB_TEST_POSIX_SPAWNATTR_DESTROY 1

/* Define to 1 when the gnulib module posix_spawnattr_init should be tested.
   */
#define GNULIB_TEST_POSIX_SPAWNATTR_INIT 1

/* Define to 1 when the gnulib module posix_spawnattr_setflags should be
   tested. */
#define GNULIB_TEST_POSIX_SPAWNATTR_SETFLAGS 1

/* Define to 1 when the gnulib module posix_spawnattr_setsigmask should be
   tested. */
#define GNULIB_TEST_POSIX_SPAWNATTR_SETSIGMASK 1

/* Define to 1 when the gnulib module posix_spawnp should be tested. */
#define GNULIB_TEST_POSIX_SPAWNP 1

/* Define to 1 when the gnulib module posix_spawn_file_actions_addclose should
   be tested. */
#define GNULIB_TEST_POSIX_SPAWN_FILE_ACTIONS_ADDCLOSE 1

/* Define to 1 when the gnulib module posix_spawn_file_actions_adddup2 should
   be tested. */
#define GNULIB_TEST_POSIX_SPAWN_FILE_ACTIONS_ADDDUP2 1

/* Define to 1 when the gnulib module posix_spawn_file_actions_addopen should
   be tested. */
#define GNULIB_TEST_POSIX_SPAWN_FILE_ACTIONS_ADDOPEN 1

/* Define to 1 when the gnulib module posix_spawn_file_actions_destroy should
   be tested. */
#define GNULIB_TEST_POSIX_SPAWN_FILE_ACTIONS_DESTROY 1

/* Define to 1 when the gnulib module posix_spawn_file_actions_init should be
   tested. */
#define GNULIB_TEST_POSIX_SPAWN_FILE_ACTIONS_INIT 1

/* Define to 1 when the gnulib module pthread_sigmask should be tested. */
#define GNULIB_TEST_PTHREAD_SIGMASK 1

/* Define to 1 when the gnulib module ptsname should be tested. */
#define GNULIB_TEST_PTSNAME 1

/* Define to 1 when the gnulib module ptsname_r should be tested. */
#define GNULIB_TEST_PTSNAME_R 1

/* Define to 1 when the gnulib module putenv should be tested. */
#define GNULIB_TEST_PUTENV 1

/* Define to 1 when the gnulib module raise should be tested. */
#define GNULIB_TEST_RAISE 1

/* Define to 1 when the gnulib module random_r should be tested. */
#define GNULIB_TEST_RANDOM_R 1

/* Define to 1 when the gnulib module rawmemchr should be tested. */
#define GNULIB_TEST_RAWMEMCHR 1

/* Define to 1 when the gnulib module read should be tested. */
#define GNULIB_TEST_READ 1

/* Define to 1 when the gnulib module readlink should be tested. */
#define GNULIB_TEST_READLINK 1

/* Define to 1 when the gnulib module realloc-posix should be tested. */
#define GNULIB_TEST_REALLOC_POSIX 1

/* Define to 1 when the gnulib module realpath should be tested. */
#define GNULIB_TEST_REALPATH 1

/* Define to 1 when the gnulib module recv should be tested. */
#define GNULIB_TEST_RECV 1

/* Define to 1 when the gnulib module secure_getenv should be tested. */
#define GNULIB_TEST_SECURE_GETENV 1

/* Define to 1 when the gnulib module select should be tested. */
#define GNULIB_TEST_SELECT 1

/* Define to 1 when the gnulib module send should be tested. */
#define GNULIB_TEST_SEND 1

/* Define to 1 when the gnulib module setenv should be tested. */
#define GNULIB_TEST_SETENV 1

/* Define to 1 when the gnulib module setlocale should be tested. */
#define GNULIB_TEST_SETLOCALE 1

/* Define to 1 when the gnulib module setsockopt should be tested. */
#define GNULIB_TEST_SETSOCKOPT 1

/* Define to 1 when the gnulib module sigaction should be tested. */
#define GNULIB_TEST_SIGACTION 1

/* Define to 1 when the gnulib module signbit should be tested. */
#define GNULIB_TEST_SIGNBIT 1

/* Define to 1 when the gnulib module sigprocmask should be tested. */
#define GNULIB_TEST_SIGPROCMASK 1

/* Define to 1 when the gnulib module sleep should be tested. */
#define GNULIB_TEST_SLEEP 1

/* Define to 1 when the gnulib module snprintf should be tested. */
#define GNULIB_TEST_SNPRINTF 1

/* Define to 1 when the gnulib module socket should be tested. */
#define GNULIB_TEST_SOCKET 1

/* Define to 1 when the gnulib module stat should be tested. */
#define GNULIB_TEST_STAT 1

/* Define to 1 when the gnulib module stpcpy should be tested. */
#define GNULIB_TEST_STPCPY 1

/* Define to 1 when the gnulib module strchrnul should be tested. */
#define GNULIB_TEST_STRCHRNUL 1

/* Define to 1 when the gnulib module strdup should be tested. */
#define GNULIB_TEST_STRDUP 1

/* Define to 1 when the gnulib module strerror should be tested. */
#define GNULIB_TEST_STRERROR 1

/* Define to 1 when the gnulib module strerror_r should be tested. */
#define GNULIB_TEST_STRERROR_R 1

/* Define to 1 when the gnulib module strndup should be tested. */
#define GNULIB_TEST_STRNDUP 1

/* Define to 1 when the gnulib module strnlen should be tested. */
#define GNULIB_TEST_STRNLEN 1

/* Define to 1 when the gnulib module strptime should be tested. */
#define GNULIB_TEST_STRPTIME 1

/* Define to 1 when the gnulib module strsep should be tested. */
#define GNULIB_TEST_STRSEP 1

/* Define to 1 when the gnulib module strtok_r should be tested. */
#define GNULIB_TEST_STRTOK_R 1

/* Define to 1 when the gnulib module symlink should be tested. */
#define GNULIB_TEST_SYMLINK 1

/* Define to 1 when the gnulib module timegm should be tested. */
#define GNULIB_TEST_TIMEGM 1

/* Define to 1 when the gnulib module time_r should be tested. */
#define GNULIB_TEST_TIME_R 1

/* Define to 1 when the gnulib module ttyname_r should be tested. */
#define GNULIB_TEST_TTYNAME_R 1

/* Define to 1 when the gnulib module unlockpt should be tested. */
#define GNULIB_TEST_UNLOCKPT 1

/* Define to 1 when the gnulib module unsetenv should be tested. */
#define GNULIB_TEST_UNSETENV 1

/* Define to 1 when the gnulib module usleep should be tested. */
#define GNULIB_TEST_USLEEP 1

/* Define to 1 when the gnulib module vasprintf should be tested. */
#define GNULIB_TEST_VASPRINTF 1

/* Define to 1 when the gnulib module vsnprintf should be tested. */
#define GNULIB_TEST_VSNPRINTF 1

/* Define to 1 when the gnulib module waitpid should be tested. */
#define GNULIB_TEST_WAITPID 1

/* Define to 1 when the gnulib module wcrtomb should be tested. */
#define GNULIB_TEST_WCRTOMB 1

/* Define to 1 when the gnulib module wctob should be tested. */
#define GNULIB_TEST_WCTOB 1

/* Define to 1 when the gnulib module wctomb should be tested. */
#define GNULIB_TEST_WCTOMB 1

/* Define to 1 when the gnulib module write should be tested. */
#define GNULIB_TEST_WRITE 1

/* Define to 1 if you have 'alloca' after including <alloca.h>, a header that
   may be supplied by this distribution. */
#define HAVE_ALLOCA 1

/* Define to 1 if you have <alloca.h> and it should be used (not on Ultrix).
   */
#define HAVE_ALLOCA_H 1

/* Define to 1 if you have the <arpa/inet.h> header file. */
#define HAVE_ARPA_INET_H 1

/* Define to 1 if you have the <bp-sym.h> header file. */
/* #undef HAVE_BP_SYM_H */

/* whether BSD style bridge management is available */
/* #undef HAVE_BSD_BRIDGE_MGMT */

/* whether BSD CPU affinity management is available */
/* #undef HAVE_BSD_CPU_AFFINITY */

/* Define to 1 if you have the 'btowc' function. */
#define HAVE_BTOWC 1

/* Define to 1 if nanosleep mishandles large arguments. */
#define HAVE_BUG_BIG_NANOSLEEP 1

/* Define to 1 if you have the <byteswap.h> header file. */
#define HAVE_BYTESWAP_H 1

/* Define if the 'calloc' function is POSIX compliant. */
#define HAVE_CALLOC_POSIX 1

/* Define to 1 if you have the 'canonicalize_file_name' function. */
#define HAVE_CANONICALIZE_FILE_NAME 1

/* Define to 1 if you have the 'catgets' function. */
#define HAVE_CATGETS 1

/* Define to 1 if you have the Mac OS X function CFLocaleCopyCurrent in the
   CoreFoundation framework. */
/* #undef HAVE_CFLOCALECOPYCURRENT */

/* Define to 1 if you have the 'cfmakeraw' function. */
#define HAVE_CFMAKERAW 1

/* Define to 1 if you have the Mac OS X function CFPreferencesCopyAppValue in
   the CoreFoundation framework. */
/* #undef HAVE_CFPREFERENCESCOPYAPPVALUE */

/* Define to 1 if you have the 'chown' function. */
#define HAVE_CHOWN 1

/* Define to 1 if you have the `chsize' function. */
/* #undef HAVE_CHSIZE */

/* Define to 1 if you have the `clock_gettime' function. */
#define HAVE_CLOCK_GETTIME 1

/* Define to 1 if you have the `clock_settime' function. */
#define HAVE_CLOCK_SETTIME 1

/* Define to 1 if you have the `confstr' function. */
/* #undef HAVE_CONFSTR */

/* Define if the copysignf function is declared in <math.h> and available in
   libc. */
/* #undef HAVE_COPYSIGNF_IN_LIBC */

/* Define if the copysignl function is declared in <math.h> and available in
   libc. */
/* #undef HAVE_COPYSIGNL_IN_LIBC */

/* Define if the copysign function is declared in <math.h> and available in
   libc. */
/* #undef HAVE_COPYSIGN_IN_LIBC */

/* whether CPUID instruction is supported */
#define HAVE_CPUID 1

/* Define to 1 if the system has the type `DBusBasicValue'. */
#define HAVE_DBUSBASICVALUE 1

/* Define to 1 if you have the `dbus_watch_get_unix_fd' function. */
#define HAVE_DBUS_WATCH_GET_UNIX_FD 1

/* Define if the GNU dcgettext() function is already present or preinstalled.
   */
#define HAVE_DCGETTEXT 1

/* Define to 1 if you have the declaration of `alarm', and to 0 if you don't.
   */
#define HAVE_DECL_ALARM 1

/* Define to 1 if you have the declaration of `BRDGADD', and to 0 if you
   don't. */
#define HAVE_DECL_BRDGADD 0

/* Define to 1 if you have the declaration of `BRDGDEL', and to 0 if you
   don't. */
#define HAVE_DECL_BRDGDEL 0

/* Define to 1 if you have the declaration of `BRDGSFD', and to 0 if you
   don't. */
#define HAVE_DECL_BRDGSFD 0

/* Define to 1 if you have the declaration of `copysign', and to 0 if you
   don't. */
/* #undef HAVE_DECL_COPYSIGN */

/* Define to 1 if you have the declaration of `copysignf', and to 0 if you
   don't. */
/* #undef HAVE_DECL_COPYSIGNF */

/* Define to 1 if you have the declaration of `copysignl', and to 0 if you
   don't. */
/* #undef HAVE_DECL_COPYSIGNL */

/* Define to 1 if you have the declaration of `cpuset_getaffinity', and to 0
   if you don't. */
#define HAVE_DECL_CPUSET_GETAFFINITY 0

/* Define to 1 if you have the declaration of `fdatasync', and to 0 if you
   don't. */
#define HAVE_DECL_FDATASYNC 1

/* Define to 1 if you have the declaration of `fflush_unlocked', and to 0 if
   you don't. */
#define HAVE_DECL_FFLUSH_UNLOCKED 1

/* Define to 1 if you have the declaration of `flockfile', and to 0 if you
   don't. */
#define HAVE_DECL_FLOCKFILE 1

/* Define to 1 if you have the declaration of `fpurge', and to 0 if you don't.
   */
#define HAVE_DECL_FPURGE 0

/* Define to 1 if you have the declaration of `fputs_unlocked', and to 0 if
   you don't. */
#define HAVE_DECL_FPUTS_UNLOCKED 1

/* Define to 1 if you have the declaration of `freeaddrinfo', and to 0 if you
   don't. */
#define HAVE_DECL_FREEADDRINFO 1

/* Define to 1 if you have the declaration of `fseeko', and to 0 if you don't.
   */
#define HAVE_DECL_FSEEKO 1

/* Define to 1 if you have the declaration of `ftello', and to 0 if you don't.
   */
#define HAVE_DECL_FTELLO 1

/* Define to 1 if you have the declaration of `funlockfile', and to 0 if you
   don't. */
#define HAVE_DECL_FUNLOCKFILE 1

/* Define to 1 if you have the declaration of `gai_strerror', and to 0 if you
   don't. */
#define HAVE_DECL_GAI_STRERROR 1

/* Define to 1 if you have the declaration of `gai_strerrorA', and to 0 if you
   don't. */
#define HAVE_DECL_GAI_STRERRORA 0

/* Define to 1 if you have the declaration of `getaddrinfo', and to 0 if you
   don't. */
#define HAVE_DECL_GETADDRINFO 1

/* Define to 1 if you have the declaration of `getc_unlocked', and to 0 if you
   don't. */
#define HAVE_DECL_GETC_UNLOCKED 1

/* Define to 1 if you have the declaration of `getdelim', and to 0 if you
   don't. */
#define HAVE_DECL_GETDELIM 1

/* Define to 1 if you have the declaration of `getline', and to 0 if you
   don't. */
#define HAVE_DECL_GETLINE 1

/* Define to 1 if you have the declaration of `getnameinfo', and to 0 if you
   don't. */
#define HAVE_DECL_GETNAMEINFO 1

/* Define to 1 if you have the declaration of `getpass', and to 0 if you
   don't. */
#define HAVE_DECL_GETPASS 1

/* Define to 1 if you have the declaration of `GET_VLAN_VID_CMD', and to 0 if
   you don't. */
#define HAVE_DECL_GET_VLAN_VID_CMD 1

/* Define to 1 if you have the declaration of `htole64', and to 0 if you
   don't. */
#define HAVE_DECL_HTOLE64 1

/* Define to 1 if you have the declaration of `inet_ntop', and to 0 if you
   don't. */
#define HAVE_DECL_INET_NTOP 1

/* Define to 1 if you have the declaration of `inet_pton', and to 0 if you
   don't. */
#define HAVE_DECL_INET_PTON 1

/* Define to 1 if you have the declaration of `isblank', and to 0 if you
   don't. */
/* #undef HAVE_DECL_ISBLANK */

/* whether link_addr is available */
/* #undef HAVE_DECL_LINK_ADDR */

/* Define to 1 if you have the declaration of `localtime_r', and to 0 if you
   don't. */
#define HAVE_DECL_LOCALTIME_R 1

/* Define to 1 if you have the declaration of `LOOP_CTL_GET_FREE', and to 0 if
   you don't. */
#define HAVE_DECL_LOOP_CTL_GET_FREE 1

/* Define to 1 if you have the declaration of `LO_FLAGS_AUTOCLEAR', and to 0
   if you don't. */
#define HAVE_DECL_LO_FLAGS_AUTOCLEAR 1

/* Define to 1 if you have the declaration of `MACVLAN_MODE_PASSTHRU', and to
   0 if you don't. */
#define HAVE_DECL_MACVLAN_MODE_PASSTHRU 1

/* Define to 1 if you have the declaration of `mbrtowc', and to 0 if you
   don't. */
/* #undef HAVE_DECL_MBRTOWC */

/* Define to 1 if you have the declaration of `mbsinit', and to 0 if you
   don't. */
/* #undef HAVE_DECL_MBSINIT */

/* Define to 1 if you have the declaration of `mbsrtowcs', and to 0 if you
   don't. */
/* #undef HAVE_DECL_MBSRTOWCS */

/* Define to 1 if you have the declaration of `openpty', and to 0 if you
   don't. */
#define HAVE_DECL_OPENPTY 1

/* Define to 1 if you have the declaration of `program_invocation_name', and
   to 0 if you don't. */
#define HAVE_DECL_PROGRAM_INVOCATION_NAME 1

/* Define to 1 if you have the declaration of `program_invocation_short_name',
   and to 0 if you don't. */
#define HAVE_DECL_PROGRAM_INVOCATION_SHORT_NAME 1

/* Define to 1 if you have the declaration of `putc_unlocked', and to 0 if you
   don't. */
#define HAVE_DECL_PUTC_UNLOCKED 1

/* Define to 1 if you have the declaration of `SANLK_INQ_WAIT', and to 0 if
   you don't. */
/* #undef HAVE_DECL_SANLK_INQ_WAIT */

/* Define to 1 if you have the declaration of `setenv', and to 0 if you don't.
   */
#define HAVE_DECL_SETENV 1

/* Define to 1 if you have the declaration of `sleep', and to 0 if you don't.
   */
#define HAVE_DECL_SLEEP 1

/* Define to 1 if you have the declaration of `snprintf', and to 0 if you
   don't. */
#define HAVE_DECL_SNPRINTF 1

/* Define to 1 if you have the declaration of `strdup', and to 0 if you don't.
   */
#define HAVE_DECL_STRDUP 1

/* Define to 1 if you have the declaration of `strerror_r', and to 0 if you
   don't. */
#define HAVE_DECL_STRERROR_R 1

/* Define to 1 if you have the declaration of `strncasecmp', and to 0 if you
   don't. */
#define HAVE_DECL_STRNCASECMP 1

/* Define to 1 if you have the declaration of `strndup', and to 0 if you
   don't. */
#define HAVE_DECL_STRNDUP 1

/* Define to 1 if you have the declaration of `strnlen', and to 0 if you
   don't. */
#define HAVE_DECL_STRNLEN 1

/* Define to 1 if you have the declaration of `strtok_r', and to 0 if you
   don't. */
#define HAVE_DECL_STRTOK_R 1

/* Define to 1 if you have the declaration of `towlower', and to 0 if you
   don't. */
/* #undef HAVE_DECL_TOWLOWER */

/* Define to 1 if you have the declaration of `ttyname_r', and to 0 if you
   don't. */
#define HAVE_DECL_TTYNAME_R 1

/* Define to 1 if you have the declaration of `unsetenv', and to 0 if you
   don't. */
#define HAVE_DECL_UNSETENV 1

/* Define to 1 if you have the declaration of `vsnprintf', and to 0 if you
   don't. */
#define HAVE_DECL_VSNPRINTF 1

/* Define to 1 if you have the declaration of `wcrtomb', and to 0 if you
   don't. */
/* #undef HAVE_DECL_WCRTOMB */

/* Define to 1 if you have the declaration of `wctob', and to 0 if you don't.
   */
#define HAVE_DECL_WCTOB 1

/* Define to 1 if you have the declaration of `_putenv', and to 0 if you
   don't. */
/* #undef HAVE_DECL__PUTENV */

/* Define to 1 if you have the declaration of `_snprintf', and to 0 if you
   don't. */
#define HAVE_DECL__SNPRINTF 0

/* Define to 1 if you have the declaration of `__fsetlocking', and to 0 if you
   don't. */
/* #undef HAVE_DECL___FSETLOCKING */

/* Define to 1 if you have the <dlfcn.h> header file. */
#define HAVE_DLFCN_H 1

/* Define to 1 if you have the 'dup2' function. */
#define HAVE_DUP2 1

/* Define if you have the declaration of environ. */
#define HAVE_ENVIRON_DECL 1

/* Define to 1 if you have the <execinfo.h> header file. */
#define HAVE_EXECINFO_H 1

/* Define to 1 if you have the 'fallocate' function. */
#define HAVE_FALLOCATE 1

/* Define to 1 if you have the 'fchown' function. */
#define HAVE_FCHOWN 1

/* Define to 1 if you have the 'fcntl' function. */
#define HAVE_FCNTL 1

/* Define to 1 if you have the `fdatasync' function. */
/* #undef HAVE_FDATASYNC */

/* Define to 1 if you have the <features.h> header file. */
#define HAVE_FEATURES_H 1

/* Define to 1 if you have the 'ffs' function. */
#define HAVE_FFS 1

/* Define to 1 if you have the 'ffsl' function. */
#define HAVE_FFSL 1

/* whether firewalld support is enabled */
#define HAVE_FIREWALLD 1

/* Define to 1 if you have the `flockfile' function. */
/* #undef HAVE_FLOCKFILE */

/* Define to 1 if you have the 'fpurge' function. */
/* #undef HAVE_FPURGE */

/* Define to 1 if fseeko (and presumably ftello) exists and is declared. */
#define HAVE_FSEEKO 1

/* Define to 1 if you have the 'fsync' function. */
#define HAVE_FSYNC 1

/* Define to 1 if you have the 'ftruncate' function. */
#define HAVE_FTRUNCATE 1

/* Define to 1 if you have the `funlockfile' function. */
/* #undef HAVE_FUNLOCKFILE */

/* Define to 1 if you have the 'getcwd' function. */
#define HAVE_GETCWD 1

/* Define to 1 if you have the 'getdelim' function. */
#define HAVE_GETDELIM 1

/* Define to 1 if you have the 'getdtablesize' function. */
#define HAVE_GETDTABLESIZE 1

/* Define to 1 if you have the 'getegid' function. */
#define HAVE_GETEGID 1

/* Define to 1 if you have the 'geteuid' function. */
#define HAVE_GETEUID 1

/* Define to 1 if you have the 'getgid' function. */
#define HAVE_GETGID 1

/* Define to 1 if you have the 'getgrnam_r' function. */
#define HAVE_GETGRNAM_R 1

/* Define to 1 if you have the 'getgrouplist' function. */
#define HAVE_GETGROUPLIST 1

/* Define to 1 if your system has a working `getgroups' function. */
#define HAVE_GETGROUPS 1

/* Define to 1 if you have the `gethostbyname' function. */
#define HAVE_GETHOSTBYNAME 1

/* Define to 1 if you have the `gethostname' function. */
#define HAVE_GETHOSTNAME 1

/* Define to 1 if you have the 'getifaddrs' function. */
#define HAVE_GETIFADDRS 1

/* Define to 1 if you have the 'getmntent_r' function. */
#define HAVE_GETMNTENT_R 1

/* Define to 1 if you have the `getpagesize' function. */
#define HAVE_GETPAGESIZE 1

/* Define to 1 if you have the `getpass' function. */
#define HAVE_GETPASS 1

/* Define to 1 if you have the 'getpwuid_r' function. */
#define HAVE_GETPWUID_R 1

/* Define to 1 if you have the `getservbyname' function. */
#define HAVE_GETSERVBYNAME 1

/* Define to 1 if you have the `getsysinfo' function. */
/* #undef HAVE_GETSYSINFO */

/* Define if the GNU gettext() function is already present or preinstalled. */
#define HAVE_GETTEXT 1

/* Define to 1 if you have the 'gettimeofday' function. */
#define HAVE_GETTIMEOFDAY 1

/* Define to 1 if you have the 'getuid' function. */
#define HAVE_GETUID 1

/* Define to 1 if you have the <gnutls/crypto.h> header file. */
#define HAVE_GNUTLS_CRYPTO_H 1

/* Define to 1 if you have the `grantpt' function. */
#define HAVE_GRANTPT 1

/* Define to 1 if you have the <grp.h> header file. */
#define HAVE_GRP_H 1

/* Define if you have the iconv() function and it works. */
/* #undef HAVE_ICONV */

/* Define to 1 if you have the <ifaddrs.h> header file. */
#define HAVE_IFADDRS_H 1

/* Define if you have if_nameindex. */
#define HAVE_IF_NAMEINDEX 1

/* Define to 1 if you have the `inet_ntop' function. */
/* #undef HAVE_INET_NTOP */

/* Define to 1 if you have the `inet_pton' function. */
/* #undef HAVE_INET_PTON */

/* Define if you have the 'intmax_t' type in <stdint.h> or <inttypes.h>. */
#define HAVE_INTMAX_T 1

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* Define if <inttypes.h> exists, doesn't clash with <sys/types.h>, and
   declares uintmax_t. */
#define HAVE_INTTYPES_H_WITH_UINTMAX 1

/* Define to 1 if you have the `ioctl' function. */
#define HAVE_IOCTL 1

/* Define to 1 if <sys/socket.h> defines AF_INET. */
#define HAVE_IPV4 1

/* Define to 1 if <sys/socket.h> defines AF_INET6. */
#define HAVE_IPV6 1

/* Define to 1 if you have the 'isblank' function. */
#define HAVE_ISBLANK 1

/* Define if the isnan(double) function is available in libc. */
#define HAVE_ISNAND_IN_LIBC 1

/* Define if the isnan(float) function is available in libc. */
#define HAVE_ISNANF_IN_LIBC 1

/* Define if the isnan(long double) function is available in libc. */
/* #undef HAVE_ISNANL_IN_LIBC */

/* Define to 1 if you have the `issetugid' function. */
/* #undef HAVE_ISSETUGID */

/* Define to 1 if you have the 'iswcntrl' function. */
#define HAVE_ISWCNTRL 1

/* Define to 1 if you have the 'iswctype' function. */
#define HAVE_ISWCTYPE 1

/* Define to 1 if you have the 'kill' function. */
#define HAVE_KILL 1

/* Define if you have <langinfo.h> and nl_langinfo(CODESET). */
#define HAVE_LANGINFO_CODESET 1

/* Define to 1 if you have the <langinfo.h> header file. */
#define HAVE_LANGINFO_H 1

/* Define if your <locale.h> file defines LC_MESSAGES. */
#define HAVE_LC_MESSAGES 1

/* Define to 1 if you have the `apparmor' library (-lapparmor). */
/* #undef HAVE_LIBAPPARMOR */

/* Define to 1 if you have the `attr' library (-lattr). */
#define HAVE_LIBATTR 1

/* Define to 1 if you have the `audit' library (-laudit). */
#define HAVE_LIBAUDIT 1

/* Define to 1 if you have the `cap-ng' library (-lcap-ng). */
/* #undef HAVE_LIBCAP_NG */

/* Define to 1 if you have the `devmapper' library (-ldevmapper). */
/* #undef HAVE_LIBDEVMAPPER */

/* Define to 1 if you have the <libdevmapper.h> header file. */
#define HAVE_LIBDEVMAPPER_H 1

/* Define to 1 if you have the `gnutls' library (-lgnutls). */
/* #undef HAVE_LIBGNUTLS */

/* Define to 1 if you have the `intl' library (-lintl). */
/* #undef HAVE_LIBINTL */

/* Define to 1 if you have the <libintl.h> header file. */
/* #undef HAVE_LIBINTL_H */

/* Define to 1 if you have the `kvm' library (-lkvm). */
/* #undef HAVE_LIBKVM */

/* whether the netlink library is available */
#define HAVE_LIBNL 1

/* whether the netlink v1 library is available */
/* #undef HAVE_LIBNL1 */

/* Use libnl-3.0 */
#define HAVE_LIBNL3 1

/* Define to 1 if you have the `numa' library (-lnuma). */
#define HAVE_LIBNUMA 1

/* Define to 1 if you have the `parted' library (-lparted). */
/* #undef HAVE_LIBPARTED */

/* whether libpcap can be used */
/* #undef HAVE_LIBPCAP */

/* Define to 1 if you have the `portablexdr' library (-lportablexdr). */
/* #undef HAVE_LIBPORTABLEXDR */

/* Define to 1 if you have the `readline' library (-lreadline). */
/* #undef HAVE_LIBREADLINE */

/* Define to 1 if you have the `sanlock_client' library (-lsanlock_client). */
/* #undef HAVE_LIBSANLOCK_CLIENT */

/* Define to 1 if you have the `sasl2' library (-lsasl2). */
/* #undef HAVE_LIBSASL2 */

/* Define to 1 if you have the `selinux' library (-lselinux). */
#define HAVE_LIBSELINUX 1

/* Define to 1 if you have the <libtasn1.h> header file. */
#define HAVE_LIBTASN1_H 1

/* Define to 1 if you have the <libutil.h> header file. */
/* #undef HAVE_LIBUTIL_H */

/* Define to 1 if you have the `uuid' library (-luuid). */
#define HAVE_LIBUUID 1

/* Define to 1 if you have the <libxlutil.h> header file. */
/* #undef HAVE_LIBXLUTIL_H */

/* Define to 1 if you have the `yajl' library (-lyajl). */
/* #undef HAVE_LIBYAJL */

/* Define to 1 if you have the <linux/if_bridge.h> header file. */
#define HAVE_LINUX_IF_BRIDGE_H 1

/* Define to 1 if you have the <linux/if_tun.h> header file. */
#define HAVE_LINUX_IF_TUN_H 1

/* Define to 1 if you have the <linux/kvm.h> header file. */
#define HAVE_LINUX_KVM_H 1

/* Define to 1 if you have the <linux/magic.h> header file. */
#define HAVE_LINUX_MAGIC_H 1

/* Define to 1 if you have the <linux/param.h> header file. */
#define HAVE_LINUX_PARAM_H 1

/* Define to 1 if you have the <linux/sockios.h> header file. */
#define HAVE_LINUX_SOCKIOS_H 1

/* Define to 1 if you have the 'localtime_r' function. */
#define HAVE_LOCALTIME_R 1

/* Define to 1 if the system has the type 'long long int'. */
#define HAVE_LONG_LONG_INT 1

/* Define to 1 if you have the 'lstat' function. */
#define HAVE_LSTAT 1

/* Define to 1 if you have the <machine/hal_sysinfo.h> header file. */
/* #undef HAVE_MACHINE_HAL_SYSINFO_H */

/* Define to 1 if you have the <malloc.h> header file. */
#define HAVE_MALLOC_H 1

/* Define if the 'malloc' function is POSIX compliant. */
#define HAVE_MALLOC_POSIX 1

/* Define to 1 if mmap()'s MAP_ANONYMOUS flag is available after including
   config.h and <sys/mman.h>. */
#define HAVE_MAP_ANONYMOUS 1

/* Define to 1 if you have the <math.h> header file. */
#define HAVE_MATH_H 1

/* Define to 1 if you have the `mbrtowc' function. */
#define HAVE_MBRTOWC 1

/* Define to 1 if you have the 'mbsinit' function. */
#define HAVE_MBSINIT 1

/* Define to 1 if you have the 'mbsrtowcs' function. */
#define HAVE_MBSRTOWCS 1

/* Define to 1 if <wchar.h> declares mbstate_t. */
#define HAVE_MBSTATE_T 1

/* Define to 1 if you have the <memory.h> header file. */
#define HAVE_MEMORY_H 1

/* Define to 1 if you have the 'mempcpy' function. */
#define HAVE_MEMPCPY 1

/* Define to 1 if you have the `mkdtemp' function. */
#define HAVE_MKDTEMP 1

/* Define to 1 if you have the 'mkostemp' function. */
#define HAVE_MKOSTEMP 1

/* Define to 1 if you have the 'mkostemps' function. */
#define HAVE_MKOSTEMPS 1

/* Define to 1 if you have the 'mmap' function. */
#define HAVE_MMAP 1

/* Define to 1 if you have the <mntent.h> header file. */
#define HAVE_MNTENT_H 1

/* Define to 1 if you have the 'mprotect' function. */
#define HAVE_MPROTECT 1

/* Define to 1 on MSVC platforms that have the "invalid parameter handler"
   concept. */
/* #undef HAVE_MSVC_INVALID_PARAMETER_HANDLER */

/* we have sufficiently new version of netcf for transaction network API */
#define HAVE_NETCF_TRANSACTIONS 1

/* Define to 1 if you have the <netdb.h> header file. */
#define HAVE_NETDB_H 1

/* Define to 1 if you have the <netinet/in.h> header file. */
#define HAVE_NETINET_IN_H 1

/* Define to 1 if you have the <netinet/tcp.h> header file. */
#define HAVE_NETINET_TCP_H 1

/* Define to 1 if you have the <net/ethernet.h> header file. */
#define HAVE_NET_ETHERNET_H 1

/* Define to 1 if you have the <net/if.h> header file. */
/* #undef HAVE_NET_IF_H */

/* Define to 1 if you have the 'newlocale' function. */
#define HAVE_NEWLOCALE 1

/* Define to 1 if you have the 'nl_langinfo' function. */
#define HAVE_NL_LANGINFO 1

/* whether numad is available */
/* #undef HAVE_NUMAD */

/* whether numa_bitmask_isbitset is available */
#define HAVE_NUMA_BITMASK_ISBITSET 1

/* Define to 1 if the system has the 'openpty' function. */
#define HAVE_OPENPTY 1

/* Define to 1 if libcrypto is used for MD5. */
/* #undef HAVE_OPENSSL_MD5 */

/* Define to 1 if libcrypto is used for SHA256. */
/* #undef HAVE_OPENSSL_SHA256 */

/* Define to 1 if you have the <OS.h> header file. */
/* #undef HAVE_OS_H */

/* Define to 1 if you have the <paths.h> header file. */
#define HAVE_PATHS_H 1

/* Define to 1 if you have the 'pipe' function. */
#define HAVE_PIPE 1

/* Define to 1 if you have the 'pipe2' function. */
#define HAVE_PIPE2 1

/* Define to 1 if you have the `polkit_context_is_caller_authorized' function.
   */
/* #undef HAVE_POLKIT_CONTEXT_IS_CALLER_AUTHORIZED */

/* Define to 1 if you have the 'poll' function and it works. */
#define HAVE_POLL 1

/* Define to 1 if you have the <poll.h> header file. */
#define HAVE_POLL_H 1

/* Define if the ttyname_r function has a POSIX compliant declaration. */
#define HAVE_POSIXDECL_TTYNAME_R 1

/* Define to 1 if you have the 'posix_fallocate' function. */
#define HAVE_POSIX_FALLOCATE 1

/* Define to 1 if you have the 'posix_memalign' function. */
#define HAVE_POSIX_MEMALIGN 1

/* Define to 1 if you have the 'posix_openpt' function. */
#define HAVE_POSIX_OPENPT 1

/* Define to 1 if you have the `posix_spawn' function. */
#define HAVE_POSIX_SPAWN 1

/* Define to 1 if the system has the type `posix_spawnattr_t'. */
#define HAVE_POSIX_SPAWNATTR_T 1

/* Define to 1 if the system has the type `posix_spawn_file_actions_t'. */
#define HAVE_POSIX_SPAWN_FILE_ACTIONS_T 1

/* Define to 1 if you have the 'prlimit' function. */
#define HAVE_PRLIMIT 1

/* Define to 1 if you have the `pstat_getdynamic' function. */
/* #undef HAVE_PSTAT_GETDYNAMIC */

/* Define to 1 if you have the `pstat_getstatic' function. */
/* #undef HAVE_PSTAT_GETSTATIC */

/* Define to 1 if you have the `pthread_atfork' function. */
#define HAVE_PTHREAD_ATFORK 1

/* Define to 1 if you have the <pthread.h> header file. */
#define HAVE_PTHREAD_H 1

/* Define to 1 if you have the `pthread_mutexattr_init' function. */
#define HAVE_PTHREAD_MUTEXATTR_INIT 1

/* Define if the <pthread.h> defines PTHREAD_MUTEX_RECURSIVE. */
#define HAVE_PTHREAD_MUTEX_RECURSIVE 1

/* Define if the POSIX multithreading library has read/write locks. */
#define HAVE_PTHREAD_RWLOCK 1

/* Define to 1 if the pthread_sigmask function can be used (despite bugs). */
/* #undef HAVE_PTHREAD_SIGMASK */

/* Define to 1 if the system has the type `pthread_spinlock_t'. */
#define HAVE_PTHREAD_SPINLOCK_T 1

/* Define to 1 if the system has the type `pthread_t'. */
#define HAVE_PTHREAD_T 1

/* Define to 1 if you have the `ptsname' function. */
#define HAVE_PTSNAME 1

/* Define to 1 if you have the 'ptsname_r' function. */
#define HAVE_PTSNAME_R 1

/* Define to 1 if you have the <pty.h> header file. */
#define HAVE_PTY_H 1

/* Define to 1 if you have the <pwd.h> header file. */
#define HAVE_PWD_H 1

/* Define to 1 if you have the `raise' function. */
#define HAVE_RAISE 1

/* Define to 1 if you have the <random.h> header file. */
/* #undef HAVE_RANDOM_H */

/* Define to 1 if you have the `random_r' function. */
#define HAVE_RANDOM_R 1

/* Define to 1 if you have the `rawmemchr' function. */
#define HAVE_RAWMEMCHR 1

/* Define to 1 if you have the 'readlink' function. */
#define HAVE_READLINK 1

/* Define to 1 if you have the 'readlinkat' function. */
#define HAVE_READLINKAT 1

/* Define if the 'realloc' function is POSIX compliant. */
#define HAVE_REALLOC_POSIX 1

/* Define to 1 if you have the 'realpath' function. */
#define HAVE_REALPATH 1

/* Define to 1 if you have the 'recvmsg' function. */
#define HAVE_RECVMSG 1

/* Define to 1 if you have the 'regexec' function. */
#define HAVE_REGEXEC 1

/* Define to 1 if you have the <regex.h> header file. */
#define HAVE_REGEX_H 1

/* Define to 1 if you have the `revoke' function. */
/* #undef HAVE_REVOKE */

/* Define to 1 if you have the <rpc/types.h> header file. */
#define HAVE_RPC_TYPES_H 1

/* Define to 1 if 'long double' and 'double' have the same representation. */
/* #undef HAVE_SAME_LONG_DOUBLE_AS_DOUBLE */

/* whether sanlock supports sanlock_inq_lockspace */
/* #undef HAVE_SANLOCK_INQ_LOCKSPACE */

/* whether Sanlock supports sanlock_killpath */
/* #undef HAVE_SANLOCK_KILLPATH */

/* Define to 1 if the system has the type `sa_family_t'. */
#define HAVE_SA_FAMILY_T 1

/* Define to 1 if you have the 'sched_getaffinity' function. */
#define HAVE_SCHED_GETAFFINITY 1

/* Define to 1 if you have the <sched.h> header file. */
#define HAVE_SCHED_H 1

/* Define to 1 if you have the `sched_setparam' function. */
/* #undef HAVE_SCHED_SETPARAM */

/* Define to 1 if you have the `sched_setscheduler' function. */
/* #undef HAVE_SCHED_SETSCHEDULER */

/* Define to 1 if you have the `sd_notify' function. */
/* #undef HAVE_SD_NOTIFY */

/* Define to 1 if you have the <search.h> header file. */
#define HAVE_SEARCH_H 1

/* Define to 1 if you have the 'secure_getenv' function. */
#define HAVE_SECURE_GETENV 1

/* Define to 1 if you have the <selinux/label.h> header file. */
#define HAVE_SELINUX_LABEL_H 1

/* Define to 1 if you have the `selinux_lxc_contexts_path' function. */
#define HAVE_SELINUX_LXC_CONTEXTS_PATH 1

/* Define to 1 if you have the 'sendmsg' function. */
#define HAVE_SENDMSG 1

/* Define to 1 if you have the `setdtablesize' function. */
/* #undef HAVE_SETDTABLESIZE */

/* Define to 1 if you have the `setegid' function. */
/* #undef HAVE_SETEGID */

/* Define to 1 if you have the 'setenv' function. */
#define HAVE_SETENV 1

/* Define to 1 if you have the `seteuid' function. */
/* #undef HAVE_SETEUID */

/* Define to 1 if you have the 'setgroups' function. */
#define HAVE_SETGROUPS 1

/* Define to 1 if you have the `setlocale' function. */
#define HAVE_SETLOCALE 1

/* Define to 1 if you have the 'setns' function. */
#define HAVE_SETNS 1

/* Define to 1 if you have the 'setrlimit' function. */
#define HAVE_SETRLIMIT 1

/* Define to 1 if you have the 'shutdown' function. */
#define HAVE_SHUTDOWN 1

/* Define to 1 if you have the 'sigaction' function. */
#define HAVE_SIGACTION 1

/* Define to 1 if you have the 'sigaltstack' function. */
#define HAVE_SIGALTSTACK 1

/* Define to 1 if the system has the type `siginfo_t'. */
/* #undef HAVE_SIGINFO_T */

/* Define to 1 if you have the 'siginterrupt' function. */
#define HAVE_SIGINTERRUPT 1

/* Define to 1 if 'sig_atomic_t' is a signed integer type. */
/* #undef HAVE_SIGNED_SIG_ATOMIC_T */

/* Define to 1 if 'wchar_t' is a signed integer type. */
/* #undef HAVE_SIGNED_WCHAR_T */

/* Define to 1 if 'wint_t' is a signed integer type. */
/* #undef HAVE_SIGNED_WINT_T */

/* Define to 1 if the system has the type `sigset_t'. */
#define HAVE_SIGSET_T 1

/* Define to 1 if the system has the type `sig_atomic_t'. */
#define HAVE_SIG_ATOMIC_T 1

/* Define to 1 if you have the 'sleep' function. */
#define HAVE_SLEEP 1

/* Define to 1 if you have the `snprintf' function. */
#define HAVE_SNPRINTF 1

/* Define if the return value of the snprintf function is the number of of
   bytes (excluding the terminating NUL) that would have been produced if the
   buffer had been large enough. */
#define HAVE_SNPRINTF_RETVAL_C99 1

/* Define to 1 if you have the 'socketpair' function. */
#define HAVE_SOCKETPAIR 1

/* Define to 1 if you have the <spawn.h> header file. */
#define HAVE_SPAWN_H 1

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* Define if <stdint.h> exists, doesn't clash with <sys/types.h>, and declares
   uintmax_t. */
#define HAVE_STDINT_H_WITH_UINTMAX 1

/* Define to 1 if you have the <stdio_ext.h> header file. */
#define HAVE_STDIO_EXT_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the `stpcpy' function. */
#define HAVE_STPCPY 1

/* Define to 1 if you have the `strcasecmp' function. */
#define HAVE_STRCASECMP 1

/* Define to 1 if you have the `strchrnul' function. */
#define HAVE_STRCHRNUL 1

/* Define to 1 if you have the 'strdup' function. */
#define HAVE_STRDUP 1

/* Define to 1 if you have the `strerror_r' function. */
#define HAVE_STRERROR_R 1

/* Define to 1 if you have the <strings.h> header file. */
#define HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define to 1 if you have the `strncasecmp' function. */
#define HAVE_STRNCASECMP 1

/* Define to 1 if you have the 'strndup' function. */
#define HAVE_STRNDUP 1

/* Define to 1 if you have the `strnlen' function. */
#define HAVE_STRNLEN 1

/* Define to 1 if you have the 'strptime' function. */
#define HAVE_STRPTIME 1

/* Define to 1 if you have the `strsep' function. */
#define HAVE_STRSEP 1

/* Define to 1 if you have the `strtok_r' function. */
#define HAVE_STRTOK_R 1

/* Define to 1 if the system has the type `struct addrinfo'. */
#define HAVE_STRUCT_ADDRINFO 1

/* Defined if struct ifreq exists in net/if.h */
#define HAVE_STRUCT_IFREQ 1

/* Define to 1 if `ifr_hwaddr' is a member of `struct ifreq'. */
#define HAVE_STRUCT_IFREQ_IFR_HWADDR 1

/* Define to 1 if `ifr_ifindex' is a member of `struct ifreq'. */
#define HAVE_STRUCT_IFREQ_IFR_IFINDEX 1

/* Define to 1 if `ifr_index' is a member of `struct ifreq'. */
/* #undef HAVE_STRUCT_IFREQ_IFR_INDEX */

/* Define to 1 if `ifr_newname' is a member of `struct ifreq'. */
#define HAVE_STRUCT_IFREQ_IFR_NEWNAME 1

/* Define to 1 if `ifi_oqdrops' is a member of `struct if_data'. */
/* #undef HAVE_STRUCT_IF_DATA_IFI_OQDROPS */

/* Define to 1 if `decimal_point' is a member of `struct lconv'. */
/* #undef HAVE_STRUCT_LCONV_DECIMAL_POINT */

/* Define to 1 if `msg_accrights' is a member of `struct msghdr'. */
/* #undef HAVE_STRUCT_MSGHDR_MSG_ACCRIGHTS */

/* Define to 1 if the system has the type `struct random_data'. */
#define HAVE_STRUCT_RANDOM_DATA 1

/* Define to 1 if `sa_sigaction' is a member of `struct sigaction'. */
#define HAVE_STRUCT_SIGACTION_SA_SIGACTION 1

/* Define to 1 if `sa_len' is a member of `struct sockaddr'. */
/* #undef HAVE_STRUCT_SOCKADDR_SA_LEN */

/* Define to 1 if the system has the type `struct sockaddr_storage'. */
#define HAVE_STRUCT_SOCKADDR_STORAGE 1

/* Define to 1 if `ss_family' is a member of `struct sockaddr_storage'. */
#define HAVE_STRUCT_SOCKADDR_STORAGE_SS_FAMILY 1

/* Define to 1 if `st_atimensec' is a member of `struct stat'. */
/* #undef HAVE_STRUCT_STAT_ST_ATIMENSEC */

/* Define to 1 if `st_atimespec.tv_nsec' is a member of `struct stat'. */
/* #undef HAVE_STRUCT_STAT_ST_ATIMESPEC_TV_NSEC */

/* Define to 1 if `st_atim.st__tim.tv_nsec' is a member of `struct stat'. */
/* #undef HAVE_STRUCT_STAT_ST_ATIM_ST__TIM_TV_NSEC */

/* Define to 1 if `st_atim.tv_nsec' is a member of `struct stat'. */
#define HAVE_STRUCT_STAT_ST_ATIM_TV_NSEC 1

/* Define to 1 if `st_birthtimensec' is a member of `struct stat'. */
/* #undef HAVE_STRUCT_STAT_ST_BIRTHTIMENSEC */

/* Define to 1 if `st_birthtimespec.tv_nsec' is a member of `struct stat'. */
/* #undef HAVE_STRUCT_STAT_ST_BIRTHTIMESPEC_TV_NSEC */

/* Define to 1 if `st_birthtim.tv_nsec' is a member of `struct stat'. */
/* #undef HAVE_STRUCT_STAT_ST_BIRTHTIM_TV_NSEC */

/* Define to 1 if `mem_unit' is a member of `struct sysinfo'. */
#define HAVE_STRUCT_SYSINFO_MEM_UNIT 1

/* Define to 1 if the system has the type `struct utsname'. */
#define HAVE_STRUCT_UTSNAME 1

/* Whether -Wsuggest-attribute=format works */
#define HAVE_SUGGEST_ATTRIBUTE_FORMAT 1

/* Define to 1 if you have the 'symlink' function. */
#define HAVE_SYMLINK 1

/* Define to 1 if you have the `sysctl' function. */
#define HAVE_SYSCTL 1

/* Define to 1 if you have the 'sysctlbyname' function. */
/* #undef HAVE_SYSCTLBYNAME */

/* Define to 1 if you have the `sysinfo' function. */
#define HAVE_SYSINFO 1

/* Define to 1 if you have the <syslog.h> header file. */
#define HAVE_SYSLOG_H 1

/* Define to 1 if you have the `sysmp' function. */
/* #undef HAVE_SYSMP */

/* Define to 1 if you have the <sys/bitypes.h> header file. */
/* #undef HAVE_SYS_BITYPES_H */

/* Define to 1 if you have the <sys/filio.h> header file. */
/* #undef HAVE_SYS_FILIO_H */

/* Define to 1 if you have the <sys/inttypes.h> header file. */
/* #undef HAVE_SYS_INTTYPES_H */

/* Define to 1 if you have the <sys/ioctl.h> header file. */
#define HAVE_SYS_IOCTL_H 1

/* Define to 1 if you have the <sys/mman.h> header file. */
#define HAVE_SYS_MMAN_H 1

/* Define to 1 if you have the <sys/mount.h> header file. */
#define HAVE_SYS_MOUNT_H 1

/* Define to 1 if you have the <sys/param.h> header file. */
#define HAVE_SYS_PARAM_H 1

/* Define to 1 if you have the <sys/poll.h> header file. */
#define HAVE_SYS_POLL_H 1

/* Define to 1 if you have the <sys/pstat.h> header file. */
/* #undef HAVE_SYS_PSTAT_H */

/* Define to 1 if you have the <sys/select.h> header file. */
#define HAVE_SYS_SELECT_H 1

/* Define to 1 if you have the <sys/socket.h> header file. */
#define HAVE_SYS_SOCKET_H 1

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/syscall.h> header file. */
#define HAVE_SYS_SYSCALL_H 1

/* Define to 1 if you have the <sys/sysctl.h> header file. */
#define HAVE_SYS_SYSCTL_H 1

/* Define to 1 if you have the <sys/sysinfo.h> header file. */
#define HAVE_SYS_SYSINFO_H 1

/* Define to 1 if you have the <sys/sysmp.h> header file. */
/* #undef HAVE_SYS_SYSMP_H */

/* Define to 1 if you have the <sys/systemcfg.h> header file. */
/* #undef HAVE_SYS_SYSTEMCFG_H */

/* Define to 1 if you have the <sys/table.h> header file. */
/* #undef HAVE_SYS_TABLE_H */

/* Define to 1 if you have the <sys/timeb.h> header file. */
/* #undef HAVE_SYS_TIMEB_H */

/* Define to 1 if you have the <sys/time.h> header file. */
#define HAVE_SYS_TIME_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define to 1 if you have the <sys/ucred.h> header file. */
/* #undef HAVE_SYS_UCRED_H */

/* Define to 1 if you have the <sys/uio.h> header file. */
#define HAVE_SYS_UIO_H 1

/* Define to 1 if you have the <sys/un.h> header file. */
#define HAVE_SYS_UN_H 1

/* Define to 1 if you have the <sys/utsname.h> header file. */
#define HAVE_SYS_UTSNAME_H 1

/* Define to 1 if you have the <sys/wait.h> header file. */
#define HAVE_SYS_WAIT_H 1

/* Define to 1 if you have the `table' function. */
/* #undef HAVE_TABLE */

/* Define to 1 if you have the 'tcgetattr' function. */
#define HAVE_TCGETATTR 1

/* Define to 1 if you have the 'tcsetattr' function. */
#define HAVE_TCSETATTR 1

/* Define to 1 if you have the <termios.h> header file. */
#define HAVE_TERMIOS_H 1

/* Define to 1 if you have the 'timegm' function. */
#define HAVE_TIMEGM 1

/* Define if struct tm has the tm_gmtoff member. */
#define HAVE_TM_GMTOFF 1

/* Define to 1 if you have the `towlower' function. */
#define HAVE_TOWLOWER 1

/* Define to 1 if you have the `tsearch' function. */
#define HAVE_TSEARCH 1

/* Define to 1 if you have the `ttyname' function. */
/* #undef HAVE_TTYNAME */

/* Define to 1 if you have the `ttyname_r' function. */
#define HAVE_TTYNAME_R 1

/* whether libudev logging can be used */
#define HAVE_UDEV_LOGGING 1

/* Define to 1 if you have the `uname' function. */
#define HAVE_UNAME 1

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* Define to 1 if you have the `unlockpt' function. */
#define HAVE_UNLOCKPT 1

/* Define to 1 if you have the `unsetenv' function. */
#define HAVE_UNSETENV 1

/* Define to 1 if the system has the type 'unsigned long long int'. */
#define HAVE_UNSIGNED_LONG_LONG_INT 1

/* Define to 1 if you have the `uselocale' function. */
#define HAVE_USELOCALE 1

/* Define to 1 if you have the 'usleep' function. */
#define HAVE_USLEEP 1

/* Define to 1 if you have the <util.h> header file. */
/* #undef HAVE_UTIL_H */

/* Define to 1 if you have the 'vasnprintf' function. */
/* #undef HAVE_VASNPRINTF */

/* Define to 1 if you have the `vasprintf' function. */
#define HAVE_VASPRINTF 1

/* Define to 1 if you have the `vfork' function. */
/* #undef HAVE_VFORK */

/* Define to 1 if you have the `vsnprintf' function. */
#define HAVE_VSNPRINTF 1

/* Define to 1 if you have the `waitid' function. */
#define HAVE_WAITID 1

/* Define to 1 if you have the <wchar.h> header file. */
#define HAVE_WCHAR_H 1

/* Define if you have the 'wchar_t' type. */
#define HAVE_WCHAR_T 1

/* Define to 1 if you have the 'wcrtomb' function. */
#define HAVE_WCRTOMB 1

/* Define to 1 if you have the `wcslen' function. */
#define HAVE_WCSLEN 1

/* Define to 1 if you have the `wcsnlen' function. */
#define HAVE_WCSNLEN 1

/* Define to 1 if you have the 'wctob' function. */
#define HAVE_WCTOB 1

/* Define to 1 if you have the <wctype.h> header file. */
#define HAVE_WCTYPE_H 1

/* Define to 1 if you have the <winsock2.h> header file. */
/* #undef HAVE_WINSOCK2_H */

/* Define if you have the 'wint_t' type. */
#define HAVE_WINT_T 1

/* Define to 1 if you have the <wireshark/config.h> header file. */
/* #undef HAVE_WIRESHARK_CONFIG_H */

/* Define to 1 if you have the <wireshark/epan/dissectors/packet-tcp.h> header
   file. */
/* #undef HAVE_WIRESHARK_EPAN_DISSECTORS_PACKET_TCP_H */

/* Define to 1 if you have the <wireshark/epan/packet.h> header file. */
/* #undef HAVE_WIRESHARK_EPAN_PACKET_H */

/* Define to 1 if you have the 'wmemchr' function. */
#define HAVE_WMEMCHR 1

/* Define to 1 if you have the 'wmemcpy' function. */
#define HAVE_WMEMCPY 1

/* Define to 1 if you have the 'wmempcpy' function. */
#define HAVE_WMEMPCPY 1

/* Define to 1 if O_NOATIME works. */
#define HAVE_WORKING_O_NOATIME 1

/* Define to 1 if O_NOFOLLOW works. */
#define HAVE_WORKING_O_NOFOLLOW 1

/* Define if you have the posix_spawn and posix_spawnp functions and they
   work. */
#define HAVE_WORKING_POSIX_SPAWN 1

/* Define to 1 if you have the <ws2tcpip.h> header file. */
/* #undef HAVE_WS2TCPIP_H */

/* Define to 1 if you have the `xdr_u_int64_t' function. */
/* #undef HAVE_XDR_U_INT64_T */

/* Define to 1 if you have the <xenstore.h> header file. */
/* #undef HAVE_XENSTORE_H */

/* Define to 1 if you have the <xen/dom0_ops.h> header file. */
/* #undef HAVE_XEN_DOM0_OPS_H */

/* Define to 1 if you have the <xen/linux/privcmd.h> header file. */
/* #undef HAVE_XEN_LINUX_PRIVCMD_H */

/* Define to 1 if you have the <xen/sys/privcmd.h> header file. */
/* #undef HAVE_XEN_SYS_PRIVCMD_H */

/* Define to 1 if you have the <xen/version.h> header file. */
/* #undef HAVE_XEN_VERSION_H */

/* Define to 1 if you have the <xen/xen.h> header file. */
/* #undef HAVE_XEN_XEN_H */

/* Define to 1 if you have the <xlocale.h> header file. */
#define HAVE_XLOCALE_H 1

/* Have query_raw field in libxml2 xmlURI structure */
#define HAVE_XMLURI_QUERY_RAW /**/

/* Define to 1 if the system has the type `_Bool'. */
#define HAVE__BOOL 1

/* Define to 1 if you have the `_fseeki64' function. */
/* #undef HAVE__FSEEKI64 */

/* Define to 1 if you have the `_ftelli64' function. */
/* #undef HAVE__FTELLI64 */

/* Define to 1 if you have the `_ftime' function. */
/* #undef HAVE__FTIME */

/* Define to 1 if you have the `_getpty' function. */
/* #undef HAVE__GETPTY */

/* Define to 1 if you have the '_set_invalid_parameter_handler' function. */
/* #undef HAVE__SET_INVALID_PARAMETER_HANDLER */

/* Define to 1 if you have the external variable, _system_configuration with a
   member named physmem. */
/* #undef HAVE__SYSTEM_CONFIGURATION */

/* Define to 1 if you have the '__fpurge' function. */
#define HAVE___FPURGE 1

/* Define to 1 if you have the '__freading' function. */
#define HAVE___FREADING 1

/* Define to 1 if you have the '__fsetlocking' function. */
#define HAVE___FSETLOCKING 1

/* Define to 1 if you have the `__secure_getenv' function. */
/* #undef HAVE___SECURE_GETENV */

/* Define to 1 if you have the '__xpg_strerror_r' function. */
#define HAVE___XPG_STRERROR_R 1

/* Define HOST_NAME_MAX when <limits.h> does not define it. */
/* #undef HOST_NAME_MAX */

/* path to ifconfig binary */
/* #undef IFCONFIG_PATH */

/* path to ip6tables binary */
#define IP6TABLES_PATH "/sbin/ip6tables"

/* path to iptables binary */
#define IPTABLES_PATH "/sbin/iptables"

/* path to ip binary */
#define IP_PATH "/sbin/ip"

/* Define to 1 if isatty() may fail without setting errno. */
/* #undef ISATTY_FAILS_WITHOUT_SETTING_ERRNO */

/* Location of iscsiadm program */
#define ISCSIADM "iscsiadm"

/* Define as the bit index in the word where to find bit 0 of the exponent of
   'long double'. */
#define LDBL_EXPBIT0_BIT 0

/* Define as the word index where to find the exponent of 'long double'. */
#define LDBL_EXPBIT0_WORD 2

/* Define as the bit index in the word where to find the sign of 'long
   double'. */
/* #undef LDBL_SIGNBIT_BIT */

/* Define as the word index where to find the sign of 'long double'. */
/* #undef LDBL_SIGNBIT_WORD */

/* Define to 1 if lseek does not detect pipes. */
/* #undef LSEEK_PIPE_BROKEN */

/* Define to 1 if 'lstat' dereferences a symlink specified with a trailing
   slash. */
#define LSTAT_FOLLOWS_SLASHED_SYMLINK 1

/* Define to the sub-directory in which libtool stores uninstalled libraries.
   */
#define LT_OBJDIR ".libs/"

/* Location of lvchange program */
#define LVCHANGE "/sbin/lvchange"

/* Location of lvcreate program */
#define LVCREATE "/sbin/lvcreate"

/* Location of lvremove program */
#define LVREMOVE "/sbin/lvremove"

/* Location of lvs program */
#define LVS "/sbin/lvs"

/* If malloc(0) is != NULL, define this to 1. Otherwise define this to 0. */
#define MALLOC_0_IS_NONNULL 1

/* Define to a substitute value for mmap()'s MAP_ANONYMOUS flag. */
/* #undef MAP_ANONYMOUS */

/* Define if the mbrtowc function does not return (size_t) -2 for empty input.
   */
#define MBRTOWC_EMPTY_INPUT_BUG 1

/* Define if the mbrtowc function has the NULL pwc argument bug. */
/* #undef MBRTOWC_NULL_ARG1_BUG */

/* Define if the mbrtowc function has the NULL string argument bug. */
/* #undef MBRTOWC_NULL_ARG2_BUG */

/* Define if the mbrtowc function does not return 0 for a NUL character. */
/* #undef MBRTOWC_NUL_RETVAL_BUG */

/* Define if the mbrtowc function returns a wrong return value. */
/* #undef MBRTOWC_RETVAL_BUG */

/* Location or name of the mkfs program */
#define MKFS "/sbin/mkfs"

/* Location or name of the modprobe program */
#define MODPROBE "/sbin/modprobe"

/* Location or name of the mount program */
#define MOUNT "/bin/mount"

/* define to 1 if Linux kernel headers require a workaround to avoid
   compilation errors when mixed with glibc netinet headers */
/* #undef NETINET_LINUX_WORKAROUND */

/* Location or name of the numad program */
/* #undef NUMAD */

/* Define to 1 if open() fails to recognize a trailing slash. */
/* #undef OPEN_TRAILING_SLASH_BUG */

/* Location or name of the ovs-vsctl program */
#define OVSVSCTL "/usr/bin/ovs-vsctl"

/* Name of package */
#define PACKAGE "libvirt"

/* Extra package name */
/* #undef PACKAGER */

/* Extra package version */
/* #undef PACKAGER_VERSION */

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT "libvir-list@redhat.com"

/* Define to the full name of this package. */
#define PACKAGE_NAME "libvirt"

/* Define to the full name and version of this package. */
#define PACKAGE_STRING "libvirt 1.2.12"

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME "libvirt"

/* Define to the home page for this package. */
#define PACKAGE_URL "http://libvirt.org"

/* Define to the version of this package. */
#define PACKAGE_VERSION "1.2.12"

/* Location or name of the parted program */
/* #undef PARTED */

/* Location of pkcheck program */
#define PKCHECK_PATH "/usr/bin/pkcheck"

/* Pass uid to pkcheck */
/* #undef PKCHECK_SUPPORTS_UID */

/* Location of polkit-auth program */
/* #undef POLKIT_AUTH */

/* Define if <inttypes.h> exists and defines unusable PRI* macros. */
/* #undef PRI_MACROS_BROKEN */

/* Define to the type that is the result of default argument promotions of
   type mode_t. */
#define PROMOTED_MODE_T mode_t

/* Define if the pthread_in_use() detection is hard. */
/* #undef PTHREAD_IN_USE_DETECTION_HARD */

/* Define to 1 if pthread_sigmask(), when it fails, returns -1 and sets errno.
   */
/* #undef PTHREAD_SIGMASK_FAILS_WITH_ERRNO */

/* Define to 1 if pthread_sigmask may return 0 and have no effect. */
/* #undef PTHREAD_SIGMASK_INEFFECTIVE */

/* Define to 1 if pthread_sigmask() unblocks signals incorrectly. */
/* #undef PTHREAD_SIGMASK_UNBLOCK_BUG */

/* Define to l, ll, u, ul, ull, etc., as suitable for constants of type
   'ptrdiff_t'. */
/* #undef PTRDIFF_T_SUFFIX */

/* Location of pvcreate program */
#define PVCREATE "/sbin/pvcreate"

/* Location of pvremove program */
#define PVREMOVE "/sbin/pvremove"

/* Location of pvs program */
#define PVS "/sbin/pvs"

/* QEMU group account */
#define QEMU_GROUP "root"

/* QEMU user account */
#define QEMU_USER "root"

/* Location or name of the radvd program */
#define RADVD "radvd"

/* Define to 1 if readlink fails to recognize a trailing slash. */
/* #undef READLINK_TRAILING_SLASH_BUG */

/* Define to 1 if stat needs help when passed a directory name with a trailing
   slash */
/* #undef REPLACE_FUNC_STAT_DIR */

/* Define to 1 if stat needs help when passed a file name with a trailing
   slash */
/* #undef REPLACE_FUNC_STAT_FILE */

/* Define if nl_langinfo exists but is overridden by gnulib. */
/* #undef REPLACE_NL_LANGINFO */

/* Define to 1 if strerror(0) does not return a message implying success. */
/* #undef REPLACE_STRERROR_0 */

/* Define if vasnprintf exists but is overridden by gnulib. */
/* #undef REPLACE_VASNPRINTF */

/* Location or name of the rmmod program */
#define RMMOD "/sbin/rmmod"

/* Location or name of the scrub program (for wiping algorithms) */
#define SCRUB "/usr/bin/scrub"

/* SELinux mount point */
#define SELINUX_MOUNT "/selinux"

/* Location or name of the showmount program */
#define SHOWMOUNT ""

/* Define to l, ll, u, ul, ull, etc., as suitable for constants of type
   'sig_atomic_t'. */
/* #undef SIG_ATOMIC_T_SUFFIX */

/* The size of `long', as computed by sizeof. */
#define SIZEOF_LONG 8

/* Define as the maximum value of type 'size_t', if the system doesn't define
   it. */
#ifndef SIZE_MAX
/* # undef SIZE_MAX */
#endif

/* Define to l, ll, u, ul, ull, etc., as suitable for constants of type
   'size_t'. */
/* #undef SIZE_T_SUFFIX */

/* If using the C implementation of alloca, define if you know the
   direction of stack growth for your system; otherwise it will be
   automatically deduced at runtime.
	STACK_DIRECTION > 0 => grows toward higher addresses
	STACK_DIRECTION < 0 => grows toward lower addresses
	STACK_DIRECTION = 0 => direction of growth unknown */
/* #undef STACK_DIRECTION */

/* Define to 1 when performing static analysis. */
#define STATIC_ANALYSIS 0

/* Define to 1 if the `S_IS*' macros in <sys/stat.h> do not work properly. */
/* #undef STAT_MACROS_BROKEN */

/* Define to 1 if you have the ANSI C header files. */
#define STDC_HEADERS 1

/* Define to 1 if strerror_r returns char *. */
#define STRERROR_R_CHAR_P 1

/* Location or name of the tc program (see iproute2) */
#define TC "/sbin/tc"

/* Whether malloc OOM checking is enabled */
/* #undef TEST_OOM */

/* Whether backtrace() is available */
/* #undef TEST_OOM_TRACE */

/* Define to 1 if the type of the st_atim member of a struct stat is struct
   timespec. */
#define TYPEOF_STRUCT_STAT_ST_ATIM_IS_STRUCT_TIMESPEC 1

/* Location or name of the udevadm program */
#define UDEVADM "/sbin/udevadm"

/* Location or name of the udevsettle program */
/* #undef UDEVSETTLE */

/* Location or name of the mount program */
#define UMOUNT "/bin/umount"

/* Define to the prefix of C symbols at the assembler and linker level, either
   an underscore or empty. */
#define USER_LABEL_PREFIX 

/* Define if the POSIX multithreading library can be used. */
#define USE_POSIX_THREADS 1

/* Define if references to the POSIX multithreading library should be made
   weak. */
#define USE_POSIX_THREADS_WEAK 1

/* Define if the GNU Pth multithreading library can be used. */
/* #undef USE_PTH_THREADS */

/* Define if references to the GNU Pth multithreading library should be made
   weak. */
/* #undef USE_PTH_THREADS_WEAK */

/* Define if the old Solaris multithreading library can be used. */
/* #undef USE_SOLARIS_THREADS */

/* Define if references to the old Solaris multithreading library should be
   made weak. */
/* #undef USE_SOLARIS_THREADS_WEAK */

/* Enable extensions on AIX 3, Interix.  */
#ifndef _ALL_SOURCE
# define _ALL_SOURCE 1
#endif
/* Enable general extensions on OS X.  */
#ifndef _DARWIN_C_SOURCE
# define _DARWIN_C_SOURCE 1
#endif
/* Enable GNU extensions on systems that have them.  */
#ifndef _GNU_SOURCE
# define _GNU_SOURCE 1
#endif
/* Use GNU style printf and scanf.  */
#ifndef __USE_MINGW_ANSI_STDIO
# define __USE_MINGW_ANSI_STDIO 1
#endif
/* Enable threading extensions on Solaris.  */
#ifndef _POSIX_PTHREAD_SEMANTICS
# define _POSIX_PTHREAD_SEMANTICS 1
#endif
/* Enable extensions on HP NonStop.  */
#ifndef _TANDEM_SOURCE
# define _TANDEM_SOURCE 1
#endif
/* Enable X/Open extensions if necessary.  HP-UX 11.11 defines
   mbstate_t only if _XOPEN_SOURCE is defined to 500, regardless of
   whether compiling with -Ae or -D_HPUX_SOURCE=1.  */
#ifndef _XOPEN_SOURCE
/* # undef _XOPEN_SOURCE */
#endif
/* Enable general extensions on Solaris.  */
#ifndef __EXTENSIONS__
# define __EXTENSIONS__ 1
#endif


/* Define if the native Windows multithreading API can be used. */
/* #undef USE_WINDOWS_THREADS */

/* Location of directory containing VirtualBox XPCOMC library */
#define VBOX_XPCOMC_DIR ""

/* Version number of package */
#define VERSION "1.2.12"

/* Location of vgchange program */
#define VGCHANGE "/sbin/vgchange"

/* Location of vgcreate program */
#define VGCREATE "/sbin/vgcreate"

/* Location of vgremove program */
#define VGREMOVE "/sbin/vgremove"

/* Location of vgs program */
#define VGS "/sbin/vgs"

/* Location of vgscan program */
#define VGSCAN "/sbin/vgscan"

/* Use GCC atomic ops */
#define VIR_ATOMIC_OPS_GCC 1

/* Use pthread atomic ops emulation */
/* #undef VIR_ATOMIC_OPS_PTHREAD */

/* Use Win32 atomic ops */
/* #undef VIR_ATOMIC_OPS_WIN32 */

/* path to directory containing UUCP device lock files */
#define VIR_CHRDEV_LOCK_FILE_PATH "/var/lock"

/* Define to empty or 'const' depending on how SELinux qualifies its security
   context parameters */
#define VIR_SELINUX_CTX_CONST 

/* Define to the absolute path of a shell that does not truncate on <>
   redirection, if /bin/sh does not fit the bill */
/* #undef VIR_WRAPPER_SHELL */

/* Define to 1 if unsetenv returns void instead of int. */
/* #undef VOID_UNSETENV */

/* Define to l, ll, u, ul, ull, etc., as suitable for constants of type
   'wchar_t'. */
/* #undef WCHAR_T_SUFFIX */

/* Define if WSAStartup is needed. */
/* #undef WINDOWS_SOCKETS */

/* Define to l, ll, u, ul, ull, etc., as suitable for constants of type
   'wint_t'. */
/* #undef WINT_T_SUFFIX */

/* whether libapparmor is available */
/* #undef WITH_APPARMOR */

/* whether libattr is available */
#define WITH_ATTR 1

/* whether libaudit is available */
#define WITH_AUDIT 1

/* whether avahi-client >= 0.6.0 is available */
#define WITH_AVAHI 1

/* whether bhyve driver is enabled */
/* #undef WITH_BHYVE */

/* whether blkid >= 2.17 is available */
#define WITH_BLKID 1

/* whether bridge code is needed */
#define WITH_BRIDGE 1

/* whether libcap-ng is available */
/* #undef WITH_CAPNG */

/* whether libcurl >= 7.18.0 is available */
#define WITH_CURL 1

/* whether dbus-1 >= 1.0.0 is available */
#define WITH_DBUS 1

/* whether to build drivers as modules */
#define WITH_DRIVER_MODULES 1

/* whether DTrace static probes are available */
/* #undef WITH_DTRACE_PROBES */

/* whether ESX driver is enabled */
#define WITH_ESX 1

/* whether fuse >= 2.8.6 is available */
#define WITH_FUSE 1

/* whether glusterfs-api >= 3.4.1 is available */
/* #undef WITH_GLUSTERFS */

/* whether GNUTLS is available for encryption */
#define WITH_GNUTLS 1

/* set to 1 if it is known or assumed that GNUTLS uses gcrypt */
#define WITH_GNUTLS_GCRYPT 1

/* whether hal >= 0.5.0 is available */
/* #undef WITH_HAL */

/* whether Hyper-V driver is enabled */
/* #undef WITH_HYPERV */

/* whether the interface driver is enabled */
#define WITH_INTERFACE 1

/* whether libvirtd daemon is enabled */
#define WITH_LIBVIRTD 1

/* whether libxenlight driver is enabled */
/* #undef WITH_LIBXL */

/* whether LXC driver is enabled */
#define WITH_LXC 1

/* whether macvtap support is enabled */
#define WITH_MACVTAP 1

/* whether netcf >= 0.1.4 is available */
#define WITH_NETCF 1

/* whether network driver is enabled */
#define WITH_NETWORK 1

/* with node device driver */
#define WITH_NODE_DEVICES 1

/* whether libnuma is available */
#define WITH_NUMACTL 1

/* whether local network filter management driver is available */
#define WITH_NWFILTER 1

/* whether OpenVZ driver is enabled */
#define WITH_OPENVZ 1

/* whether openwsman >= 2.2.3 is available */
/* #undef WITH_OPENWSMAN */

/* whether Parallels driver is enabled */
/* #undef WITH_PARALLELS */

/* whether pciaccess >= 0.10.0 is available */
#define WITH_PCIACCESS 1

/* whether IBM HMC / IVM driver is enabled */
/* #undef WITH_PHYP */

/* whether to use pm-utils */
#define WITH_PM_UTILS 1

/* use PolicyKit for UNIX socket access checks */
#define WITH_POLKIT 1

/* use PolicyKit for UNIX socket access checks */
/* #undef WITH_POLKIT0 */

/* use PolicyKit for UNIX socket access checks */
#define WITH_POLKIT1 1

/* whether QEMU driver is enabled */
#define WITH_QEMU 1

/* whether libreadline is available */
/* #undef WITH_READLINE */

/* whether Remote driver is enabled */
#define WITH_REMOTE 1

/* whether building for the RHEL-5 API */
/* #undef WITH_RHEL5_API */

/* whether libsanlock_client is available */
/* #undef WITH_SANLOCK */

/* whether libsasl2 is available */
/* #undef WITH_SASL */

/* whether libsasl2 is available */
/* #undef WITH_SASL1 */

/* whether AppArmor security driver is available */
/* #undef WITH_SECDRIVER_APPARMOR */

/* whether SELinux security driver is available */
#define WITH_SECDRIVER_SELINUX 1

/* whether local secrets management driver is available */
#define WITH_SECRETS 1

/* whether libselinux is available */
#define WITH_SELINUX 1

/* whether libssh2 >= 1.3 is available */
/* #undef WITH_SSH2 */

/* Define to 1 if at least one storage backend is in use */
#define WITH_STORAGE 1

/* whether directory backend for storage driver is enabled */
#define WITH_STORAGE_DIR 1

/* whether Disk backend for storage driver is enabled */
/* #undef WITH_STORAGE_DISK */

/* whether FS backend for storage driver is enabled */
#define WITH_STORAGE_FS 1

/* whether Gluster backend for storage driver is enabled */
/* #undef WITH_STORAGE_GLUSTER */

/* whether iSCSI backend for storage driver is enabled */
#define WITH_STORAGE_ISCSI 1

/* whether LVM backend for storage driver is enabled */
#define WITH_STORAGE_LVM 1

/* whether mpath backend for storage driver is enabled */
#define WITH_STORAGE_MPATH 1

/* whether RBD backend for storage driver is enabled */
/* #undef WITH_STORAGE_RBD */

/* whether SCSI backend for storage driver is enabled */
#define WITH_STORAGE_SCSI 1

/* whether Sheepdog backend for storage driver is enabled */
/* #undef WITH_STORAGE_SHEEPDOG */

/* whether ZFS backend for storage driver is enabled */
/* #undef WITH_STORAGE_ZFS */

/* whether libsystemd-daemon >= 0.27.1 is available */
/* #undef WITH_SYSTEMD_DAEMON */

/* whether Test driver is enabled */
#define WITH_TEST 1

/* whether libudev >= 145 is available */
#define WITH_UDEV 1

/* whether UML driver is enabled */
#define WITH_UML 1

/* whether VirtualBox driver is enabled */
#define WITH_VBOX 1

/* whether vsi vepa support is enabled */
#define WITH_VIRTUALPORT 1

/* whether VMware driver is enabled */
#define WITH_VMWARE 1

/* whether VMware VMX config handling is enabled */
#define WITH_VMX 1

/* whether Xen driver is enabled */
/* #undef WITH_XEN */

/* whether XenAPI driver is enabled */
/* #undef WITH_XENAPI */

/* whether Xen inotify sub-driver is enabled */
/* #undef WITH_XEN_INOTIFY */

/* whether libyajl is available */
#define WITH_YAJL 1

/* whether libyajl is available */
#define WITH_YAJL2 1

/* Define WORDS_BIGENDIAN to 1 if your processor stores words with the most
   significant byte first (like Motorola and SPARC, unlike Intel). */
#if defined AC_APPLE_UNIVERSAL_BUILD
# if defined __BIG_ENDIAN__
#  define WORDS_BIGENDIAN 1
# endif
#else
# ifndef WORDS_BIGENDIAN
/* #  undef WORDS_BIGENDIAN */
# endif
#endif

/* Define to 1 if gcc supports pragma push/pop */
#define WORKING_PRAGMA_PUSH 1

/* Location of zfs program */
/* #undef ZFS */

/* Location of zpool program */
/* #undef ZPOOL */

/* Enable large inode numbers on Mac OS X 10.5. */
#define _DARWIN_USE_64_BIT_INODE 1

/* Number of bits in a file offset, on hosts where this is settable. */
/* #undef _FILE_OFFSET_BITS */

/* Define to 1 if Gnulib overrides 'struct stat' on Windows so that struct
   stat.st_size becomes 64-bit. */
/* #undef _GL_WINDOWS_64_BIT_ST_SIZE */

/* Define to 1 to make fseeko visible on some hosts (e.g. glibc 2.2). */
/* #undef _LARGEFILE_SOURCE */

/* Define for large files, on AIX-style hosts. */
/* #undef _LARGE_FILES */

/* Define to 1 on Solaris. */
/* #undef _LCONV_C99 */

/* Define in order to get some macros on AIX systems. */
#define _LINUX_SOURCE_COMPAT 1

/* Define to 1 if on MINIX. */
/* #undef _MINIX */

/* Define to 1 to make NetBSD features available. MINIX 3 needs this. */
/* #undef _NETBSD_SOURCE */

/* The _Noreturn keyword of C11.  */
#if ! (defined _Noreturn \
       || (defined __STDC_VERSION__ && 201112 <= __STDC_VERSION__))
# if (3 <= __GNUC__ || (__GNUC__ == 2 && 8 <= __GNUC_MINOR__) \
      || 0x5110 <= __SUNPRO_C)
#  define _Noreturn __attribute__ ((__noreturn__))
# elif defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn
# endif
#endif


/* Define to 2 if the system does not provide POSIX.1 features except with
   this defined. */
/* #undef _POSIX_1_SOURCE */

/* Define to 1 in order to get the POSIX compatible declarations of socket
   functions. */
/* #undef _POSIX_PII_SOCKET */

/* Define to 1 if you need to in order for 'stat' and other things to work. */
/* #undef _POSIX_SOURCE */

/* For thread-safety on OSF/1, Solaris. */
#define _REENTRANT 1

/* Define if you want <regex.h> to include <limits.h>, so that it consistently
   overrides <limits.h>'s RE_DUP_MAX. */
/* #undef _REGEX_INCLUDE_LIMITS_H */

/* Define if you want regoff_t to be at least as wide POSIX requires. */
/* #undef _REGEX_LARGE_OFFSETS */

/* For thread-safety on AIX, FreeBSD. */
#define _THREAD_SAFE 1

/* Define as a replacement for the ISO C99 __func__ variable. */
/* #undef __func__ */

/* Hack to avoid symbol clash */
#define base64_encode libvirt_gl_base64_encode

/* Hack to avoid symbol clash */
#define base64_encode_alloc libvirt_gl_base64_encode_alloc

/* Please see the Gnulib manual for how to use these macros.

   Suppress extern inline with HP-UX cc, as it appears to be broken; see
   <http://lists.gnu.org/archive/html/bug-texinfo/2013-02/msg00030.html>.

   Suppress extern inline with Sun C in standards-conformance mode, as it
   mishandles inline functions that call each other.  E.g., for 'inline void f
   (void) { } inline void g (void) { f (); }', c99 incorrectly complains
   'reference to static identifier "f" in extern inline function'.
   This bug was observed with Sun C 5.12 SunOS_i386 2011/11/16.

   Suppress extern inline (with or without __attribute__ ((__gnu_inline__)))
   on configurations that mistakenly use 'static inline' to implement
   functions or macros in standard C headers like <ctype.h>.  For example,
   if isdigit is mistakenly implemented via a static inline function,
   a program containing an extern inline function that calls isdigit
   may not work since the C standard prohibits extern inline functions
   from calling static functions.  This bug is known to occur on:

     OS X 10.8 and earlier; see:
     http://lists.gnu.org/archive/html/bug-gnulib/2012-12/msg00023.html

     DragonFly; see
     http://muscles.dragonflybsd.org/bulk/bleeding-edge-potential/latest-per-pkg/ah-tty-0.3.12.log

     FreeBSD; see:
     http://lists.gnu.org/archive/html/bug-gnulib/2014-07/msg00104.html

   OS X 10.9 has a macro __header_inline indicating the bug is fixed for C and
   for clang but remains for g++; see <http://trac.macports.org/ticket/41033>.
   Assume DragonFly and FreeBSD will be similar.  */
#if (((defined __APPLE__ && defined __MACH__) \
      || defined __DragonFly__ || defined __FreeBSD__) \
     && (defined __header_inline \
         ? (defined __cplusplus && defined __GNUC_STDC_INLINE__ \
            && ! defined __clang__) \
         : ((! defined _DONT_USE_CTYPE_INLINE_ \
             && (defined __GNUC__ || defined __cplusplus)) \
            || (defined _FORTIFY_SOURCE && 0 < _FORTIFY_SOURCE \
                && defined __GNUC__ && ! defined __cplusplus))))
# define _GL_EXTERN_INLINE_STDHEADER_BUG
#endif
#if ((__GNUC__ \
      ? defined __GNUC_STDC_INLINE__ && __GNUC_STDC_INLINE__ \
      : (199901L <= __STDC_VERSION__ \
         && !defined __HP_cc \
         && !(defined __SUNPRO_C && __STDC__))) \
     && !defined _GL_EXTERN_INLINE_STDHEADER_BUG)
# define _GL_INLINE inline
# define _GL_EXTERN_INLINE extern inline
# define _GL_EXTERN_INLINE_IN_USE
#elif (2 < __GNUC__ + (7 <= __GNUC_MINOR__) && !defined __STRICT_ANSI__ \
       && !defined _GL_EXTERN_INLINE_STDHEADER_BUG)
# if defined __GNUC_GNU_INLINE__ && __GNUC_GNU_INLINE__
   /* __gnu_inline__ suppresses a GCC 4.2 diagnostic.  */
#  define _GL_INLINE extern inline __attribute__ ((__gnu_inline__))
# else
#  define _GL_INLINE extern inline
# endif
# define _GL_EXTERN_INLINE extern
# define _GL_EXTERN_INLINE_IN_USE
#else
# define _GL_INLINE static _GL_UNUSED
# define _GL_EXTERN_INLINE static _GL_UNUSED
#endif

/* In GCC, suppress bogus "no previous prototype for 'FOO'"
   and "no previous declaration for 'FOO'" diagnostics,
   when FOO is an inline function in the header; see
   <https://gcc.gnu.org/bugzilla/show_bug.cgi?id=54113> and
   <https://gcc.gnu.org/bugzilla/show_bug.cgi?id=63877>.  */
#if 4 < __GNUC__ + (6 <= __GNUC_MINOR__)
# if defined __GNUC_STDC_INLINE__ && __GNUC_STDC_INLINE__
#  define _GL_INLINE_HEADER_CONST_PRAGMA
# else
#  define _GL_INLINE_HEADER_CONST_PRAGMA \
     _Pragma ("GCC diagnostic ignored \"-Wsuggest-attribute=const\"")
# endif
# define _GL_INLINE_HEADER_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wmissing-prototypes\"") \
    _Pragma ("GCC diagnostic ignored \"-Wmissing-declarations\"") \
    _GL_INLINE_HEADER_CONST_PRAGMA
# define _GL_INLINE_HEADER_END \
    _Pragma ("GCC diagnostic pop")
#else
# define _GL_INLINE_HEADER_BEGIN
# define _GL_INLINE_HEADER_END
#endif

/* Define to a replacement function name for fnmatch(). */
/* #undef fnmatch */

/* Define to `int' if <sys/types.h> doesn't define. */
/* #undef gid_t */

/* A replacement for va_copy, if needed.  */
#define gl_va_copy(a,b) ((a) = (b))

/* Define to `__inline__' or `__inline' if that's what the C compiler
   calls it, or to nothing if 'inline' is not supported under any name.  */
#ifndef __cplusplus
/* #undef inline */
#endif

/* Define to long or long long if <stdint.h> and <inttypes.h> don't define. */
/* #undef intmax_t */

/* Hack to avoid symbol clash */
#define isbase64 libvirt_gl_isbase64

/* Work around a bug in Apple GCC 4.0.1 build 5465: In C99 mode, it supports
   the ISO C 99 semantics of 'extern inline' (unlike the GNU C semantics of
   earlier versions), but does not display it by setting __GNUC_STDC_INLINE__.
   __APPLE__ && __MACH__ test for Mac OS X.
   __APPLE_CC__ tests for the Apple compiler and its version.
   __STDC_VERSION__ tests for the C99 mode.  */
#if defined __APPLE__ && defined __MACH__ && __APPLE_CC__ >= 5465 && !defined __cplusplus && __STDC_VERSION__ >= 199901L && !defined __GNUC_STDC_INLINE__
# define __GNUC_STDC_INLINE__ 1
#endif

/* Define to 1 if the compiler is checking for lint. */
#define lint 1

/* Define to a type if <wchar.h> does not define. */
/* #undef mbstate_t */

/* Define to the real name of the mktime_internal function. */
/* #undef mktime_internal */

/* Define to `int' if <sys/types.h> does not define. */
/* #undef mode_t */

/* Define to the type of st_nlink in struct stat, or a supertype. */
/* #undef nlink_t */

/* Define to `int' if <sys/types.h> does not define. */
/* #undef pid_t */

/* Define as the type of the result of subtracting two pointers, if the system
   doesn't define it. */
/* #undef ptrdiff_t */

/* Define to rpl_re_comp if the replacement should be used. */
/* #undef re_comp */

/* Define to rpl_re_compile_fastmap if the replacement should be used. */
/* #undef re_compile_fastmap */

/* Define to rpl_re_compile_pattern if the replacement should be used. */
/* #undef re_compile_pattern */

/* Define to rpl_re_exec if the replacement should be used. */
/* #undef re_exec */

/* Define to rpl_re_match if the replacement should be used. */
/* #undef re_match */

/* Define to rpl_re_match_2 if the replacement should be used. */
/* #undef re_match_2 */

/* Define to rpl_re_search if the replacement should be used. */
/* #undef re_search */

/* Define to rpl_re_search_2 if the replacement should be used. */
/* #undef re_search_2 */

/* Define to rpl_re_set_registers if the replacement should be used. */
/* #undef re_set_registers */

/* Define to rpl_re_set_syntax if the replacement should be used. */
/* #undef re_set_syntax */

/* Define to rpl_re_syntax_options if the replacement should be used. */
/* #undef re_syntax_options */

/* Define to rpl_regcomp if the replacement should be used. */
/* #undef regcomp */

/* Define to rpl_regerror if the replacement should be used. */
/* #undef regerror */

/* Define to rpl_regexec if the replacement should be used. */
/* #undef regexec */

/* Define to rpl_regfree if the replacement should be used. */
/* #undef regfree */

/* Define to the equivalent of the C99 'restrict' keyword, or to
   nothing if this is not supported.  Do not define if restrict is
   supported directly.  */
#define restrict __restrict
/* Work around a bug in Sun C++: it does not support _Restrict or
   __restrict__, even though the corresponding Sun C compiler ends up with
   "#define restrict _Restrict" or "#define restrict __restrict__" in the
   previous line.  Perhaps some future version of Sun C++ will work with
   restrict; if so, hopefully it defines __RESTRICT like Sun C does.  */
#if defined __SUNPRO_CC && !defined __RESTRICT
# define _Restrict
# define __restrict__
#endif

/* Define as an integer type suitable for memory locations that can be
   accessed atomically even in the presence of asynchronous signals. */
/* #undef sig_atomic_t */

/* Define to `unsigned int' if <sys/types.h> does not define. */
/* #undef size_t */

/* type to use in place of socklen_t if not defined */
/* #undef socklen_t */

/* Define as a signed type of the same size and rank as size_t. */
/* #undef ssize_t */

/* Define to `int' if <sys/types.h> doesn't define. */
/* #undef uid_t */

/* Define as a marker that can be attached to declarations that might not
    be used.  This helps to reduce warnings, such as from
    GCC -Wunused-parameter.  */
#if __GNUC__ >= 3 || (__GNUC__ == 2 && __GNUC_MINOR__ >= 7)
# define _GL_UNUSED __attribute__ ((__unused__))
#else
# define _GL_UNUSED
#endif
/* The name _UNUSED_PARAMETER_ is an earlier spelling, although the name
   is a misnomer outside of parameter lists.  */
#define _UNUSED_PARAMETER_ _GL_UNUSED

/* gcc supports the "unused" attribute on possibly unused labels, and
   g++ has since version 4.5.  Note to support C++ as well as C,
   _GL_UNUSED_LABEL should be used with a trailing ;  */
#if !defined __cplusplus || __GNUC__ > 4 \
    || (__GNUC__ == 4 && __GNUC_MINOR__ >= 5)
# define _GL_UNUSED_LABEL _GL_UNUSED
#else
# define _GL_UNUSED_LABEL
#endif

/* The __pure__ attribute was added in gcc 2.96.  */
#if __GNUC__ > 2 || (__GNUC__ == 2 && __GNUC_MINOR__ >= 96)
# define _GL_ATTRIBUTE_PURE __attribute__ ((__pure__))
#else
# define _GL_ATTRIBUTE_PURE /* empty */
#endif

/* The __const__ attribute was added in gcc 2.95.  */
#if __GNUC__ > 2 || (__GNUC__ == 2 && __GNUC_MINOR__ >= 95)
# define _GL_ATTRIBUTE_CONST __attribute__ ((__const__))
#else
# define _GL_ATTRIBUTE_CONST /* empty */
#endif


/* Define to an unsigned 32-bit type if <sys/types.h> lacks this type. */
/* #undef useconds_t */

/* Define as a macro for copying va_list variables. */
/* #undef va_copy */

#include <config-post.h>
