
typedef unsigned char __u_char;
typedef unsigned short int __u_short;
typedef unsigned int __u_int;
typedef unsigned long int __u_long;


typedef signed char __int8_t;
typedef unsigned char __uint8_t;
typedef signed short int __int16_t;
typedef unsigned short int __uint16_t;
typedef signed int __int32_t;
typedef unsigned int __uint32_t;

typedef signed long int __int64_t;
typedef unsigned long int __uint64_t;







typedef long int __quad_t;
typedef unsigned long int __u_quad_t;


typedef unsigned long int __dev_t;
typedef unsigned int __uid_t;
typedef unsigned int __gid_t;
typedef unsigned long int __ino_t;
typedef unsigned long int __ino64_t;
typedef unsigned int __mode_t;
typedef unsigned long int __nlink_t;
typedef long int __off_t;
typedef long int __off64_t;
typedef int __pid_t;
typedef struct { int __val[2]; } __fsid_t;
typedef long int __clock_t;
typedef unsigned long int __rlim_t;
typedef unsigned long int __rlim64_t;
typedef unsigned int __id_t;
typedef long int __time_t;
typedef unsigned int __useconds_t;
typedef long int __suseconds_t;

typedef int __daddr_t;
typedef int __key_t;


typedef int __clockid_t;


typedef void * __timer_t;


typedef long int __blksize_t;




typedef long int __blkcnt_t;
typedef long int __blkcnt64_t;


typedef unsigned long int __fsblkcnt_t;
typedef unsigned long int __fsblkcnt64_t;


typedef unsigned long int __fsfilcnt_t;
typedef unsigned long int __fsfilcnt64_t;


typedef long int __fsword_t;

typedef long int __ssize_t;


typedef long int __syscall_slong_t;

typedef unsigned long int __syscall_ulong_t;



typedef __off64_t __loff_t;
typedef __quad_t *__qaddr_t;
typedef char *__caddr_t;


typedef long int __intptr_t;


typedef unsigned int __socklen_t;

typedef __ssize_t ssize_t;





typedef long unsigned int size_t;




typedef __gid_t gid_t;




typedef __uid_t uid_t;







typedef __off64_t off_t;




typedef __off64_t off64_t;




typedef __useconds_t useconds_t;




typedef __pid_t pid_t;






typedef __intptr_t intptr_t;






typedef __socklen_t socklen_t;
extern int access (const char *__name, int __type)



extern int euidaccess (const char *__name, int __type)



extern int eaccess (const char *__name, int __type)



extern int faccessat (int __fd, const char *__file, int __type, int __flag)

extern __off64_t lseek (int __fd, __off64_t __offset, int __whence) __asm__ 






extern __off64_t lseek64 (int __fd, __off64_t __offset, int __whence)




extern int close (int __fd);






extern ssize_t read (int __fd, void *__buf, size_t __nbytes) ;





extern ssize_t write (int __fd, const void *__buf, size_t __n) ;
extern ssize_t pread (int __fd, void *__buf, size_t __nbytes, __off64_t __offset) __asm__

                    ;
extern ssize_t pwrite (int __fd, const void *__buf, size_t __nbytes, __off64_t __offset) __asm__

extern ssize_t pread64 (int __fd, void *__buf, size_t __nbytes,
   __off64_t __offset) ;


extern ssize_t pwrite64 (int __fd, const void *__buf, size_t __n,
    __off64_t __offset) ;







extern int pipe (int __pipedes[2]) 
# 420 "/usr/include/unistd.h"
                                  1 
# 420 "/usr/include/unistd.h" 3 4
                                               ;




extern int pipe2 (int __pipedes[2], int __flags) 
# 425 "/usr/include/unistd.h"
                                                1 
# 425 "/usr/include/unistd.h" 3 4
                                                             ;
# 435 "/usr/include/unistd.h" 3 4
extern unsigned int alarm (unsigned int __seconds) 
# 435 "/usr/include/unistd.h"
                                                  1
# 435 "/usr/include/unistd.h" 3 4
                                                         ;
# 447 "/usr/include/unistd.h" 3 4
extern unsigned int sleep (unsigned int __seconds);







extern __useconds_t ualarm (__useconds_t __value, __useconds_t __interval)
     
# 456 "/usr/include/unistd.h"
    1
# 456 "/usr/include/unistd.h" 3 4
           ;






extern int usleep (__useconds_t __useconds);
# 472 "/usr/include/unistd.h" 3 4
extern int pause (void);



extern int chown (const char *__file, __uid_t __owner, __gid_t __group)
     
# 477 "/usr/include/unistd.h"
    1 1 
# 477 "/usr/include/unistd.h" 3 4
                                 ;



extern int fchown (int __fd, __uid_t __owner, __gid_t __group) 
# 481 "/usr/include/unistd.h"
                                                              1 
# 481 "/usr/include/unistd.h" 3 4
                                                                           ;




extern int lchown (const char *__file, __uid_t __owner, __gid_t __group)
     
# 487 "/usr/include/unistd.h"
    1 1 
# 487 "/usr/include/unistd.h" 3 4
                                 ;






extern int fchownat (int __fd, const char *__file, __uid_t __owner,
       __gid_t __group, int __flag)
     
# 496 "/usr/include/unistd.h"
    1 1 
# 496 "/usr/include/unistd.h" 3 4
                                 ;



extern int chdir (const char *__path) 
# 500 "/usr/include/unistd.h"
                                     1 1 
# 500 "/usr/include/unistd.h" 3 4
                                                                  ;



extern int fchdir (int __fd) 
# 504 "/usr/include/unistd.h"
                            1 
# 504 "/usr/include/unistd.h" 3 4
                                         ;
# 514 "/usr/include/unistd.h" 3 4
extern char *getcwd (char *__buf, size_t __size) 
# 514 "/usr/include/unistd.h"
                                                1 
# 514 "/usr/include/unistd.h" 3 4
                                                             ;





extern char *get_current_dir_name (void) 
# 520 "/usr/include/unistd.h"
                                        1
# 520 "/usr/include/unistd.h" 3 4
                                               ;







extern char *getwd (char *__buf)
     
# 529 "/usr/include/unistd.h"
    1 1 1 
# 529 "/usr/include/unistd.h" 3 4
                                                          ;




extern int dup (int __fd) 
# 534 "/usr/include/unistd.h"
                         1 
# 534 "/usr/include/unistd.h" 3 4
                                      ;


extern int dup2 (int __fd, int __fd2) 
# 537 "/usr/include/unistd.h"
                                     1
# 537 "/usr/include/unistd.h" 3 4
                                            ;




extern int dup3 (int __fd, int __fd2, int __flags) 
# 542 "/usr/include/unistd.h"
                                                  1
# 542 "/usr/include/unistd.h" 3 4
                                                         ;



extern char **__environ;

extern char **environ;





extern int execve (const char *__path, char *const __argv[],
     char *const __envp[]) 
# 555 "/usr/include/unistd.h"
                          1 1
# 555 "/usr/include/unistd.h" 3 4
                                                    ;




extern int fexecve (int __fd, char *const __argv[], char *const __envp[])
     
# 561 "/usr/include/unistd.h"
    1 1
# 561 "/usr/include/unistd.h" 3 4
                           ;




extern int execv (const char *__path, char *const __argv[])
     
# 567 "/usr/include/unistd.h"
    1 1
# 567 "/usr/include/unistd.h" 3 4
                              ;



extern int execle (const char *__path, const char *__arg, ...)
     
# 572 "/usr/include/unistd.h"
    1 1
# 572 "/usr/include/unistd.h" 3 4
                              ;



extern int execl (const char *__path, const char *__arg, ...)
     
# 577 "/usr/include/unistd.h"
    1 1
# 577 "/usr/include/unistd.h" 3 4
                              ;



extern int execvp (const char *__file, char *const __argv[])
     
# 582 "/usr/include/unistd.h"
    1 1
# 582 "/usr/include/unistd.h" 3 4
                              ;




extern int execlp (const char *__file, const char *__arg, ...)
     
# 588 "/usr/include/unistd.h"
    1 1
# 588 "/usr/include/unistd.h" 3 4
                              ;




extern int execvpe (const char *__file, char *const __argv[],
      char *const __envp[])
     
# 595 "/usr/include/unistd.h"
    1 1
# 595 "/usr/include/unistd.h" 3 4
                              ;





extern int nice (int __inc) 
# 601 "/usr/include/unistd.h"
                           1 
# 601 "/usr/include/unistd.h" 3 4
                                        ;




extern void _exit (int __status) 
# 606 "/usr/include/unistd.h"
                                1
# 606 "/usr/include/unistd.h" 3 4
                                                              ;





# 1 "/usr/include/x86_64-linux-gnu/bits/confname.h" 1 3 4
# 24 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3 4
enum
  {
    _PC_LINK_MAX,

    _PC_MAX_CANON,

    _PC_MAX_INPUT,

    _PC_NAME_MAX,

    _PC_PATH_MAX,

    _PC_PIPE_BUF,

    _PC_CHOWN_RESTRICTED,

    _PC_NO_TRUNC,

    _PC_VDISABLE,

    _PC_SYNC_IO,

    _PC_ASYNC_IO,

    _PC_PRIO_IO,

    _PC_SOCK_MAXBUF,

    _PC_FILESIZEBITS,

    _PC_REC_INCR_XFER_SIZE,

    _PC_REC_MAX_XFER_SIZE,

    _PC_REC_MIN_XFER_SIZE,

    _PC_REC_XFER_ALIGN,

    _PC_ALLOC_SIZE_MIN,

    _PC_SYMLINK_MAX,

    _PC_2_SYMLINKS

  };


enum
  {
    _SC_ARG_MAX,

    _SC_CHILD_MAX,

    _SC_CLK_TCK,

    _SC_NGROUPS_MAX,

    _SC_OPEN_MAX,

    _SC_STREAM_MAX,

    _SC_TZNAME_MAX,

    _SC_JOB_CONTROL,

    _SC_SAVED_IDS,

    _SC_REALTIME_SIGNALS,

    _SC_PRIORITY_SCHEDULING,

    _SC_TIMERS,

    _SC_ASYNCHRONOUS_IO,

    _SC_PRIORITIZED_IO,

    _SC_SYNCHRONIZED_IO,

    _SC_FSYNC,

    _SC_MAPPED_FILES,

    _SC_MEMLOCK,

    _SC_MEMLOCK_RANGE,

    _SC_MEMORY_PROTECTION,

    _SC_MESSAGE_PASSING,

    _SC_SEMAPHORES,

    _SC_SHARED_MEMORY_OBJECTS,

    _SC_AIO_LISTIO_MAX,

    _SC_AIO_MAX,

    _SC_AIO_PRIO_DELTA_MAX,

    _SC_DELAYTIMER_MAX,

    _SC_MQ_OPEN_MAX,

    _SC_MQ_PRIO_MAX,

    _SC_VERSION,

    _SC_PAGESIZE,


    _SC_RTSIG_MAX,

    _SC_SEM_NSEMS_MAX,

    _SC_SEM_VALUE_MAX,

    _SC_SIGQUEUE_MAX,

    _SC_TIMER_MAX,




    _SC_BC_BASE_MAX,

    _SC_BC_DIM_MAX,

    _SC_BC_SCALE_MAX,

    _SC_BC_STRING_MAX,

    _SC_COLL_WEIGHTS_MAX,

    _SC_EQUIV_CLASS_MAX,

    _SC_EXPR_NEST_MAX,

    _SC_LINE_MAX,

    _SC_RE_DUP_MAX,

    _SC_CHARCLASS_NAME_MAX,


    _SC_2_VERSION,

    _SC_2_C_BIND,

    _SC_2_C_DEV,

    _SC_2_FORT_DEV,

    _SC_2_FORT_RUN,

    _SC_2_SW_DEV,

    _SC_2_LOCALEDEF,


    _SC_PII,

    _SC_PII_XTI,

    _SC_PII_SOCKET,

    _SC_PII_INTERNET,

    _SC_PII_OSI,

    _SC_POLL,

    _SC_SELECT,

    _SC_UIO_MAXIOV,

    _SC_IOV_MAX = _SC_UIO_MAXIOV,

    _SC_PII_INTERNET_STREAM,

    _SC_PII_INTERNET_DGRAM,

    _SC_PII_OSI_COTS,

    _SC_PII_OSI_CLTS,

    _SC_PII_OSI_M,

    _SC_T_IOV_MAX,



    _SC_THREADS,

    _SC_THREAD_SAFE_FUNCTIONS,

    _SC_GETGR_R_SIZE_MAX,

    _SC_GETPW_R_SIZE_MAX,

    _SC_LOGIN_NAME_MAX,

    _SC_TTY_NAME_MAX,

    _SC_THREAD_DESTRUCTOR_ITERATIONS,

    _SC_THREAD_KEYS_MAX,

    _SC_THREAD_STACK_MIN,

    _SC_THREAD_THREADS_MAX,

    _SC_THREAD_ATTR_STACKADDR,

    _SC_THREAD_ATTR_STACKSIZE,

    _SC_THREAD_PRIORITY_SCHEDULING,

    _SC_THREAD_PRIO_INHERIT,

    _SC_THREAD_PRIO_PROTECT,

    _SC_THREAD_PROCESS_SHARED,


    _SC_NPROCESSORS_CONF,

    _SC_NPROCESSORS_ONLN,

    _SC_PHYS_PAGES,

    _SC_AVPHYS_PAGES,

    _SC_ATEXIT_MAX,

    _SC_PASS_MAX,


    _SC_XOPEN_VERSION,

    _SC_XOPEN_XCU_VERSION,

    _SC_XOPEN_UNIX,

    _SC_XOPEN_CRYPT,

    _SC_XOPEN_ENH_I18N,

    _SC_XOPEN_SHM,


    _SC_2_CHAR_TERM,

    _SC_2_C_VERSION,

    _SC_2_UPE,


    _SC_XOPEN_XPG2,

    _SC_XOPEN_XPG3,

    _SC_XOPEN_XPG4,


    _SC_CHAR_BIT,

    _SC_CHAR_MAX,

    _SC_CHAR_MIN,

    _SC_INT_MAX,

    _SC_INT_MIN,

    _SC_LONG_BIT,

    _SC_WORD_BIT,

    _SC_MB_LEN_MAX,

    _SC_NZERO,

    _SC_SSIZE_MAX,

    _SC_SCHAR_MAX,

    _SC_SCHAR_MIN,

    _SC_SHRT_MAX,

    _SC_SHRT_MIN,

    _SC_UCHAR_MAX,

    _SC_UINT_MAX,

    _SC_ULONG_MAX,

    _SC_USHRT_MAX,


    _SC_NL_ARGMAX,

    _SC_NL_LANGMAX,

    _SC_NL_MSGMAX,

    _SC_NL_NMAX,

    _SC_NL_SETMAX,

    _SC_NL_TEXTMAX,


    _SC_XBS5_ILP32_OFF32,

    _SC_XBS5_ILP32_OFFBIG,

    _SC_XBS5_LP64_OFF64,

    _SC_XBS5_LPBIG_OFFBIG,


    _SC_XOPEN_LEGACY,

    _SC_XOPEN_REALTIME,

    _SC_XOPEN_REALTIME_THREADS,


    _SC_ADVISORY_INFO,

    _SC_BARRIERS,

    _SC_BASE,

    _SC_C_LANG_SUPPORT,

    _SC_C_LANG_SUPPORT_R,

    _SC_CLOCK_SELECTION,

    _SC_CPUTIME,

    _SC_THREAD_CPUTIME,

    _SC_DEVICE_IO,

    _SC_DEVICE_SPECIFIC,

    _SC_DEVICE_SPECIFIC_R,

    _SC_FD_MGMT,

    _SC_FIFO,

    _SC_PIPE,

    _SC_FILE_ATTRIBUTES,

    _SC_FILE_LOCKING,

    _SC_FILE_SYSTEM,

    _SC_MONOTONIC_CLOCK,

    _SC_MULTI_PROCESS,

    _SC_SINGLE_PROCESS,

    _SC_NETWORKING,

    _SC_READER_WRITER_LOCKS,

    _SC_SPIN_LOCKS,

    _SC_REGEXP,

    _SC_REGEX_VERSION,

    _SC_SHELL,

    _SC_SIGNALS,

    _SC_SPAWN,

    _SC_SPORADIC_SERVER,

    _SC_THREAD_SPORADIC_SERVER,

    _SC_SYSTEM_DATABASE,

    _SC_SYSTEM_DATABASE_R,

    _SC_TIMEOUTS,

    _SC_TYPED_MEMORY_OBJECTS,

    _SC_USER_GROUPS,

    _SC_USER_GROUPS_R,

    _SC_2_PBS,

    _SC_2_PBS_ACCOUNTING,

    _SC_2_PBS_LOCATE,

    _SC_2_PBS_MESSAGE,

    _SC_2_PBS_TRACK,

    _SC_SYMLOOP_MAX,

    _SC_STREAMS,

    _SC_2_PBS_CHECKPOINT,


    _SC_V6_ILP32_OFF32,

    _SC_V6_ILP32_OFFBIG,

    _SC_V6_LP64_OFF64,

    _SC_V6_LPBIG_OFFBIG,


    _SC_HOST_NAME_MAX,

    _SC_TRACE,

    _SC_TRACE_EVENT_FILTER,

    _SC_TRACE_INHERIT,

    _SC_TRACE_LOG,


    _SC_LEVEL1_ICACHE_SIZE,

    _SC_LEVEL1_ICACHE_ASSOC,

    _SC_LEVEL1_ICACHE_LINESIZE,

    _SC_LEVEL1_DCACHE_SIZE,

    _SC_LEVEL1_DCACHE_ASSOC,

    _SC_LEVEL1_DCACHE_LINESIZE,

    _SC_LEVEL2_CACHE_SIZE,

    _SC_LEVEL2_CACHE_ASSOC,

    _SC_LEVEL2_CACHE_LINESIZE,

    _SC_LEVEL3_CACHE_SIZE,

    _SC_LEVEL3_CACHE_ASSOC,

    _SC_LEVEL3_CACHE_LINESIZE,

    _SC_LEVEL4_CACHE_SIZE,

    _SC_LEVEL4_CACHE_ASSOC,

    _SC_LEVEL4_CACHE_LINESIZE,



    _SC_IPV6 = _SC_LEVEL1_ICACHE_SIZE + 50,

    _SC_RAW_SOCKETS,


    _SC_V7_ILP32_OFF32,

    _SC_V7_ILP32_OFFBIG,

    _SC_V7_LP64_OFF64,

    _SC_V7_LPBIG_OFFBIG,


    _SC_SS_REPL_MAX,


    _SC_TRACE_EVENT_NAME_MAX,

    _SC_TRACE_NAME_MAX,

    _SC_TRACE_SYS_MAX,

    _SC_TRACE_USER_EVENT_MAX,


    _SC_XOPEN_STREAMS,


    _SC_THREAD_ROBUST_PRIO_INHERIT,

    _SC_THREAD_ROBUST_PRIO_PROTECT

  };


enum
  {
    _CS_PATH,


    _CS_V6_WIDTH_RESTRICTED_ENVS,



    _CS_GNU_LIBC_VERSION,

    _CS_GNU_LIBPTHREAD_VERSION,


    _CS_V5_WIDTH_RESTRICTED_ENVS,



    _CS_V7_WIDTH_RESTRICTED_ENVS,



    _CS_LFS_CFLAGS = 1000,

    _CS_LFS_LDFLAGS,

    _CS_LFS_LIBS,

    _CS_LFS_LINTFLAGS,

    _CS_LFS64_CFLAGS,

    _CS_LFS64_LDFLAGS,

    _CS_LFS64_LIBS,

    _CS_LFS64_LINTFLAGS,


    _CS_XBS5_ILP32_OFF32_CFLAGS = 1100,

    _CS_XBS5_ILP32_OFF32_LDFLAGS,

    _CS_XBS5_ILP32_OFF32_LIBS,

    _CS_XBS5_ILP32_OFF32_LINTFLAGS,

    _CS_XBS5_ILP32_OFFBIG_CFLAGS,

    _CS_XBS5_ILP32_OFFBIG_LDFLAGS,

    _CS_XBS5_ILP32_OFFBIG_LIBS,

    _CS_XBS5_ILP32_OFFBIG_LINTFLAGS,

    _CS_XBS5_LP64_OFF64_CFLAGS,

    _CS_XBS5_LP64_OFF64_LDFLAGS,

    _CS_XBS5_LP64_OFF64_LIBS,

    _CS_XBS5_LP64_OFF64_LINTFLAGS,

    _CS_XBS5_LPBIG_OFFBIG_CFLAGS,

    _CS_XBS5_LPBIG_OFFBIG_LDFLAGS,

    _CS_XBS5_LPBIG_OFFBIG_LIBS,

    _CS_XBS5_LPBIG_OFFBIG_LINTFLAGS,


    _CS_POSIX_V6_ILP32_OFF32_CFLAGS,

    _CS_POSIX_V6_ILP32_OFF32_LDFLAGS,

    _CS_POSIX_V6_ILP32_OFF32_LIBS,

    _CS_POSIX_V6_ILP32_OFF32_LINTFLAGS,

    _CS_POSIX_V6_ILP32_OFFBIG_CFLAGS,

    _CS_POSIX_V6_ILP32_OFFBIG_LDFLAGS,

    _CS_POSIX_V6_ILP32_OFFBIG_LIBS,

    _CS_POSIX_V6_ILP32_OFFBIG_LINTFLAGS,

    _CS_POSIX_V6_LP64_OFF64_CFLAGS,

    _CS_POSIX_V6_LP64_OFF64_LDFLAGS,

    _CS_POSIX_V6_LP64_OFF64_LIBS,

    _CS_POSIX_V6_LP64_OFF64_LINTFLAGS,

    _CS_POSIX_V6_LPBIG_OFFBIG_CFLAGS,

    _CS_POSIX_V6_LPBIG_OFFBIG_LDFLAGS,

    _CS_POSIX_V6_LPBIG_OFFBIG_LIBS,

    _CS_POSIX_V6_LPBIG_OFFBIG_LINTFLAGS,


    _CS_POSIX_V7_ILP32_OFF32_CFLAGS,

    _CS_POSIX_V7_ILP32_OFF32_LDFLAGS,

    _CS_POSIX_V7_ILP32_OFF32_LIBS,

    _CS_POSIX_V7_ILP32_OFF32_LINTFLAGS,

    _CS_POSIX_V7_ILP32_OFFBIG_CFLAGS,

    _CS_POSIX_V7_ILP32_OFFBIG_LDFLAGS,

    _CS_POSIX_V7_ILP32_OFFBIG_LIBS,

    _CS_POSIX_V7_ILP32_OFFBIG_LINTFLAGS,

    _CS_POSIX_V7_LP64_OFF64_CFLAGS,

    _CS_POSIX_V7_LP64_OFF64_LDFLAGS,

    _CS_POSIX_V7_LP64_OFF64_LIBS,

    _CS_POSIX_V7_LP64_OFF64_LINTFLAGS,

    _CS_POSIX_V7_LPBIG_OFFBIG_CFLAGS,

    _CS_POSIX_V7_LPBIG_OFFBIG_LDFLAGS,

    _CS_POSIX_V7_LPBIG_OFFBIG_LIBS,

    _CS_POSIX_V7_LPBIG_OFFBIG_LINTFLAGS,


    _CS_V6_ENV,

    _CS_V7_ENV

  };
# 613 "/usr/include/unistd.h" 2 3 4


extern long int pathconf (const char *__path, int __name)
     
# 616 "/usr/include/unistd.h"
    1 1
# 616 "/usr/include/unistd.h" 3 4
                           ;


extern long int fpathconf (int __fd, int __name) 
# 619 "/usr/include/unistd.h"
                                                1
# 619 "/usr/include/unistd.h" 3 4
                                                       ;


extern long int sysconf (int __name) 
# 622 "/usr/include/unistd.h"
                                    1
# 622 "/usr/include/unistd.h" 3 4
                                           ;



extern size_t confstr (int __name, char *__buf, size_t __len) 
# 626 "/usr/include/unistd.h"
                                                             1
# 626 "/usr/include/unistd.h" 3 4
                                                                    ;




extern __pid_t getpid (void) 
# 631 "/usr/include/unistd.h"
                            1
# 631 "/usr/include/unistd.h" 3 4
                                   ;


extern __pid_t getppid (void) 
# 634 "/usr/include/unistd.h"
                             1
# 634 "/usr/include/unistd.h" 3 4
                                    ;


extern __pid_t getpgrp (void) 
# 637 "/usr/include/unistd.h"
                             1
# 637 "/usr/include/unistd.h" 3 4
                                    ;


extern __pid_t __getpgid (__pid_t __pid) 
# 640 "/usr/include/unistd.h"
                                        1
# 640 "/usr/include/unistd.h" 3 4
                                               ;

extern __pid_t getpgid (__pid_t __pid) 
# 642 "/usr/include/unistd.h"
                                      1
# 642 "/usr/include/unistd.h" 3 4
                                             ;






extern int setpgid (__pid_t __pid, __pid_t __pgid) 
# 649 "/usr/include/unistd.h"
                                                  1
# 649 "/usr/include/unistd.h" 3 4
                                                         ;
# 663 "/usr/include/unistd.h" 3 4
extern int setpgrp (void) 
# 663 "/usr/include/unistd.h"
                         1
# 663 "/usr/include/unistd.h" 3 4
                                ;






extern __pid_t setsid (void) 
# 670 "/usr/include/unistd.h"
                            1
# 670 "/usr/include/unistd.h" 3 4
                                   ;



extern __pid_t getsid (__pid_t __pid) 
# 674 "/usr/include/unistd.h"
                                     1
# 674 "/usr/include/unistd.h" 3 4
                                            ;



extern __uid_t getuid (void) 
# 678 "/usr/include/unistd.h"
                            1
# 678 "/usr/include/unistd.h" 3 4
                                   ;


extern __uid_t geteuid (void) 
# 681 "/usr/include/unistd.h"
                             1
# 681 "/usr/include/unistd.h" 3 4
                                    ;


extern __gid_t getgid (void) 
# 684 "/usr/include/unistd.h"
                            1
# 684 "/usr/include/unistd.h" 3 4
                                   ;


extern __gid_t getegid (void) 
# 687 "/usr/include/unistd.h"
                             1
# 687 "/usr/include/unistd.h" 3 4
                                    ;




extern int getgroups (int __size, __gid_t __list[]) 
# 692 "/usr/include/unistd.h"
                                                   1 
# 692 "/usr/include/unistd.h" 3 4
                                                                ;



extern int group_member (__gid_t __gid) 
# 696 "/usr/include/unistd.h"
                                       1
# 696 "/usr/include/unistd.h" 3 4
                                              ;






extern int setuid (__uid_t __uid) 
# 703 "/usr/include/unistd.h"
                                 1 
# 703 "/usr/include/unistd.h" 3 4
                                              ;




extern int setreuid (__uid_t __ruid, __uid_t __euid) 
# 708 "/usr/include/unistd.h"
                                                    1 
# 708 "/usr/include/unistd.h" 3 4
                                                                 ;




extern int seteuid (__uid_t __uid) 
# 713 "/usr/include/unistd.h"
                                  1 
# 713 "/usr/include/unistd.h" 3 4
                                               ;






extern int setgid (__gid_t __gid) 
# 720 "/usr/include/unistd.h"
                                 1 
# 720 "/usr/include/unistd.h" 3 4
                                              ;




extern int setregid (__gid_t __rgid, __gid_t __egid) 
# 725 "/usr/include/unistd.h"
                                                    1 
# 725 "/usr/include/unistd.h" 3 4
                                                                 ;




extern int setegid (__gid_t __gid) 
# 730 "/usr/include/unistd.h"
                                  1 
# 730 "/usr/include/unistd.h" 3 4
                                               ;





extern int getresuid (__uid_t *__ruid, __uid_t *__euid, __uid_t *__suid)
     
# 737 "/usr/include/unistd.h"
    1
# 737 "/usr/include/unistd.h" 3 4
           ;



extern int getresgid (__gid_t *__rgid, __gid_t *__egid, __gid_t *__sgid)
     
# 742 "/usr/include/unistd.h"
    1
# 742 "/usr/include/unistd.h" 3 4
           ;



extern int setresuid (__uid_t __ruid, __uid_t __euid, __uid_t __suid)
     
# 747 "/usr/include/unistd.h"
    1 
# 747 "/usr/include/unistd.h" 3 4
                 ;



extern int setresgid (__gid_t __rgid, __gid_t __egid, __gid_t __sgid)
     
# 752 "/usr/include/unistd.h"
    1 
# 752 "/usr/include/unistd.h" 3 4
                 ;






extern __pid_t fork (void) 
# 759 "/usr/include/unistd.h"
                          1
# 759 "/usr/include/unistd.h" 3 4
                                   ;







extern __pid_t vfork (void) 
# 767 "/usr/include/unistd.h"
                           1
# 767 "/usr/include/unistd.h" 3 4
                                  ;





extern char *ttyname (int __fd) 
# 773 "/usr/include/unistd.h"
                               1
# 773 "/usr/include/unistd.h" 3 4
                                      ;



extern int ttyname_r (int __fd, char *__buf, size_t __buflen)
     
# 778 "/usr/include/unistd.h"
    1 1 
# 778 "/usr/include/unistd.h" 3 4
                                 ;



extern int isatty (int __fd) 
# 782 "/usr/include/unistd.h"
                            1
# 782 "/usr/include/unistd.h" 3 4
                                   ;





extern int ttyslot (void) 
# 788 "/usr/include/unistd.h"
                         1
# 788 "/usr/include/unistd.h" 3 4
                                ;




extern int link (const char *__from, const char *__to)
     
# 794 "/usr/include/unistd.h"
    1 1 
# 794 "/usr/include/unistd.h" 3 4
                                    ;




extern int linkat (int __fromfd, const char *__from, int __tofd,
     const char *__to, int __flags)
     
# 801 "/usr/include/unistd.h"
    1 1 
# 801 "/usr/include/unistd.h" 3 4
                                    ;




extern int symlink (const char *__from, const char *__to)
     
# 807 "/usr/include/unistd.h"
    1 1 
# 807 "/usr/include/unistd.h" 3 4
                                    ;




extern ssize_t readlink (const char *__restrict __path,
    char *__restrict __buf, size_t __len)
     
# 814 "/usr/include/unistd.h"
    1 1 
# 814 "/usr/include/unistd.h" 3 4
                                    ;




extern int symlinkat (const char *__from, int __tofd,
        const char *__to) 
# 820 "/usr/include/unistd.h"
                         1 1 
# 820 "/usr/include/unistd.h" 3 4
                                                         ;


extern ssize_t readlinkat (int __fd, const char *__restrict __path,
      char *__restrict __buf, size_t __len)
     
# 825 "/usr/include/unistd.h"
    1 1 
# 825 "/usr/include/unistd.h" 3 4
                                    ;



extern int unlink (const char *__name) 
# 829 "/usr/include/unistd.h"
                                      1 1
# 829 "/usr/include/unistd.h" 3 4
                                                             ;



extern int unlinkat (int __fd, const char *__name, int __flag)
     
# 834 "/usr/include/unistd.h"
    1 1
# 834 "/usr/include/unistd.h" 3 4
                           ;



extern int rmdir (const char *__path) 
# 838 "/usr/include/unistd.h"
                                     1 1
# 838 "/usr/include/unistd.h" 3 4
                                                            ;



extern __pid_t tcgetpgrp (int __fd) 
# 842 "/usr/include/unistd.h"
                                   1
# 842 "/usr/include/unistd.h" 3 4
                                          ;


extern int tcsetpgrp (int __fd, __pid_t __pgrp_id) 
# 845 "/usr/include/unistd.h"
                                                  1
# 845 "/usr/include/unistd.h" 3 4
                                                         ;






extern char *getlogin (void);







extern int getlogin_r (char *__name, size_t __name_len) 
# 860 "/usr/include/unistd.h"
                                                       1
# 860 "/usr/include/unistd.h" 3 4
                                                                      ;




extern int setlogin (const char *__name) 
# 865 "/usr/include/unistd.h"
                                        1 1
# 865 "/usr/include/unistd.h" 3 4
                                                               ;
# 874 "/usr/include/unistd.h" 3 4
# 1 "/usr/include/getopt.h" 1 3 4
# 57 "/usr/include/getopt.h" 3 4
extern char *optarg;
# 71 "/usr/include/getopt.h" 3 4
extern int optind;




extern int opterr;



extern int optopt;
# 150 "/usr/include/getopt.h" 3 4
extern int getopt (int ___argc, char *const *___argv, const char *__shortopts)
       
# 151 "/usr/include/getopt.h"
      1
# 151 "/usr/include/getopt.h" 3 4
             ;
# 875 "/usr/include/unistd.h" 2 3 4







extern int gethostname (char *__name, size_t __len) 
# 882 "/usr/include/unistd.h"
                                                   1 1
# 882 "/usr/include/unistd.h" 3 4
                                                                          ;






extern int sethostname (const char *__name, size_t __len)
     
# 890 "/usr/include/unistd.h"
    1 1 
# 890 "/usr/include/unistd.h" 3 4
                                 ;



extern int sethostid (long int __id) 
# 894 "/usr/include/unistd.h"
                                    1 
# 894 "/usr/include/unistd.h" 3 4
                                                 ;





extern int getdomainname (char *__name, size_t __len)
     
# 901 "/usr/include/unistd.h"
    1 1 
# 901 "/usr/include/unistd.h" 3 4
                                 ;
extern int setdomainname (const char *__name, size_t __len)
     
# 903 "/usr/include/unistd.h"
    1 1 
# 903 "/usr/include/unistd.h" 3 4
                                 ;





extern int vhangup (void) 
# 909 "/usr/include/unistd.h"
                         1
# 909 "/usr/include/unistd.h" 3 4
                                ;


extern int revoke (const char *__file) 
# 912 "/usr/include/unistd.h"
                                      1 1 
# 912 "/usr/include/unistd.h" 3 4
                                                                   ;







extern int profil (unsigned short int *__sample_buffer, size_t __size,
     size_t __offset, unsigned int __scale)
     
# 922 "/usr/include/unistd.h"
    1 1
# 922 "/usr/include/unistd.h" 3 4
                           ;





extern int acct (const char *__name) 
# 928 "/usr/include/unistd.h"
                                    1
# 928 "/usr/include/unistd.h" 3 4
                                           ;



extern char *getusershell (void) 
# 932 "/usr/include/unistd.h"
                                1
# 932 "/usr/include/unistd.h" 3 4
                                       ;
extern void endusershell (void) 
# 933 "/usr/include/unistd.h"
                               1
# 933 "/usr/include/unistd.h" 3 4
                                      ;
extern void setusershell (void) 
# 934 "/usr/include/unistd.h"
                               1
# 934 "/usr/include/unistd.h" 3 4
                                      ;





extern int daemon (int __nochdir, int __noclose) 
# 940 "/usr/include/unistd.h"
                                                1 
# 940 "/usr/include/unistd.h" 3 4
                                                             ;






extern int chroot (const char *__path) 
# 947 "/usr/include/unistd.h"
                                      1 1 
# 947 "/usr/include/unistd.h" 3 4
                                                                   ;



extern char *getpass (const char *__prompt) 
# 951 "/usr/include/unistd.h"
                                           1
# 951 "/usr/include/unistd.h" 3 4
                                                          ;







extern int fsync (int __fd);





extern int syncfs (int __fd) 
# 965 "/usr/include/unistd.h"
                            1
# 965 "/usr/include/unistd.h" 3 4
                                   ;






extern long int gethostid (void);


extern void sync (void) 
# 975 "/usr/include/unistd.h"
                       1
# 975 "/usr/include/unistd.h" 3 4
                              ;





extern int getpagesize (void) 
# 981 "/usr/include/unistd.h"
                              1 1
# 981 "/usr/include/unistd.h" 3 4
                                                                 ;




extern int getdtablesize (void) 
# 986 "/usr/include/unistd.h"
                               1
# 986 "/usr/include/unistd.h" 3 4
                                      ;
# 1000 "/usr/include/unistd.h" 3 4
extern int truncate (const char *__file, __off64_t __length) __asm__ 
# 1000 "/usr/include/unistd.h"
          1

                  1 
# 1002 "/usr/include/unistd.h" 3 4
                                      ;





extern int truncate64 (const char *__file, __off64_t __length)
     
# 1009 "/usr/include/unistd.h"
    1 1 
# 1009 "/usr/include/unistd.h" 3 4
                                 ;
# 1022 "/usr/include/unistd.h" 3 4
extern int ftruncate (int __fd, __off64_t __length) __asm__ 
# 1022 "/usr/include/unistd.h"
          1
                        
# 1023 "/usr/include/unistd.h" 3 4
                       ;





extern int ftruncate64 (int __fd, __off64_t __length) 
# 1029 "/usr/include/unistd.h"
                                                     1 
# 1029 "/usr/include/unistd.h" 3 4
                                                                  ;
# 1040 "/usr/include/unistd.h" 3 4
extern int brk (void *__addr) 
# 1040 "/usr/include/unistd.h"
                             1 
# 1040 "/usr/include/unistd.h" 3 4
                                          ;





extern void *sbrk (intptr_t __delta) 
# 1046 "/usr/include/unistd.h"
                                    1
# 1046 "/usr/include/unistd.h" 3 4
                                           ;
# 1061 "/usr/include/unistd.h" 3 4
extern long int syscall (long int __sysno, ...) 
# 1061 "/usr/include/unistd.h"
                                               1
# 1061 "/usr/include/unistd.h" 3 4
                                                      ;
# 1087 "/usr/include/unistd.h" 3 4
extern int lockf (int __fd, int __cmd, __off64_t __len) __asm__
                       ;





extern int lockf64 (int __fd, int __cmd, __off64_t __len) ;
# 1115 "/usr/include/unistd.h" 3 4
extern int fdatasync (int __fildes);







extern char *crypt (const char *__key, const char *__salt)
     
# 1124 "/usr/include/unistd.h"
    1 1
# 1124 "/usr/include/unistd.h" 3 4
                              ;



extern void encrypt (char *__glibc_block, int __edflag)
     
# 1129 "/usr/include/unistd.h"
    1 1
# 1129 "/usr/include/unistd.h" 3 4
                           ;






extern void swab (const void *__restrict __from, void *__restrict __to,
    ssize_t __n) 
# 1137 "/usr/include/unistd.h"
                1 1
# 1137 "/usr/include/unistd.h" 3 4
                                          ;
# 1154 "/usr/include/unistd.h" 3 4

# 159 "/home/libraskywalker/Projects/ModelRenamer/git-master/block-sha1/../git-compat-util.h" 2
# 1 "/usr/include/stdio.h" 1 3 4
# 29 "/usr/include/stdio.h" 3 4




# 1 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" 1 3 4
# 34 "/usr/include/stdio.h" 2 3 4
# 44 "/usr/include/stdio.h" 3 4
struct _IO_FILE;



typedef struct _IO_FILE FILE;





# 64 "/usr/include/stdio.h" 3 4
typedef struct _IO_FILE __FILE;
# 74 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/libio.h" 1 3 4
# 31 "/usr/include/libio.h" 3 4
# 1 "/usr/include/_G_config.h" 1 3 4
# 15 "/usr/include/_G_config.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" 1 3 4
# 16 "/usr/include/_G_config.h" 2 3 4




# 1 "/usr/include/wchar.h" 1 3 4
# 82 "/usr/include/wchar.h" 3 4
typedef struct
{
  int __count;
  union
  {

    unsigned int __wch;



    char __wchb[4];
  } __value;
} __mbstate_t;
# 21 "/usr/include/_G_config.h" 2 3 4
typedef struct
{
  __off_t __pos;
  __mbstate_t __state;
} _G_fpos_t;
typedef struct
{
  __off64_t __pos;
  __mbstate_t __state;
} _G_fpos64_t;
# 32 "/usr/include/libio.h" 2 3 4
# 49 "/usr/include/libio.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stdarg.h" 1 3 4
# 40 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stdarg.h" 3 4
typedef __builtin_va_list __gnuc_va_list;
# 50 "/usr/include/libio.h" 2 3 4
# 144 "/usr/include/libio.h" 3 4
struct _IO_jump_t; struct _IO_FILE;





typedef void _IO_lock_t;





struct _IO_marker {
  struct _IO_marker *_next;
  struct _IO_FILE *_sbuf;



  int _pos;
# 173 "/usr/include/libio.h" 3 4
};


enum __codecvt_result
{
  __codecvt_ok,
  __codecvt_partial,
  __codecvt_error,
  __codecvt_noconv
};
# 241 "/usr/include/libio.h" 3 4
struct _IO_FILE {
  int _flags;




  char* _IO_read_ptr;
  char* _IO_read_end;
  char* _IO_read_base;
  char* _IO_write_base;
  char* _IO_write_ptr;
  char* _IO_write_end;
  char* _IO_buf_base;
  char* _IO_buf_end;

  char *_IO_save_base;
  char *_IO_backup_base;
  char *_IO_save_end;

  struct _IO_marker *_markers;

  struct _IO_FILE *_chain;

  int _fileno;



  int _flags2;

  __off_t _old_offset;



  unsigned short _cur_column;
  signed char _vtable_offset;
  char _shortbuf[1];



  _IO_lock_t *_lock;
# 289 "/usr/include/libio.h" 3 4
  __off64_t _offset;







  void *__pad1;
  void *__pad2;
  void *__pad3;
  void *__pad4;

  size_t __pad5;
  int _mode;

  char _unused2[15 * sizeof (int) - 4 * sizeof (void *) - sizeof (size_t)];

};


typedef struct _IO_FILE _IO_FILE;


struct _IO_FILE_plus;

extern struct _IO_FILE_plus _IO_2_1_stdin_;
extern struct _IO_FILE_plus _IO_2_1_stdout_;
extern struct _IO_FILE_plus _IO_2_1_stderr_;
# 333 "/usr/include/libio.h" 3 4
typedef __ssize_t __io_read_fn (void *__cookie, char *__buf, size_t __nbytes);







typedef __ssize_t __io_write_fn (void *__cookie, const char *__buf,
     size_t __n);







typedef int __io_seek_fn (void *__cookie, __off64_t *__pos, int __w);


typedef int __io_close_fn (void *__cookie);




typedef __io_read_fn cookie_read_function_t;
typedef __io_write_fn cookie_write_function_t;
typedef __io_seek_fn cookie_seek_function_t;
typedef __io_close_fn cookie_close_function_t;


typedef struct
{
  __io_read_fn *read;
  __io_write_fn *write;
  __io_seek_fn *seek;
  __io_close_fn *close;
} _IO_cookie_io_functions_t;
typedef _IO_cookie_io_functions_t cookie_io_functions_t;

struct _IO_cookie_file;


extern void _IO_cookie_init (struct _IO_cookie_file *__cfile, int __read_write,
        void *__cookie, _IO_cookie_io_functions_t __fns);







extern int __underflow (_IO_FILE *);
extern int __uflow (_IO_FILE *);
extern int __overflow (_IO_FILE *, int);
# 429 "/usr/include/libio.h" 3 4
extern int _IO_getc (_IO_FILE *__fp);
extern int _IO_putc (int __c, _IO_FILE *__fp);
extern int _IO_feof (_IO_FILE *__fp) 
# 431 "/usr/include/libio.h"
                                    1
# 431 "/usr/include/libio.h" 3 4
                                           ;
extern int _IO_ferror (_IO_FILE *__fp) 
# 432 "/usr/include/libio.h"
                                      1
# 432 "/usr/include/libio.h" 3 4
                                             ;

extern int _IO_peekc_locked (_IO_FILE *__fp);





extern void _IO_flockfile (_IO_FILE *) 
# 440 "/usr/include/libio.h"
                                      1
# 440 "/usr/include/libio.h" 3 4
                                             ;
extern void _IO_funlockfile (_IO_FILE *) 
# 441 "/usr/include/libio.h"
                                        1
# 441 "/usr/include/libio.h" 3 4
                                               ;
extern int _IO_ftrylockfile (_IO_FILE *) 
# 442 "/usr/include/libio.h"
                                        1
# 442 "/usr/include/libio.h" 3 4
                                               ;
# 459 "/usr/include/libio.h" 3 4
extern int _IO_vfscanf (_IO_FILE * __restrict, const char * __restrict,
   __gnuc_va_list, int *__restrict);
extern int _IO_vfprintf (_IO_FILE *__restrict, const char *__restrict,
    __gnuc_va_list);
extern __ssize_t _IO_padn (_IO_FILE *, int, __ssize_t);
extern size_t _IO_sgetn (_IO_FILE *, void *, size_t);

extern __off64_t _IO_seekoff (_IO_FILE *, __off64_t, int, int);
extern __off64_t _IO_seekpos (_IO_FILE *, __off64_t, int);

extern void _IO_free_backup_area (_IO_FILE *) 
# 469 "/usr/include/libio.h"
                                             1
# 469 "/usr/include/libio.h" 3 4
                                                    ;
# 75 "/usr/include/stdio.h" 2 3 4




typedef __gnuc_va_list va_list;
# 108 "/usr/include/stdio.h" 3 4




typedef _G_fpos64_t fpos_t;



typedef _G_fpos64_t fpos64_t;
# 164 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/stdio_lim.h" 1 3 4
# 165 "/usr/include/stdio.h" 2 3 4



extern struct _IO_FILE *stdin;
extern struct _IO_FILE *stdout;
extern struct _IO_FILE *stderr;







extern int remove (const char *__filename) 
# 178 "/usr/include/stdio.h"
                                          1
# 178 "/usr/include/stdio.h" 3 4
                                                 ;

extern int rename (const char *__old, const char *__new) 
# 180 "/usr/include/stdio.h"
                                                        1
# 180 "/usr/include/stdio.h" 3 4
                                                               ;




extern int renameat (int __oldfd, const char *__old, int __newfd,
       const char *__new) 
# 186 "/usr/include/stdio.h"
                         1
# 186 "/usr/include/stdio.h" 3 4
                                ;



# 198 "/usr/include/stdio.h" 3 4
extern FILE *tmpfile (void) __asm__ ;






extern FILE *tmpfile64 (void) ;



extern char *tmpnam (char *__s) 
# 209 "/usr/include/stdio.h"
                               1 
# 209 "/usr/include/stdio.h" 3 4
                                            ;





extern char *tmpnam_r (char *__s) 
# 215 "/usr/include/stdio.h"
                                 1 
# 215 "/usr/include/stdio.h" 3 4
                                              ;
# 227 "/usr/include/stdio.h" 3 4
extern char *tempnam (const char *__dir, const char *__pfx)
     
# 228 "/usr/include/stdio.h"
    1 1 
# 228 "/usr/include/stdio.h" 3 4
                                      ;








extern int fclose (FILE *__stream);




extern int fflush (FILE *__stream);

# 252 "/usr/include/stdio.h" 3 4
extern int fflush_unlocked (FILE *__stream);
# 262 "/usr/include/stdio.h" 3 4
extern int fcloseall (void);




# 283 "/usr/include/stdio.h" 3 4
extern FILE *fopen (const char *__restrict __filename, const char *__restrict __modes) __asm__

  ;
extern FILE *freopen (const char *__restrict __filename, const char *__restrict __modes, FILE *__restrict __stream) __asm__


  ;







extern FILE *fopen64 (const char *__restrict __filename,
        const char *__restrict __modes) ;
extern FILE *freopen64 (const char *__restrict __filename,
   const char *__restrict __modes,
   FILE *__restrict __stream) ;




extern FILE *fdopen (int __fd, const char *__modes) 
# 306 "/usr/include/stdio.h"
                                                   1 
# 306 "/usr/include/stdio.h" 3 4
                                                                ;





extern FILE *fopencookie (void *__restrict __magic_cookie,
     const char *__restrict __modes,
     _IO_cookie_io_functions_t __io_funcs) 
# 314 "/usr/include/stdio.h"
                                          1 
# 314 "/usr/include/stdio.h" 3 4
                                                       ;




extern FILE *fmemopen (void *__s, size_t __len, const char *__modes)
  
# 320 "/usr/include/stdio.h"
 1 
# 320 "/usr/include/stdio.h" 3 4
              ;




extern FILE *open_memstream (char **__bufloc, size_t *__sizeloc) 
# 325 "/usr/include/stdio.h"
                                                                1 
# 325 "/usr/include/stdio.h" 3 4
                                                                             ;






extern void setbuf (FILE *__restrict __stream, char *__restrict __buf) 
# 332 "/usr/include/stdio.h"
                                                                      1
# 332 "/usr/include/stdio.h" 3 4
                                                                             ;



extern int setvbuf (FILE *__restrict __stream, char *__restrict __buf,
      int __modes, size_t __n) 
# 337 "/usr/include/stdio.h"
                              1
# 337 "/usr/include/stdio.h" 3 4
                                     ;





extern void setbuffer (FILE *__restrict __stream, char *__restrict __buf,
         size_t __size) 
# 344 "/usr/include/stdio.h"
                       1
# 344 "/usr/include/stdio.h" 3 4
                              ;


extern void setlinebuf (FILE *__stream) 
# 347 "/usr/include/stdio.h"
                                       1
# 347 "/usr/include/stdio.h" 3 4
                                              ;








extern int fprintf (FILE *__restrict __stream,
      const char *__restrict __format, ...);




extern int printf (const char *__restrict __format, ...);

extern int sprintf (char *__restrict __s,
      const char *__restrict __format, ...) 
# 365 "/usr/include/stdio.h"
                                           1
# 365 "/usr/include/stdio.h" 3 4
                                                    ;





extern int vfprintf (FILE *__restrict __s, const char *__restrict __format,
       __gnuc_va_list __arg);




extern int vprintf (const char *__restrict __format, __gnuc_va_list __arg);

extern int vsprintf (char *__restrict __s, const char *__restrict __format,
       __gnuc_va_list __arg) 
# 380 "/usr/include/stdio.h"
                        1
# 380 "/usr/include/stdio.h" 3 4
                                 ;





extern int snprintf (char *__restrict __s, size_t __maxlen,
       const char *__restrict __format, ...)
     
# 388 "/usr/include/stdio.h"
    1 1
# 388 "/usr/include/stdio.h" 3 4
                                                             ;

extern int vsnprintf (char *__restrict __s, size_t __maxlen,
        const char *__restrict __format, __gnuc_va_list __arg)
     
# 392 "/usr/include/stdio.h"
    1 1
# 392 "/usr/include/stdio.h" 3 4
                                                             ;






extern int vasprintf (char **__restrict __ptr, const char *__restrict __f,
        __gnuc_va_list __arg)
     
# 401 "/usr/include/stdio.h"
    1 1 
# 401 "/usr/include/stdio.h" 3 4
                                                                   ;
extern int __asprintf (char **__restrict __ptr,
         const char *__restrict __fmt, ...)
     
# 404 "/usr/include/stdio.h"
    1 1 
# 404 "/usr/include/stdio.h" 3 4
                                                                   ;
extern int asprintf (char **__restrict __ptr,
       const char *__restrict __fmt, ...)
     
# 407 "/usr/include/stdio.h"
    1 1 
# 407 "/usr/include/stdio.h" 3 4
                                                                   ;




extern int vdprintf (int __fd, const char *__restrict __fmt,
       __gnuc_va_list __arg)
     
# 414 "/usr/include/stdio.h"
    1
# 414 "/usr/include/stdio.h" 3 4
                                                   ;
extern int dprintf (int __fd, const char *__restrict __fmt, ...)
     
# 416 "/usr/include/stdio.h"
    1
# 416 "/usr/include/stdio.h" 3 4
                                                   ;








extern int fscanf (FILE *__restrict __stream,
     const char *__restrict __format, ...) ;




extern int scanf (const char *__restrict __format, ...) ;

extern int sscanf (const char *__restrict __s,
     const char *__restrict __format, ...) 
# 434 "/usr/include/stdio.h"
                                          1
# 434 "/usr/include/stdio.h" 3 4
                                                 ;
# 463 "/usr/include/stdio.h" 3 4








extern int vfscanf (FILE *__restrict __s, const char *__restrict __format,
      __gnuc_va_list __arg)
     
# 473 "/usr/include/stdio.h"
    1 
# 473 "/usr/include/stdio.h" 3 4
                                                        ;





extern int vscanf (const char *__restrict __format, __gnuc_va_list __arg)
     
# 480 "/usr/include/stdio.h"
    1 
# 480 "/usr/include/stdio.h" 3 4
                                                        ;


extern int vsscanf (const char *__restrict __s,
      const char *__restrict __format, __gnuc_va_list __arg)
     
# 485 "/usr/include/stdio.h"
    1 1
# 485 "/usr/include/stdio.h" 3 4
                                                          ;
# 522 "/usr/include/stdio.h" 3 4









extern int fgetc (FILE *__stream);
extern int getc (FILE *__stream);





extern int getchar (void);

# 550 "/usr/include/stdio.h" 3 4
extern int getc_unlocked (FILE *__stream);
extern int getchar_unlocked (void);
# 561 "/usr/include/stdio.h" 3 4
extern int fgetc_unlocked (FILE *__stream);











extern int fputc (int __c, FILE *__stream);
extern int putc (int __c, FILE *__stream);





extern int putchar (int __c);

# 594 "/usr/include/stdio.h" 3 4
extern int fputc_unlocked (int __c, FILE *__stream);







extern int putc_unlocked (int __c, FILE *__stream);
extern int putchar_unlocked (int __c);






extern int getw (FILE *__stream);


extern int putw (int __w, FILE *__stream);








extern char *fgets (char *__restrict __s, int __n, FILE *__restrict __stream)
     ;
# 640 "/usr/include/stdio.h" 3 4

# 649 "/usr/include/stdio.h" 3 4
extern char *fgets_unlocked (char *__restrict __s, int __n,
        FILE *__restrict __stream) ;
# 665 "/usr/include/stdio.h" 3 4
extern __ssize_t __getdelim (char **__restrict __lineptr,
          size_t *__restrict __n, int __delimiter,
          FILE *__restrict __stream) ;
extern __ssize_t getdelim (char **__restrict __lineptr,
        size_t *__restrict __n, int __delimiter,
        FILE *__restrict __stream) ;







extern __ssize_t getline (char **__restrict __lineptr,
       size_t *__restrict __n,
       FILE *__restrict __stream) ;








extern int fputs (const char *__restrict __s, FILE *__restrict __stream);





extern int puts (const char *__s);






extern int ungetc (int __c, FILE *__stream);






extern size_t fread (void *__restrict __ptr, size_t __size,
       size_t __n, FILE *__restrict __stream) ;




extern size_t fwrite (const void *__restrict __ptr, size_t __size,
        size_t __n, FILE *__restrict __s);

# 726 "/usr/include/stdio.h" 3 4
extern int fputs_unlocked (const char *__restrict __s,
      FILE *__restrict __stream);
# 737 "/usr/include/stdio.h" 3 4
extern size_t fread_unlocked (void *__restrict __ptr, size_t __size,
         size_t __n, FILE *__restrict __stream) ;
extern size_t fwrite_unlocked (const void *__restrict __ptr, size_t __size,
          size_t __n, FILE *__restrict __stream);








extern int fseek (FILE *__stream, long int __off, int __whence);




extern long int ftell (FILE *__stream) ;




extern void rewind (FILE *__stream);

# 781 "/usr/include/stdio.h" 3 4
extern int fseeko (FILE *__stream, __off64_t __off, int __whence) __asm__

                  ;
extern __off64_t ftello (FILE *__stream) __asm__;








# 806 "/usr/include/stdio.h" 3 4
extern int fgetpos (FILE *__restrict __stream, fpos_t *__restrict __pos) __asm__
                                          ;
extern int fsetpos (FILE *__stream, const fpos_t *__pos) __asm__
                                                          ;








extern int fseeko64 (FILE *__stream, __off64_t __off, int __whence);
extern __off64_t ftello64 (FILE *__stream) ;
extern int fgetpos64 (FILE *__restrict __stream, fpos64_t *__restrict __pos);
extern int fsetpos64 (FILE *__stream, const fpos64_t *__pos);




extern void clearerr (FILE *__stream) 
# 826 "/usr/include/stdio.h"
                                     1
# 826 "/usr/include/stdio.h" 3 4
                                            ;

extern int feof (FILE *__stream) 
# 828 "/usr/include/stdio.h"
                                1 
# 828 "/usr/include/stdio.h" 3 4
                                             ;

extern int ferror (FILE *__stream) 
# 830 "/usr/include/stdio.h"
                                  1 
# 830 "/usr/include/stdio.h" 3 4
                                               ;




extern void clearerr_unlocked (FILE *__stream) 
# 835 "/usr/include/stdio.h"
                                              1
# 835 "/usr/include/stdio.h" 3 4
                                                     ;
extern int feof_unlocked (FILE *__stream) 
# 836 "/usr/include/stdio.h"
                                         1 
# 836 "/usr/include/stdio.h" 3 4
                                                      ;
extern int ferror_unlocked (FILE *__stream) 
# 837 "/usr/include/stdio.h"
                                           1 
# 837 "/usr/include/stdio.h" 3 4
                                                        ;








extern void perror (const char *__s);






# 1 "/usr/include/x86_64-linux-gnu/bits/sys_errlist.h" 1 3 4
# 26 "/usr/include/x86_64-linux-gnu/bits/sys_errlist.h" 3 4
extern int sys_nerr;
extern const char *const sys_errlist[];


extern int _sys_nerr;
extern const char *const _sys_errlist[];
# 854 "/usr/include/stdio.h" 2 3 4




extern int fileno (FILE *__stream) 
# 858 "/usr/include/stdio.h"
                                  1 
# 858 "/usr/include/stdio.h" 3 4
                                               ;




extern int fileno_unlocked (FILE *__stream) 
# 863 "/usr/include/stdio.h"
                                           1 
# 863 "/usr/include/stdio.h" 3 4
                                                        ;
# 872 "/usr/include/stdio.h" 3 4
extern FILE *popen (const char *__command, const char *__modes) ;





extern int pclose (FILE *__stream);





extern char *ctermid (char *__s) 
# 884 "/usr/include/stdio.h"
                                1
# 884 "/usr/include/stdio.h" 3 4
                                       ;





extern char *cuserid (char *__s);




struct obstack;


extern int obstack_printf (struct obstack *__restrict __obstack,
      const char *__restrict __format, ...)
     
# 900 "/usr/include/stdio.h"
    1 1
# 900 "/usr/include/stdio.h" 3 4
                                                             ;
extern int obstack_vprintf (struct obstack *__restrict __obstack,
       const char *__restrict __format,
       __gnuc_va_list __args)
     
# 904 "/usr/include/stdio.h"
    1 1
# 904 "/usr/include/stdio.h" 3 4
                                                             ;







extern void flockfile (FILE *__stream) 
# 912 "/usr/include/stdio.h"
                                      1
# 912 "/usr/include/stdio.h" 3 4
                                             ;



extern int ftrylockfile (FILE *__stream) 
# 916 "/usr/include/stdio.h"
                                        1 
# 916 "/usr/include/stdio.h" 3 4
                                                     ;


extern void funlockfile (FILE *__stream) 
# 919 "/usr/include/stdio.h"
                                        1
# 919 "/usr/include/stdio.h" 3 4
                                               ;
# 942 "/usr/include/stdio.h" 3 4

# 160 "/home/libraskywalker/Projects/ModelRenamer/git-master/block-sha1/../git-compat-util.h" 2
# 1 "/usr/include/x86_64-linux-gnu/sys/stat.h" 1 3 4
# 36 "/usr/include/x86_64-linux-gnu/sys/stat.h" 3 4
# 1 "/usr/include/time.h" 1 3 4
# 73 "/usr/include/time.h" 3 4


typedef __time_t time_t;



# 120 "/usr/include/time.h" 3 4
struct timespec
  {
    __time_t tv_sec;
    __syscall_slong_t tv_nsec;
  };
# 37 "/usr/include/x86_64-linux-gnu/sys/stat.h" 2 3 4






typedef __dev_t dev_t;
# 56 "/usr/include/x86_64-linux-gnu/sys/stat.h" 3 4
typedef __ino64_t ino_t;





typedef __mode_t mode_t;




typedef __nlink_t nlink_t;
# 91 "/usr/include/x86_64-linux-gnu/sys/stat.h" 3 4
typedef __blkcnt64_t blkcnt_t;





typedef __blksize_t blksize_t;






# 1 "/usr/include/x86_64-linux-gnu/bits/stat.h" 1 3 4
# 46 "/usr/include/x86_64-linux-gnu/bits/stat.h" 3 4
struct stat
  {
    __dev_t st_dev;




    __ino_t st_ino;







    __nlink_t st_nlink;
    __mode_t st_mode;

    __uid_t st_uid;
    __gid_t st_gid;

    int __pad0;

    __dev_t st_rdev;




    __off_t st_size;



    __blksize_t st_blksize;

    __blkcnt_t st_blocks;
# 91 "/usr/include/x86_64-linux-gnu/bits/stat.h" 3 4
    struct timespec st_atim;
    struct timespec st_mtim;
    struct timespec st_ctim;
# 106 "/usr/include/x86_64-linux-gnu/bits/stat.h" 3 4
    __syscall_slong_t __glibc_reserved[3];
# 115 "/usr/include/x86_64-linux-gnu/bits/stat.h" 3 4
  };



struct stat64
  {
    __dev_t st_dev;

    __ino64_t st_ino;
    __nlink_t st_nlink;
    __mode_t st_mode;






    __uid_t st_uid;
    __gid_t st_gid;

    int __pad0;
    __dev_t st_rdev;
    __off_t st_size;





    __blksize_t st_blksize;
    __blkcnt64_t st_blocks;







    struct timespec st_atim;
    struct timespec st_mtim;
    struct timespec st_ctim;
# 164 "/usr/include/x86_64-linux-gnu/bits/stat.h" 3 4
    __syscall_slong_t __glibc_reserved[3];



  };
# 105 "/usr/include/x86_64-linux-gnu/sys/stat.h" 2 3 4
# 216 "/usr/include/x86_64-linux-gnu/sys/stat.h" 3 4
extern int stat (const char *__restrict __file, struct stat *__restrict __buf) __asm__ 
# 216 "/usr/include/x86_64-linux-gnu/sys/stat.h"
          1

     1
# 218 "/usr/include/x86_64-linux-gnu/sys/stat.h" 3 4
                      ;
extern int fstat (int __fd, struct stat *__buf) __asm__ 
# 219 "/usr/include/x86_64-linux-gnu/sys/stat.h"
          1
     1
# 220 "/usr/include/x86_64-linux-gnu/sys/stat.h" 3 4
                   ;






extern int stat64 (const char *__restrict __file,
     struct stat64 *__restrict __buf) 
# 228 "/usr/include/x86_64-linux-gnu/sys/stat.h"
                                     1 1
# 228 "/usr/include/x86_64-linux-gnu/sys/stat.h" 3 4
                                                               ;
extern int fstat64 (int __fd, struct stat64 *__buf) 
# 229 "/usr/include/x86_64-linux-gnu/sys/stat.h"
                                                   1 1
# 229 "/usr/include/x86_64-linux-gnu/sys/stat.h" 3 4
                                                                          ;
# 242 "/usr/include/x86_64-linux-gnu/sys/stat.h" 3 4
extern int fstatat (int __fd, const char *__restrict __file, struct stat *__restrict __buf, int __flag) __asm__ 
# 242 "/usr/include/x86_64-linux-gnu/sys/stat.h"
          1


                 1
# 245 "/usr/include/x86_64-linux-gnu/sys/stat.h" 3 4
                                  ;






extern int fstatat64 (int __fd, const char *__restrict __file,
        struct stat64 *__restrict __buf, int __flag)
     
# 254 "/usr/include/x86_64-linux-gnu/sys/stat.h"
    1 1
# 254 "/usr/include/x86_64-linux-gnu/sys/stat.h" 3 4
                              ;
# 266 "/usr/include/x86_64-linux-gnu/sys/stat.h" 3 4
extern int lstat (const char *__restrict __file, struct stat *__restrict __buf) __asm__ 
# 266 "/usr/include/x86_64-linux-gnu/sys/stat.h"
          1


     1
# 269 "/usr/include/x86_64-linux-gnu/sys/stat.h" 3 4
                      ;





extern int lstat64 (const char *__restrict __file,
      struct stat64 *__restrict __buf)
     
# 277 "/usr/include/x86_64-linux-gnu/sys/stat.h"
    1 1
# 277 "/usr/include/x86_64-linux-gnu/sys/stat.h" 3 4
                              ;





extern int chmod (const char *__file, __mode_t __mode)
     
# 284 "/usr/include/x86_64-linux-gnu/sys/stat.h"
    1 1
# 284 "/usr/include/x86_64-linux-gnu/sys/stat.h" 3 4
                           ;





extern int lchmod (const char *__file, __mode_t __mode)
     
# 291 "/usr/include/x86_64-linux-gnu/sys/stat.h"
    1 1
# 291 "/usr/include/x86_64-linux-gnu/sys/stat.h" 3 4
                           ;




extern int fchmod (int __fd, __mode_t __mode) 
# 296 "/usr/include/x86_64-linux-gnu/sys/stat.h"
                                             1
# 296 "/usr/include/x86_64-linux-gnu/sys/stat.h" 3 4
                                                    ;





extern int fchmodat (int __fd, const char *__file, __mode_t __mode,
       int __flag)
     
# 304 "/usr/include/x86_64-linux-gnu/sys/stat.h"
    1 1 
# 304 "/usr/include/x86_64-linux-gnu/sys/stat.h" 3 4
                                 ;






extern __mode_t umask (__mode_t __mask) 
# 311 "/usr/include/x86_64-linux-gnu/sys/stat.h"
                                       1
# 311 "/usr/include/x86_64-linux-gnu/sys/stat.h" 3 4
                                              ;




extern __mode_t getumask (void) 
# 316 "/usr/include/x86_64-linux-gnu/sys/stat.h"
                               1
# 316 "/usr/include/x86_64-linux-gnu/sys/stat.h" 3 4
                                      ;



extern int mkdir (const char *__path, __mode_t __mode)
     
# 321 "/usr/include/x86_64-linux-gnu/sys/stat.h"
    1 1
# 321 "/usr/include/x86_64-linux-gnu/sys/stat.h" 3 4
                           ;





extern int mkdirat (int __fd, const char *__path, __mode_t __mode)
     
# 328 "/usr/include/x86_64-linux-gnu/sys/stat.h"
    1 1
# 328 "/usr/include/x86_64-linux-gnu/sys/stat.h" 3 4
                           ;






extern int mknod (const char *__path, __mode_t __mode, __dev_t __dev)
     
# 336 "/usr/include/x86_64-linux-gnu/sys/stat.h"
    1 1
# 336 "/usr/include/x86_64-linux-gnu/sys/stat.h" 3 4
                           ;





extern int mknodat (int __fd, const char *__path, __mode_t __mode,
      __dev_t __dev) 
# 343 "/usr/include/x86_64-linux-gnu/sys/stat.h"
                    1 1
# 343 "/usr/include/x86_64-linux-gnu/sys/stat.h" 3 4
                                           ;





extern int mkfifo (const char *__path, __mode_t __mode)
     
# 350 "/usr/include/x86_64-linux-gnu/sys/stat.h"
    1 1
# 350 "/usr/include/x86_64-linux-gnu/sys/stat.h" 3 4
                           ;





extern int mkfifoat (int __fd, const char *__path, __mode_t __mode)
     
# 357 "/usr/include/x86_64-linux-gnu/sys/stat.h"
    1 1
# 357 "/usr/include/x86_64-linux-gnu/sys/stat.h" 3 4
                           ;





extern int utimensat (int __fd, const char *__path,
        const struct timespec __times[2],
        int __flags)
     
# 366 "/usr/include/x86_64-linux-gnu/sys/stat.h"
    1 1
# 366 "/usr/include/x86_64-linux-gnu/sys/stat.h" 3 4
                           ;




extern int futimens (int __fd, const struct timespec __times[2]) 
# 371 "/usr/include/x86_64-linux-gnu/sys/stat.h"
                                                                1
# 371 "/usr/include/x86_64-linux-gnu/sys/stat.h" 3 4
                                                                       ;
# 409 "/usr/include/x86_64-linux-gnu/sys/stat.h" 3 4
extern int __fxstat (int __ver, int __fildes, struct stat *__stat_buf) __asm__ 
# 409 "/usr/include/x86_64-linux-gnu/sys/stat.h"
          1

     1
# 411 "/usr/include/x86_64-linux-gnu/sys/stat.h" 3 4
                   ;
extern int __xstat (int __ver, const char *__filename, struct stat *__stat_buf) __asm__ 
# 412 "/usr/include/x86_64-linux-gnu/sys/stat.h"
          1

     1
# 414 "/usr/include/x86_64-linux-gnu/sys/stat.h" 3 4
                      ;
extern int __lxstat (int __ver, const char *__filename, struct stat *__stat_buf) __asm__ 
# 415 "/usr/include/x86_64-linux-gnu/sys/stat.h"
          1

     1
# 417 "/usr/include/x86_64-linux-gnu/sys/stat.h" 3 4
                      ;
extern int __fxstatat (int __ver, int __fildes, const char *__filename, struct stat *__stat_buf, int __flag) __asm__ 
# 418 "/usr/include/x86_64-linux-gnu/sys/stat.h"
          1


                    1
# 421 "/usr/include/x86_64-linux-gnu/sys/stat.h" 3 4
                                     ;
# 431 "/usr/include/x86_64-linux-gnu/sys/stat.h" 3 4
extern int __fxstat64 (int __ver, int __fildes, struct stat64 *__stat_buf)
     
# 432 "/usr/include/x86_64-linux-gnu/sys/stat.h"
    1 1
# 432 "/usr/include/x86_64-linux-gnu/sys/stat.h" 3 4
                           ;
extern int __xstat64 (int __ver, const char *__filename,
        struct stat64 *__stat_buf) 
# 434 "/usr/include/x86_64-linux-gnu/sys/stat.h"
                                  1 1
# 434 "/usr/include/x86_64-linux-gnu/sys/stat.h" 3 4
                                                            ;
extern int __lxstat64 (int __ver, const char *__filename,
         struct stat64 *__stat_buf) 
# 436 "/usr/include/x86_64-linux-gnu/sys/stat.h"
                                   1 1
# 436 "/usr/include/x86_64-linux-gnu/sys/stat.h" 3 4
                                                             ;
extern int __fxstatat64 (int __ver, int __fildes, const char *__filename,
    struct stat64 *__stat_buf, int __flag)
     
# 439 "/usr/include/x86_64-linux-gnu/sys/stat.h"
    1 1
# 439 "/usr/include/x86_64-linux-gnu/sys/stat.h" 3 4
                              ;

extern int __xmknod (int __ver, const char *__path, __mode_t __mode,
       __dev_t *__dev) 
# 442 "/usr/include/x86_64-linux-gnu/sys/stat.h"
                      1 1
# 442 "/usr/include/x86_64-linux-gnu/sys/stat.h" 3 4
                                                ;

extern int __xmknodat (int __ver, int __fd, const char *__path,
         __mode_t __mode, __dev_t *__dev)
     
# 446 "/usr/include/x86_64-linux-gnu/sys/stat.h"
    1 1
# 446 "/usr/include/x86_64-linux-gnu/sys/stat.h" 3 4
                              ;
# 533 "/usr/include/x86_64-linux-gnu/sys/stat.h" 3 4

# 161 "/home/libraskywalker/Projects/ModelRenamer/git-master/block-sha1/../git-compat-util.h" 2
# 1 "/usr/include/fcntl.h" 1 3 4
# 28 "/usr/include/fcntl.h" 3 4







# 1 "/usr/include/x86_64-linux-gnu/bits/fcntl.h" 1 3 4
# 35 "/usr/include/x86_64-linux-gnu/bits/fcntl.h" 3 4
struct flock
  {
    short int l_type;
    short int l_whence;




    __off64_t l_start;
    __off64_t l_len;

    __pid_t l_pid;
  };


struct flock64
  {
    short int l_type;
    short int l_whence;
    __off64_t l_start;
    __off64_t l_len;
    __pid_t l_pid;
  };



# 1 "/usr/include/x86_64-linux-gnu/bits/fcntl-linux.h" 1 3 4
# 38 "/usr/include/x86_64-linux-gnu/bits/fcntl-linux.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/uio.h" 1 3 4
# 25 "/usr/include/x86_64-linux-gnu/bits/uio.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/sys/types.h" 1 3 4
# 27 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4






typedef __u_char u_char;
typedef __u_short u_short;
typedef __u_int u_int;
typedef __u_long u_long;
typedef __quad_t quad_t;
typedef __u_quad_t u_quad_t;
typedef __fsid_t fsid_t;




typedef __loff_t loff_t;
# 55 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
typedef __ino64_t ino64_t;
# 104 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
typedef __id_t id_t;
# 115 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
typedef __daddr_t daddr_t;
typedef __caddr_t caddr_t;





typedef __key_t key_t;
# 132 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
# 1 "/usr/include/time.h" 1 3 4
# 57 "/usr/include/time.h" 3 4


typedef __clock_t clock_t;



# 91 "/usr/include/time.h" 3 4
typedef __clockid_t clockid_t;
# 103 "/usr/include/time.h" 3 4
typedef __timer_t timer_t;
# 133 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4







typedef __suseconds_t suseconds_t;





# 1 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" 1 3 4
# 147 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4



typedef unsigned long int ulong;
typedef unsigned short int ushort;
typedef unsigned int uint;
# 194 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
typedef int int8_t 
# 194 "/usr/include/x86_64-linux-gnu/sys/types.h"
1
# 194 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
                   ;
typedef int int16_t 
# 195 "/usr/include/x86_64-linux-gnu/sys/types.h"
1
# 195 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
                    ;
typedef int int32_t 
# 196 "/usr/include/x86_64-linux-gnu/sys/types.h"
1
# 196 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
                    ;
typedef int int64_t 
# 197 "/usr/include/x86_64-linux-gnu/sys/types.h"
1
# 197 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
                    ;


typedef unsigned int u_int8_t 
# 200 "/usr/include/x86_64-linux-gnu/sys/types.h"
1
# 200 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
                     ;
typedef unsigned int u_int16_t 
# 201 "/usr/include/x86_64-linux-gnu/sys/types.h"
1
# 201 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
                      ;
typedef unsigned int u_int32_t 
# 202 "/usr/include/x86_64-linux-gnu/sys/types.h"
1
# 202 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
                      ;
typedef unsigned int u_int64_t 
# 203 "/usr/include/x86_64-linux-gnu/sys/types.h"
1
# 203 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
                      ;

typedef int register_t 
# 205 "/usr/include/x86_64-linux-gnu/sys/types.h"
                      1
# 205 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
                                                           ;
# 216 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
# 1 "/usr/include/endian.h" 1 3 4
# 36 "/usr/include/endian.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/endian.h" 1 3 4
# 37 "/usr/include/endian.h" 2 3 4
# 60 "/usr/include/endian.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 1 3 4
# 28 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 29 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 2 3 4






# 1 "/usr/include/x86_64-linux-gnu/bits/byteswap-16.h" 1 3 4
# 36 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 2 3 4
# 44 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 3 4
static __inline unsigned int
__bswap_32 (unsigned int __bsx)
{
  return __builtin_bswap32 (__bsx);
}
# 108 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 3 4
static __inline __uint64_t
__bswap_64 (__uint64_t __bsx)
{
  return __builtin_bswap64 (__bsx);
}
# 61 "/usr/include/endian.h" 2 3 4
# 217 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4


# 1 "/usr/include/x86_64-linux-gnu/sys/select.h" 1 3 4
# 30 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/select.h" 1 3 4
# 22 "/usr/include/x86_64-linux-gnu/bits/select.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 23 "/usr/include/x86_64-linux-gnu/bits/select.h" 2 3 4
# 31 "/usr/include/x86_64-linux-gnu/sys/select.h" 2 3 4


# 1 "/usr/include/x86_64-linux-gnu/bits/sigset.h" 1 3 4
# 22 "/usr/include/x86_64-linux-gnu/bits/sigset.h" 3 4
typedef int __sig_atomic_t;




typedef struct
  {
    unsigned long int __val[(1024 / (8 * sizeof (unsigned long int)))];
  } __sigset_t;
# 34 "/usr/include/x86_64-linux-gnu/sys/select.h" 2 3 4



typedef __sigset_t sigset_t;





# 1 "/usr/include/time.h" 1 3 4
# 44 "/usr/include/x86_64-linux-gnu/sys/select.h" 2 3 4

# 1 "/usr/include/x86_64-linux-gnu/bits/time.h" 1 3 4
# 30 "/usr/include/x86_64-linux-gnu/bits/time.h" 3 4
struct timeval
  {
    __time_t tv_sec;
    __suseconds_t tv_usec;
  };
# 46 "/usr/include/x86_64-linux-gnu/sys/select.h" 2 3 4
# 54 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4
typedef long int __fd_mask;
# 64 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4
typedef struct
  {



    __fd_mask fds_bits[1024 / (8 * (int) sizeof (__fd_mask))];





  } fd_set;






typedef __fd_mask fd_mask;
# 96 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4

# 106 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4
extern int select (int __nfds, fd_set *__restrict __readfds,
     fd_set *__restrict __writefds,
     fd_set *__restrict __exceptfds,
     struct timeval *__restrict __timeout);
# 118 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4
extern int pselect (int __nfds, fd_set *__restrict __readfds,
      fd_set *__restrict __writefds,
      fd_set *__restrict __exceptfds,
      const struct timespec *__restrict __timeout,
      const __sigset_t *__restrict __sigmask);
# 131 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4

# 220 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4


# 1 "/usr/include/x86_64-linux-gnu/sys/sysmacros.h" 1 3 4
# 24 "/usr/include/x86_64-linux-gnu/sys/sysmacros.h" 3 4


__extension__
extern unsigned int gnu_dev_major (unsigned long long int __dev)
     
# 28 "/usr/include/x86_64-linux-gnu/sys/sysmacros.h"
    1 1
# 28 "/usr/include/x86_64-linux-gnu/sys/sysmacros.h" 3 4
                               ;
__extension__
extern unsigned int gnu_dev_minor (unsigned long long int __dev)
     
# 31 "/usr/include/x86_64-linux-gnu/sys/sysmacros.h"
    1 1
# 31 "/usr/include/x86_64-linux-gnu/sys/sysmacros.h" 3 4
                               ;
__extension__
extern unsigned long long int gnu_dev_makedev (unsigned int __major,
            unsigned int __minor)
     
# 35 "/usr/include/x86_64-linux-gnu/sys/sysmacros.h"
    1 1
# 35 "/usr/include/x86_64-linux-gnu/sys/sysmacros.h" 3 4
                               ;
# 58 "/usr/include/x86_64-linux-gnu/sys/sysmacros.h" 3 4

# 223 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4
# 252 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
typedef __fsblkcnt64_t fsblkcnt_t;



typedef __fsfilcnt64_t fsfilcnt_t;





typedef __blkcnt64_t blkcnt64_t;
typedef __fsblkcnt64_t fsblkcnt64_t;
typedef __fsfilcnt64_t fsfilcnt64_t;





# 1 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 1 3 4
# 21 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 22 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 2 3 4
# 60 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3 4
typedef unsigned long int pthread_t;


union pthread_attr_t
{
  char __size[56];
  long int __align;
};

typedef union pthread_attr_t pthread_attr_t;





typedef struct __pthread_internal_list
{
  struct __pthread_internal_list *__prev;
  struct __pthread_internal_list *__next;
} __pthread_list_t;
# 90 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3 4
typedef union
{
  struct __pthread_mutex_s
  {
    int __lock;
    unsigned int __count;
    int __owner;

    unsigned int __nusers;



    int __kind;

    short __spins;
    short __elision;
    __pthread_list_t __list;
# 125 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3 4
  } __data;
  char __size[40];
  long int __align;
} pthread_mutex_t;

typedef union
{
  char __size[4];
  int __align;
} pthread_mutexattr_t;




typedef union
{
  struct
  {
    int __lock;
    unsigned int __futex;
    __extension__ unsigned long long int __total_seq;
    __extension__ unsigned long long int __wakeup_seq;
    __extension__ unsigned long long int __woken_seq;
    void *__mutex;
    unsigned int __nwaiters;
    unsigned int __broadcast_seq;
  } __data;
  char __size[48];
  __extension__ long long int __align;
} pthread_cond_t;

typedef union
{
  char __size[4];
  int __align;
} pthread_condattr_t;



typedef unsigned int pthread_key_t;



typedef int pthread_once_t;





typedef union
{

  struct
  {
    int __lock;
    unsigned int __nr_readers;
    unsigned int __readers_wakeup;
    unsigned int __writer_wakeup;
    unsigned int __nr_readers_queued;
    unsigned int __nr_writers_queued;
    int __writer;
    int __shared;
    signed char __rwelision;




    unsigned char __pad1[7];


    unsigned long int __pad2;


    unsigned int __flags;

  } __data;
# 220 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3 4
  char __size[56];
  long int __align;
} pthread_rwlock_t;

typedef union
{
  char __size[8];
  long int __align;
} pthread_rwlockattr_t;





typedef volatile int pthread_spinlock_t;




typedef union
{
  char __size[32];
  long int __align;
} pthread_barrier_t;

typedef union
{
  char __size[4];
  int __align;
} pthread_barrierattr_t;
# 271 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4



# 26 "/usr/include/x86_64-linux-gnu/bits/uio.h" 2 3 4
# 43 "/usr/include/x86_64-linux-gnu/bits/uio.h" 3 4
struct iovec
  {
    void *iov_base;
    size_t iov_len;
  };
# 39 "/usr/include/x86_64-linux-gnu/bits/fcntl-linux.h" 2 3 4
# 258 "/usr/include/x86_64-linux-gnu/bits/fcntl-linux.h" 3 4
enum __pid_type
  {
    F_OWNER_TID = 0,
    F_OWNER_PID,
    F_OWNER_PGRP,
    F_OWNER_GID = F_OWNER_PGRP
  };


struct f_owner_ex
  {
    enum __pid_type type;
    __pid_t pid;
  };
# 333 "/usr/include/x86_64-linux-gnu/bits/fcntl-linux.h" 3 4
struct file_handle
{
  unsigned int handle_bytes;
  int handle_type;

  unsigned char f_handle[0];
};
# 363 "/usr/include/x86_64-linux-gnu/bits/fcntl-linux.h" 3 4





extern ssize_t readahead (int __fd, __off64_t __offset, size_t __count)
    
# 369 "/usr/include/x86_64-linux-gnu/bits/fcntl-linux.h"
   1
# 369 "/usr/include/x86_64-linux-gnu/bits/fcntl-linux.h" 3 4
          ;






extern int sync_file_range (int __fd, __off64_t __offset, __off64_t __count,
       unsigned int __flags);






extern ssize_t vmsplice (int __fdout, const struct iovec *__iov,
    size_t __count, unsigned int __flags);





extern ssize_t splice (int __fdin, __off64_t *__offin, int __fdout,
         __off64_t *__offout, size_t __len,
         unsigned int __flags);





extern ssize_t tee (int __fdin, int __fdout, size_t __len,
      unsigned int __flags);
# 410 "/usr/include/x86_64-linux-gnu/bits/fcntl-linux.h" 3 4
extern int fallocate (int __fd, int __mode, __off64_t __offset, __off64_t __len) __asm__

                     ;





extern int fallocate64 (int __fd, int __mode, __off64_t __offset,
   __off64_t __len);




extern int name_to_handle_at (int __dfd, const char *__name,
         struct file_handle *__handle, int *__mnt_id,
         int __flags) 
# 426 "/usr/include/x86_64-linux-gnu/bits/fcntl-linux.h"
                     1
# 426 "/usr/include/x86_64-linux-gnu/bits/fcntl-linux.h" 3 4
                            ;





extern int open_by_handle_at (int __mountdirfd, struct file_handle *__handle,
         int __flags);




# 61 "/usr/include/x86_64-linux-gnu/bits/fcntl.h" 2 3 4
# 36 "/usr/include/fcntl.h" 2 3 4
# 76 "/usr/include/fcntl.h" 3 4
# 1 "/usr/include/time.h" 1 3 4
# 77 "/usr/include/fcntl.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/stat.h" 1 3 4
# 78 "/usr/include/fcntl.h" 2 3 4
# 146 "/usr/include/fcntl.h" 3 4
extern int fcntl (int __fd, int __cmd, ...);
# 159 "/usr/include/fcntl.h" 3 4
extern int open (const char *__file, int __oflag, ...) __asm__
     
# 160 "/usr/include/fcntl.h"
    1
# 160 "/usr/include/fcntl.h" 3 4
                   ;





extern int open64 (const char *__file, int __oflag, ...) 
# 166 "/usr/include/fcntl.h"
                                                        1
# 166 "/usr/include/fcntl.h" 3 4
                                                                       ;
# 184 "/usr/include/fcntl.h" 3 4
extern int openat (int __fd, const char *__file, int __oflag, ...) __asm__
                    
# 185 "/usr/include/fcntl.h"
                   1
# 185 "/usr/include/fcntl.h" 3 4
                                  ;





extern int openat64 (int __fd, const char *__file, int __oflag, ...)
     
# 192 "/usr/include/fcntl.h"
    1
# 192 "/usr/include/fcntl.h" 3 4
                   ;
# 205 "/usr/include/fcntl.h" 3 4
extern int creat (const char *__file, mode_t __mode) __asm__
                  
# 206 "/usr/include/fcntl.h"
                 1
# 206 "/usr/include/fcntl.h" 3 4
                                ;





extern int creat64 (const char *__file, mode_t __mode) 
# 212 "/usr/include/fcntl.h"
                                                      1
# 212 "/usr/include/fcntl.h" 3 4
                                                                     ;
# 252 "/usr/include/fcntl.h" 3 4
extern int posix_fadvise (int __fd, __off64_t __offset, __off64_t __len, int __advise) __asm__ 
# 252 "/usr/include/fcntl.h"
          1

                      
# 254 "/usr/include/fcntl.h" 3 4
                     ;





extern int posix_fadvise64 (int __fd, off64_t __offset, off64_t __len,
       int __advise) 
# 261 "/usr/include/fcntl.h"
                    1
# 261 "/usr/include/fcntl.h" 3 4
                           ;
# 273 "/usr/include/fcntl.h" 3 4
extern int posix_fallocate (int __fd, __off64_t __offset, __off64_t __len) __asm__

                           ;





extern int posix_fallocate64 (int __fd, off64_t __offset, off64_t __len);
# 292 "/usr/include/fcntl.h" 3 4

# 162 "/home/libraskywalker/Projects/ModelRenamer/git-master/block-sha1/../git-compat-util.h" 2
# 1 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" 1 3 4
# 149 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" 3 4
typedef long int ptrdiff_t;
# 328 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" 3 4
typedef int wchar_t;
# 163 "/home/libraskywalker/Projects/ModelRenamer/git-master/block-sha1/../git-compat-util.h" 2
# 1 "/usr/include/stdlib.h" 1 3 4
# 32 "/usr/include/stdlib.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" 1 3 4
# 33 "/usr/include/stdlib.h" 2 3 4








# 1 "/usr/include/x86_64-linux-gnu/bits/waitflags.h" 1 3 4
# 50 "/usr/include/x86_64-linux-gnu/bits/waitflags.h" 3 4
typedef enum
{
  P_ALL,
  P_PID,
  P_PGID
} idtype_t;
# 42 "/usr/include/stdlib.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/waitstatus.h" 1 3 4
# 66 "/usr/include/x86_64-linux-gnu/bits/waitstatus.h" 3 4
union wait
  {
    int w_status;
    struct
      {

 unsigned int __w_termsig:7;
 unsigned int __w_coredump:1;
 unsigned int __w_retcode:8;
 unsigned int:16;







      } __wait_terminated;
    struct
      {

 unsigned int __w_stopval:8;
 unsigned int __w_stopsig:8;
 unsigned int:16;






      } __wait_stopped;
  };
# 43 "/usr/include/stdlib.h" 2 3 4
# 67 "/usr/include/stdlib.h" 3 4
typedef union
  {
    union wait *__uptr;
    int *__iptr;
  } __WAIT_STATUS 
# 71 "/usr/include/stdlib.h"
                 1
# 71 "/usr/include/stdlib.h" 3 4
                                                        ;
# 95 "/usr/include/stdlib.h" 3 4


typedef struct
  {
    int quot;
    int rem;
  } div_t;



typedef struct
  {
    long int quot;
    long int rem;
  } ldiv_t;







__extension__ typedef struct
  {
    long long int quot;
    long long int rem;
  } lldiv_t;


# 139 "/usr/include/stdlib.h" 3 4
extern size_t __ctype_get_mb_cur_max (void) 
# 139 "/usr/include/stdlib.h"
                                           1 
# 139 "/usr/include/stdlib.h" 3 4
                                                        ;




extern double atof (const char *__nptr)
     
# 145 "/usr/include/stdlib.h"
    1 1 1 
# 145 "/usr/include/stdlib.h" 3 4
                                                    ;

extern int atoi (const char *__nptr)
     
# 148 "/usr/include/stdlib.h"
    1 1 1 
# 148 "/usr/include/stdlib.h" 3 4
                                                    ;

extern long int atol (const char *__nptr)
     
# 151 "/usr/include/stdlib.h"
    1 1 1 
# 151 "/usr/include/stdlib.h" 3 4
                                                    ;





__extension__ extern long long int atoll (const char *__nptr)
     
# 158 "/usr/include/stdlib.h"
    1 1 1 
# 158 "/usr/include/stdlib.h" 3 4
                                                    ;





extern double strtod (const char *__restrict __nptr,
        char **__restrict __endptr)
     
# 166 "/usr/include/stdlib.h"
    1 1
# 166 "/usr/include/stdlib.h" 3 4
                           ;





extern float strtof (const char *__restrict __nptr,
       char **__restrict __endptr) 
# 173 "/usr/include/stdlib.h"
                                  1 1
# 173 "/usr/include/stdlib.h" 3 4
                                                         ;

extern long double strtold (const char *__restrict __nptr,
       char **__restrict __endptr)
     
# 177 "/usr/include/stdlib.h"
    1 1
# 177 "/usr/include/stdlib.h" 3 4
                           ;





extern long int strtol (const char *__restrict __nptr,
   char **__restrict __endptr, int __base)
     
# 185 "/usr/include/stdlib.h"
    1 1
# 185 "/usr/include/stdlib.h" 3 4
                           ;

extern unsigned long int strtoul (const char *__restrict __nptr,
      char **__restrict __endptr, int __base)
     
# 189 "/usr/include/stdlib.h"
    1 1
# 189 "/usr/include/stdlib.h" 3 4
                           ;




__extension__
extern long long int strtoq (const char *__restrict __nptr,
        char **__restrict __endptr, int __base)
     
# 197 "/usr/include/stdlib.h"
    1 1
# 197 "/usr/include/stdlib.h" 3 4
                           ;

__extension__
extern unsigned long long int strtouq (const char *__restrict __nptr,
           char **__restrict __endptr, int __base)
     
# 202 "/usr/include/stdlib.h"
    1 1
# 202 "/usr/include/stdlib.h" 3 4
                           ;





__extension__
extern long long int strtoll (const char *__restrict __nptr,
         char **__restrict __endptr, int __base)
     
# 211 "/usr/include/stdlib.h"
    1 1
# 211 "/usr/include/stdlib.h" 3 4
                           ;

__extension__
extern unsigned long long int strtoull (const char *__restrict __nptr,
     char **__restrict __endptr, int __base)
     
# 216 "/usr/include/stdlib.h"
    1 1
# 216 "/usr/include/stdlib.h" 3 4
                           ;

# 235 "/usr/include/stdlib.h" 3 4
# 1 "/usr/include/xlocale.h" 1 3 4
# 27 "/usr/include/xlocale.h" 3 4
typedef struct __locale_struct
{

  struct __locale_data *__locales[13];


  const unsigned short int *__ctype_b;
  const int *__ctype_tolower;
  const int *__ctype_toupper;


  const char *__names[13];
} *__locale_t;


typedef __locale_t locale_t;
# 236 "/usr/include/stdlib.h" 2 3 4



extern long int strtol_l (const char *__restrict __nptr,
     char **__restrict __endptr, int __base,
     __locale_t __loc) 
# 241 "/usr/include/stdlib.h"
                      1 1
# 241 "/usr/include/stdlib.h" 3 4
                                                ;

extern unsigned long int strtoul_l (const char *__restrict __nptr,
        char **__restrict __endptr,
        int __base, __locale_t __loc)
     
# 246 "/usr/include/stdlib.h"
    1 1
# 246 "/usr/include/stdlib.h" 3 4
                              ;

__extension__
extern long long int strtoll_l (const char *__restrict __nptr,
    char **__restrict __endptr, int __base,
    __locale_t __loc)
     
# 252 "/usr/include/stdlib.h"
    1 1
# 252 "/usr/include/stdlib.h" 3 4
                              ;

__extension__
extern unsigned long long int strtoull_l (const char *__restrict __nptr,
       char **__restrict __endptr,
       int __base, __locale_t __loc)
     
# 258 "/usr/include/stdlib.h"
    1 1
# 258 "/usr/include/stdlib.h" 3 4
                              ;

extern double strtod_l (const char *__restrict __nptr,
   char **__restrict __endptr, __locale_t __loc)
     
# 262 "/usr/include/stdlib.h"
    1 1
# 262 "/usr/include/stdlib.h" 3 4
                              ;

extern float strtof_l (const char *__restrict __nptr,
         char **__restrict __endptr, __locale_t __loc)
     
# 266 "/usr/include/stdlib.h"
    1 1
# 266 "/usr/include/stdlib.h" 3 4
                              ;

extern long double strtold_l (const char *__restrict __nptr,
         char **__restrict __endptr,
         __locale_t __loc)
     
# 271 "/usr/include/stdlib.h"
    1 1
# 271 "/usr/include/stdlib.h" 3 4
                              ;
# 305 "/usr/include/stdlib.h" 3 4
extern char *l64a (long int __n) 
# 305 "/usr/include/stdlib.h"
                                1 
# 305 "/usr/include/stdlib.h" 3 4
                                             ;


extern long int a64l (const char *__s)
     
# 309 "/usr/include/stdlib.h"
    1 1 1 
# 309 "/usr/include/stdlib.h" 3 4
                                                    ;
# 321 "/usr/include/stdlib.h" 3 4
extern long int random (void) 
# 321 "/usr/include/stdlib.h"
                             1
# 321 "/usr/include/stdlib.h" 3 4
                                    ;


extern void srandom (unsigned int __seed) 
# 324 "/usr/include/stdlib.h"
                                         1
# 324 "/usr/include/stdlib.h" 3 4
                                                ;





extern char *initstate (unsigned int __seed, char *__statebuf,
   size_t __statelen) 
# 331 "/usr/include/stdlib.h"
                     1 1
# 331 "/usr/include/stdlib.h" 3 4
                                            ;



extern char *setstate (char *__statebuf) 
# 335 "/usr/include/stdlib.h"
                                        1 1
# 335 "/usr/include/stdlib.h" 3 4
                                                               ;







struct random_data
  {
    int32_t *fptr;
    int32_t *rptr;
    int32_t *state;
    int rand_type;
    int rand_deg;
    int rand_sep;
    int32_t *end_ptr;
  };

extern int random_r (struct random_data *__restrict __buf,
       int32_t *__restrict __result) 
# 355 "/usr/include/stdlib.h"
                                    1 1
# 355 "/usr/include/stdlib.h" 3 4
                                                              ;

extern int srandom_r (unsigned int __seed, struct random_data *__buf)
     
# 358 "/usr/include/stdlib.h"
    1 1
# 358 "/usr/include/stdlib.h" 3 4
                           ;

extern int initstate_r (unsigned int __seed, char *__restrict __statebuf,
   size_t __statelen,
   struct random_data *__restrict __buf)
     
# 363 "/usr/include/stdlib.h"
    1 1
# 363 "/usr/include/stdlib.h" 3 4
                              ;

extern int setstate_r (char *__restrict __statebuf,
         struct random_data *__restrict __buf)
     
# 367 "/usr/include/stdlib.h"
    1 1
# 367 "/usr/include/stdlib.h" 3 4
                              ;






extern int rand (void) 
# 374 "/usr/include/stdlib.h"
                      1
# 374 "/usr/include/stdlib.h" 3 4
                             ;

extern void srand (unsigned int __seed) 
# 376 "/usr/include/stdlib.h"
                                       1
# 376 "/usr/include/stdlib.h" 3 4
                                              ;




extern int rand_r (unsigned int *__seed) 
# 381 "/usr/include/stdlib.h"
                                        1
# 381 "/usr/include/stdlib.h" 3 4
                                               ;







extern double drand48 (void) 
# 389 "/usr/include/stdlib.h"
                            1
# 389 "/usr/include/stdlib.h" 3 4
                                   ;
extern double erand48 (unsigned short int __xsubi[3]) 
# 390 "/usr/include/stdlib.h"
                                                     1 1
# 390 "/usr/include/stdlib.h" 3 4
                                                                            ;


extern long int lrand48 (void) 
# 393 "/usr/include/stdlib.h"
                              1
# 393 "/usr/include/stdlib.h" 3 4
                                     ;
extern long int nrand48 (unsigned short int __xsubi[3])
     
# 395 "/usr/include/stdlib.h"
    1 1
# 395 "/usr/include/stdlib.h" 3 4
                           ;


extern long int mrand48 (void) 
# 398 "/usr/include/stdlib.h"
                              1
# 398 "/usr/include/stdlib.h" 3 4
                                     ;
extern long int jrand48 (unsigned short int __xsubi[3])
     
# 400 "/usr/include/stdlib.h"
    1 1
# 400 "/usr/include/stdlib.h" 3 4
                           ;


extern void srand48 (long int __seedval) 
# 403 "/usr/include/stdlib.h"
                                        1
# 403 "/usr/include/stdlib.h" 3 4
                                               ;
extern unsigned short int *seed48 (unsigned short int __seed16v[3])
     
# 405 "/usr/include/stdlib.h"
    1 1
# 405 "/usr/include/stdlib.h" 3 4
                           ;
extern void lcong48 (unsigned short int __param[7]) 
# 406 "/usr/include/stdlib.h"
                                                   1 1
# 406 "/usr/include/stdlib.h" 3 4
                                                                          ;





struct drand48_data
  {
    unsigned short int __x[3];
    unsigned short int __old_x[3];
    unsigned short int __c;
    unsigned short int __init;
    __extension__ unsigned long long int __a;

  };


extern int drand48_r (struct drand48_data *__restrict __buffer,
        double *__restrict __result) 
# 424 "/usr/include/stdlib.h"
                                    1 1
# 424 "/usr/include/stdlib.h" 3 4
                                                              ;
extern int erand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        double *__restrict __result) 
# 427 "/usr/include/stdlib.h"
                                    1 1
# 427 "/usr/include/stdlib.h" 3 4
                                                              ;


extern int lrand48_r (struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     
# 432 "/usr/include/stdlib.h"
    1 1
# 432 "/usr/include/stdlib.h" 3 4
                              ;
extern int nrand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     
# 436 "/usr/include/stdlib.h"
    1 1
# 436 "/usr/include/stdlib.h" 3 4
                              ;


extern int mrand48_r (struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     
# 441 "/usr/include/stdlib.h"
    1 1
# 441 "/usr/include/stdlib.h" 3 4
                              ;
extern int jrand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     
# 445 "/usr/include/stdlib.h"
    1 1
# 445 "/usr/include/stdlib.h" 3 4
                              ;


extern int srand48_r (long int __seedval, struct drand48_data *__buffer)
     
# 449 "/usr/include/stdlib.h"
    1 1
# 449 "/usr/include/stdlib.h" 3 4
                           ;

extern int seed48_r (unsigned short int __seed16v[3],
       struct drand48_data *__buffer) 
# 452 "/usr/include/stdlib.h"
                                     1 1
# 452 "/usr/include/stdlib.h" 3 4
                                                               ;

extern int lcong48_r (unsigned short int __param[7],
        struct drand48_data *__buffer)
     
# 456 "/usr/include/stdlib.h"
    1 1
# 456 "/usr/include/stdlib.h" 3 4
                              ;









extern void *malloc (size_t __size) 
# 466 "/usr/include/stdlib.h"
                                   1 1 
# 466 "/usr/include/stdlib.h" 3 4
                                                                     ;

extern void *calloc (size_t __nmemb, size_t __size)
     
# 469 "/usr/include/stdlib.h"
    1 1 
# 469 "/usr/include/stdlib.h" 3 4
                                      ;










extern void *realloc (void *__ptr, size_t __size)
     
# 481 "/usr/include/stdlib.h"
    1 1
# 481 "/usr/include/stdlib.h" 3 4
                                            ;

extern void free (void *__ptr) 
# 483 "/usr/include/stdlib.h"
                              1
# 483 "/usr/include/stdlib.h" 3 4
                                     ;




extern void cfree (void *__ptr) 
# 488 "/usr/include/stdlib.h"
                               1
# 488 "/usr/include/stdlib.h" 3 4
                                      ;



# 1 "/usr/include/alloca.h" 1 3 4
# 24 "/usr/include/alloca.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" 1 3 4
# 25 "/usr/include/alloca.h" 2 3 4







extern void *alloca (size_t __size) 
# 32 "/usr/include/alloca.h"
                                   1
# 32 "/usr/include/alloca.h" 3 4
                                          ;






# 493 "/usr/include/stdlib.h" 2 3 4





extern void *valloc (size_t __size) 
# 498 "/usr/include/stdlib.h"
                                   1 1 
# 498 "/usr/include/stdlib.h" 3 4
                                                                     ;




extern int posix_memalign (void **__memptr, size_t __alignment, size_t __size)
     
# 504 "/usr/include/stdlib.h"
    1 1 
# 504 "/usr/include/stdlib.h" 3 4
                                 ;




extern void *aligned_alloc (size_t __alignment, size_t __size)
     
# 510 "/usr/include/stdlib.h"
    1 1 1 
# 510 "/usr/include/stdlib.h" 3 4
                                                                     ;




extern void abort (void) 
# 515 "/usr/include/stdlib.h"
                        1 1
# 515 "/usr/include/stdlib.h" 3 4
                                                              ;



extern int atexit (void (*__func) (void)) 
# 519 "/usr/include/stdlib.h"
                                         1 1
# 519 "/usr/include/stdlib.h" 3 4
                                                                ;







extern int at_quick_exit (void (*__func) (void)) 
# 527 "/usr/include/stdlib.h"
                                                1 1
# 527 "/usr/include/stdlib.h" 3 4
                                                                       ;







extern int on_exit (void (*__func) (int __status, void *__arg), void *__arg)
     
# 536 "/usr/include/stdlib.h"
    1 1
# 536 "/usr/include/stdlib.h" 3 4
                           ;






extern void exit (int __status) 
# 543 "/usr/include/stdlib.h"
                               1 1
# 543 "/usr/include/stdlib.h" 3 4
                                                                     ;





extern void quick_exit (int __status) 
# 549 "/usr/include/stdlib.h"
                                     1 1
# 549 "/usr/include/stdlib.h" 3 4
                                                                           ;







extern void _Exit (int __status) 
# 557 "/usr/include/stdlib.h"
                                1 1
# 557 "/usr/include/stdlib.h" 3 4
                                                                      ;






extern char *getenv (const char *__name) 
# 564 "/usr/include/stdlib.h"
                                        1 1 
# 564 "/usr/include/stdlib.h" 3 4
                                                                     ;





extern char *secure_getenv (const char *__name)
     
# 571 "/usr/include/stdlib.h"
    1 1 
# 571 "/usr/include/stdlib.h" 3 4
                                 ;






extern int putenv (char *__string) 
# 578 "/usr/include/stdlib.h"
                                  1 1
# 578 "/usr/include/stdlib.h" 3 4
                                                         ;





extern int setenv (const char *__name, const char *__value, int __replace)
     
# 585 "/usr/include/stdlib.h"
    1 1
# 585 "/usr/include/stdlib.h" 3 4
                           ;


extern int unsetenv (const char *__name) 
# 588 "/usr/include/stdlib.h"
                                        1 1
# 588 "/usr/include/stdlib.h" 3 4
                                                               ;






extern int clearenv (void) 
# 595 "/usr/include/stdlib.h"
                          1
# 595 "/usr/include/stdlib.h" 3 4
                                 ;
# 606 "/usr/include/stdlib.h" 3 4
extern char *mktemp (char *__template) 
# 606 "/usr/include/stdlib.h"
                                      1 1
# 606 "/usr/include/stdlib.h" 3 4
                                                             ;
# 622 "/usr/include/stdlib.h" 3 4
extern int mkstemp (char *__template) __asm__
     
# 623 "/usr/include/stdlib.h"
    1 
# 623 "/usr/include/stdlib.h" 3 4
                         ;





extern int mkstemp64 (char *__template) 
# 629 "/usr/include/stdlib.h"
                                       1 
# 629 "/usr/include/stdlib.h" 3 4
                                                            ;
# 644 "/usr/include/stdlib.h" 3 4
extern int mkstemps (char *__template, int __suffixlen) __asm__
                     
# 645 "/usr/include/stdlib.h"
                    1 
# 645 "/usr/include/stdlib.h" 3 4
                                         ;





extern int mkstemps64 (char *__template, int __suffixlen)
     
# 652 "/usr/include/stdlib.h"
    1 
# 652 "/usr/include/stdlib.h" 3 4
                         ;
# 662 "/usr/include/stdlib.h" 3 4
extern char *mkdtemp (char *__template) 
# 662 "/usr/include/stdlib.h"
                                       1 1 
# 662 "/usr/include/stdlib.h" 3 4
                                                                    ;
# 676 "/usr/include/stdlib.h" 3 4
extern int mkostemp (char *__template, int __flags) __asm__
     
# 677 "/usr/include/stdlib.h"
    1 
# 677 "/usr/include/stdlib.h" 3 4
                         ;





extern int mkostemp64 (char *__template, int __flags) 
# 683 "/usr/include/stdlib.h"
                                                     1 
# 683 "/usr/include/stdlib.h" 3 4
                                                                          ;
# 697 "/usr/include/stdlib.h" 3 4
extern int mkostemps (char *__template, int __suffixlen, int __flags) __asm__

     
# 699 "/usr/include/stdlib.h"
    1 
# 699 "/usr/include/stdlib.h" 3 4
                         ;





extern int mkostemps64 (char *__template, int __suffixlen, int __flags)
     
# 706 "/usr/include/stdlib.h"
    1 
# 706 "/usr/include/stdlib.h" 3 4
                         ;









extern int system (const char *__command) ;






extern char *canonicalize_file_name (const char *__name)
     
# 724 "/usr/include/stdlib.h"
    1 1 
# 724 "/usr/include/stdlib.h" 3 4
                                 ;
# 733 "/usr/include/stdlib.h" 3 4
extern char *realpath (const char *__restrict __name,
         char *__restrict __resolved) 
# 734 "/usr/include/stdlib.h"
                                     1 
# 734 "/usr/include/stdlib.h" 3 4
                                                  ;






typedef int (*__compar_fn_t) (const void *, const void *);


typedef __compar_fn_t comparison_fn_t;



typedef int (*__compar_d_fn_t) (const void *, const void *, void *);





extern void *bsearch (const void *__key, const void *__base,
        size_t __nmemb, size_t __size, __compar_fn_t __compar)
     
# 756 "/usr/include/stdlib.h"
    1 
# 756 "/usr/include/stdlib.h" 3 4
                               ;







extern void qsort (void *__base, size_t __nmemb, size_t __size,
     __compar_fn_t __compar) 
# 765 "/usr/include/stdlib.h"
                            1
# 765 "/usr/include/stdlib.h" 3 4
                                              ;

extern void qsort_r (void *__base, size_t __nmemb, size_t __size,
       __compar_d_fn_t __compar, void *__arg)
  
# 769 "/usr/include/stdlib.h"
 1
# 769 "/usr/include/stdlib.h" 3 4
                   ;




extern int abs (int __x) 
# 774 "/usr/include/stdlib.h"
                        1 1 
# 774 "/usr/include/stdlib.h" 3 4
                                                                 ;
extern long int labs (long int __x) 
# 775 "/usr/include/stdlib.h"
                                   1 1 
# 775 "/usr/include/stdlib.h" 3 4
                                                                            ;



__extension__ extern long long int llabs (long long int __x)
     
# 780 "/usr/include/stdlib.h"
    1 1 
# 780 "/usr/include/stdlib.h" 3 4
                                             ;







extern div_t div (int __numer, int __denom)
     
# 789 "/usr/include/stdlib.h"
    1 1 
# 789 "/usr/include/stdlib.h" 3 4
                                             ;
extern ldiv_t ldiv (long int __numer, long int __denom)
     
# 791 "/usr/include/stdlib.h"
    1 1 
# 791 "/usr/include/stdlib.h" 3 4
                                             ;




__extension__ extern lldiv_t lldiv (long long int __numer,
        long long int __denom)
     
# 798 "/usr/include/stdlib.h"
    1 1 
# 798 "/usr/include/stdlib.h" 3 4
                                             ;

# 811 "/usr/include/stdlib.h" 3 4
extern char *ecvt (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign) 
# 812 "/usr/include/stdlib.h"
                            1 1 
# 812 "/usr/include/stdlib.h" 3 4
                                                            ;




extern char *fcvt (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign) 
# 818 "/usr/include/stdlib.h"
                            1 1 
# 818 "/usr/include/stdlib.h" 3 4
                                                            ;




extern char *gcvt (double __value, int __ndigit, char *__buf)
     
# 824 "/usr/include/stdlib.h"
    1 1 
# 824 "/usr/include/stdlib.h" 3 4
                                 ;




extern char *qecvt (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign)
     
# 831 "/usr/include/stdlib.h"
    1 1 
# 831 "/usr/include/stdlib.h" 3 4
                                    ;
extern char *qfcvt (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign)
     
# 834 "/usr/include/stdlib.h"
    1 1 
# 834 "/usr/include/stdlib.h" 3 4
                                    ;
extern char *qgcvt (long double __value, int __ndigit, char *__buf)
     
# 836 "/usr/include/stdlib.h"
    1 1 
# 836 "/usr/include/stdlib.h" 3 4
                                 ;




extern int ecvt_r (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign, char *__restrict __buf,
     size_t __len) 
# 843 "/usr/include/stdlib.h"
                  1 1
# 843 "/usr/include/stdlib.h" 3 4
                                               ;
extern int fcvt_r (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign, char *__restrict __buf,
     size_t __len) 
# 846 "/usr/include/stdlib.h"
                  1 1
# 846 "/usr/include/stdlib.h" 3 4
                                               ;

extern int qecvt_r (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign,
      char *__restrict __buf, size_t __len)
     
# 851 "/usr/include/stdlib.h"
    1 1
# 851 "/usr/include/stdlib.h" 3 4
                                 ;
extern int qfcvt_r (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign,
      char *__restrict __buf, size_t __len)
     
# 855 "/usr/include/stdlib.h"
    1 1
# 855 "/usr/include/stdlib.h" 3 4
                                 ;






extern int mblen (const char *__s, size_t __n) 
# 862 "/usr/include/stdlib.h"
                                              1
# 862 "/usr/include/stdlib.h" 3 4
                                                     ;


extern int mbtowc (wchar_t *__restrict __pwc,
     const char *__restrict __s, size_t __n) 
# 866 "/usr/include/stdlib.h"
                                            1
# 866 "/usr/include/stdlib.h" 3 4
                                                   ;


extern int wctomb (char *__s, wchar_t __wchar) 
# 869 "/usr/include/stdlib.h"
                                              1
# 869 "/usr/include/stdlib.h" 3 4
                                                     ;



extern size_t mbstowcs (wchar_t *__restrict __pwcs,
   const char *__restrict __s, size_t __n) 
# 874 "/usr/include/stdlib.h"
                                          1
# 874 "/usr/include/stdlib.h" 3 4
                                                 ;

extern size_t wcstombs (char *__restrict __s,
   const wchar_t *__restrict __pwcs, size_t __n)
     
# 878 "/usr/include/stdlib.h"
    1
# 878 "/usr/include/stdlib.h" 3 4
           ;








extern int rpmatch (const char *__response) 
# 887 "/usr/include/stdlib.h"
                                           1 1 
# 887 "/usr/include/stdlib.h" 3 4
                                                                        ;
# 898 "/usr/include/stdlib.h" 3 4
extern int getsubopt (char **__restrict __optionp,
        char *const *__restrict __tokens,
        char **__restrict __valuep)
     
# 901 "/usr/include/stdlib.h"
    1 1 
# 901 "/usr/include/stdlib.h" 3 4
                                       ;





extern void setkey (const char *__key) 
# 907 "/usr/include/stdlib.h"
                                      1 1
# 907 "/usr/include/stdlib.h" 3 4
                                                             ;







extern int posix_openpt (int __oflag) ;







extern int grantpt (int __fd) 
# 923 "/usr/include/stdlib.h"
                             1
# 923 "/usr/include/stdlib.h" 3 4
                                    ;



extern int unlockpt (int __fd) 
# 927 "/usr/include/stdlib.h"
                              1
# 927 "/usr/include/stdlib.h" 3 4
                                     ;




extern char *ptsname (int __fd) 
# 932 "/usr/include/stdlib.h"
                               1 
# 932 "/usr/include/stdlib.h" 3 4
                                            ;






extern int ptsname_r (int __fd, char *__buf, size_t __buflen)
     
# 940 "/usr/include/stdlib.h"
    1 1
# 940 "/usr/include/stdlib.h" 3 4
                           ;


extern int getpt (void);






extern int getloadavg (double __loadavg[], int __nelem)
     
# 951 "/usr/include/stdlib.h"
    1 1
# 951 "/usr/include/stdlib.h" 3 4
                           ;


# 1 "/usr/include/x86_64-linux-gnu/bits/stdlib-float.h" 1 3 4
# 955 "/usr/include/stdlib.h" 2 3 4
# 967 "/usr/include/stdlib.h" 3 4

# 164 "/home/libraskywalker/Projects/ModelRenamer/git-master/block-sha1/../git-compat-util.h" 2
# 1 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stdarg.h" 1 3 4
# 165 "/home/libraskywalker/Projects/ModelRenamer/git-master/block-sha1/../git-compat-util.h" 2
# 1 "/usr/include/string.h" 1 3 4
# 27 "/usr/include/string.h" 3 4





# 1 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" 1 3 4
# 33 "/usr/include/string.h" 2 3 4









extern void *memcpy (void *__restrict __dest, const void *__restrict __src,
       size_t __n) 
# 43 "/usr/include/string.h"
                  1 1
# 43 "/usr/include/string.h" 3 4
                                            ;


extern void *memmove (void *__dest, const void *__src, size_t __n)
     
# 47 "/usr/include/string.h"
    1 1
# 47 "/usr/include/string.h" 3 4
                              ;






extern void *memccpy (void *__restrict __dest, const void *__restrict __src,
        int __c, size_t __n)
     
# 56 "/usr/include/string.h"
    1 1
# 56 "/usr/include/string.h" 3 4
                              ;





extern void *memset (void *__s, int __c, size_t __n) 
# 62 "/usr/include/string.h"
                                                    1 1
# 62 "/usr/include/string.h" 3 4
                                                                           ;


extern int memcmp (const void *__s1, const void *__s2, size_t __n)
     
# 66 "/usr/include/string.h"
    1 1 1
# 66 "/usr/include/string.h" 3 4
                                                 ;
# 92 "/usr/include/string.h" 3 4
extern void *memchr (const void *__s, int __c, size_t __n)
      
# 93 "/usr/include/string.h"
     1 1 1
# 93 "/usr/include/string.h" 3 4
                                               ;


# 106 "/usr/include/string.h" 3 4
extern void *rawmemchr (const void *__s, int __c)
     
# 107 "/usr/include/string.h"
    1 1 1
# 107 "/usr/include/string.h" 3 4
                                              ;
# 117 "/usr/include/string.h" 3 4
extern void *memrchr (const void *__s, int __c, size_t __n)
      
# 118 "/usr/include/string.h"
     1 1 1
# 118 "/usr/include/string.h" 3 4
                                               ;






extern char *strcpy (char *__restrict __dest, const char *__restrict __src)
     
# 126 "/usr/include/string.h"
    1 1
# 126 "/usr/include/string.h" 3 4
                              ;

extern char *strncpy (char *__restrict __dest,
        const char *__restrict __src, size_t __n)
     
# 130 "/usr/include/string.h"
    1 1
# 130 "/usr/include/string.h" 3 4
                              ;


extern char *strcat (char *__restrict __dest, const char *__restrict __src)
     
# 134 "/usr/include/string.h"
    1 1
# 134 "/usr/include/string.h" 3 4
                              ;

extern char *strncat (char *__restrict __dest, const char *__restrict __src,
        size_t __n) 
# 137 "/usr/include/string.h"
                   1 1
# 137 "/usr/include/string.h" 3 4
                                             ;


extern int strcmp (const char *__s1, const char *__s2)
     
# 141 "/usr/include/string.h"
    1 1 1
# 141 "/usr/include/string.h" 3 4
                                                 ;

extern int strncmp (const char *__s1, const char *__s2, size_t __n)
     
# 144 "/usr/include/string.h"
    1 1 1
# 144 "/usr/include/string.h" 3 4
                                                 ;


extern int strcoll (const char *__s1, const char *__s2)
     
# 148 "/usr/include/string.h"
    1 1 1
# 148 "/usr/include/string.h" 3 4
                                                 ;

extern size_t strxfrm (char *__restrict __dest,
         const char *__restrict __src, size_t __n)
     
# 152 "/usr/include/string.h"
    1 1
# 152 "/usr/include/string.h" 3 4
                           ;

# 162 "/usr/include/string.h" 3 4
extern int strcoll_l (const char *__s1, const char *__s2, __locale_t __l)
     
# 163 "/usr/include/string.h"
    1 1 1
# 163 "/usr/include/string.h" 3 4
                                                    ;

extern size_t strxfrm_l (char *__dest, const char *__src, size_t __n,
    __locale_t __l) 
# 166 "/usr/include/string.h"
                   1 1
# 166 "/usr/include/string.h" 3 4
                                             ;




extern char *strdup (const char *__s)
     
# 172 "/usr/include/string.h"
    1 1 1
# 172 "/usr/include/string.h" 3 4
                                                ;






extern char *strndup (const char *__string, size_t __n)
     
# 180 "/usr/include/string.h"
    1 1 1
# 180 "/usr/include/string.h" 3 4
                                                ;
# 206 "/usr/include/string.h" 3 4

# 231 "/usr/include/string.h" 3 4
extern char *strchr (const char *__s, int __c)
     
# 232 "/usr/include/string.h"
    1 1 1
# 232 "/usr/include/string.h" 3 4
                                              ;
# 258 "/usr/include/string.h" 3 4
extern char *strrchr (const char *__s, int __c)
     
# 259 "/usr/include/string.h"
    1 1 1
# 259 "/usr/include/string.h" 3 4
                                              ;


# 272 "/usr/include/string.h" 3 4
extern char *strchrnul (const char *__s, int __c)
     
# 273 "/usr/include/string.h"
    1 1 1
# 273 "/usr/include/string.h" 3 4
                                              ;






extern size_t strcspn (const char *__s, const char *__reject)
     
# 281 "/usr/include/string.h"
    1 1 1
# 281 "/usr/include/string.h" 3 4
                                                 ;


extern size_t strspn (const char *__s, const char *__accept)
     
# 285 "/usr/include/string.h"
    1 1 1
# 285 "/usr/include/string.h" 3 4
                                                 ;
# 310 "/usr/include/string.h" 3 4
extern char *strpbrk (const char *__s, const char *__accept)
     
# 311 "/usr/include/string.h"
    1 1 1
# 311 "/usr/include/string.h" 3 4
                                                 ;
# 337 "/usr/include/string.h" 3 4
extern char *strstr (const char *__haystack, const char *__needle)
     
# 338 "/usr/include/string.h"
    1 1 1
# 338 "/usr/include/string.h" 3 4
                                                 ;




extern char *strtok (char *__restrict __s, const char *__restrict __delim)
     
# 344 "/usr/include/string.h"
    1 1
# 344 "/usr/include/string.h" 3 4
                           ;




extern char *__strtok_r (char *__restrict __s,
    const char *__restrict __delim,
    char **__restrict __save_ptr)
     
# 352 "/usr/include/string.h"
    1 1
# 352 "/usr/include/string.h" 3 4
                              ;

extern char *strtok_r (char *__restrict __s, const char *__restrict __delim,
         char **__restrict __save_ptr)
     
# 356 "/usr/include/string.h"
    1 1
# 356 "/usr/include/string.h" 3 4
                              ;
# 368 "/usr/include/string.h" 3 4
extern char *strcasestr (const char *__haystack, const char *__needle)
     
# 369 "/usr/include/string.h"
    1 1 1
# 369 "/usr/include/string.h" 3 4
                                                 ;







extern void *memmem (const void *__haystack, size_t __haystacklen,
       const void *__needle, size_t __needlelen)
     
# 379 "/usr/include/string.h"
    1 1 1
# 379 "/usr/include/string.h" 3 4
                                                 ;



extern void *__mempcpy (void *__restrict __dest,
   const void *__restrict __src, size_t __n)
     
# 385 "/usr/include/string.h"
    1 1
# 385 "/usr/include/string.h" 3 4
                              ;
extern void *mempcpy (void *__restrict __dest,
        const void *__restrict __src, size_t __n)
     
# 388 "/usr/include/string.h"
    1 1
# 388 "/usr/include/string.h" 3 4
                              ;





extern size_t strlen (const char *__s)
     
# 395 "/usr/include/string.h"
    1 1 1
# 395 "/usr/include/string.h" 3 4
                                              ;





extern size_t strnlen (const char *__string, size_t __maxlen)
     
# 402 "/usr/include/string.h"
    1 1 1
# 402 "/usr/include/string.h" 3 4
                                              ;





extern char *strerror (int __errnum) 
# 408 "/usr/include/string.h"
                                    1
# 408 "/usr/include/string.h" 3 4
                                           ;

# 433 "/usr/include/string.h" 3 4
extern char *strerror_r (int __errnum, char *__buf, size_t __buflen)
     
# 434 "/usr/include/string.h"
    1 1 
# 434 "/usr/include/string.h" 3 4
                                 ;





extern char *strerror_l (int __errnum, __locale_t __l) 
# 440 "/usr/include/string.h"
                                                      1
# 440 "/usr/include/string.h" 3 4
                                                             ;





extern void __bzero (void *__s, size_t __n) 
# 446 "/usr/include/string.h"
                                           1 1
# 446 "/usr/include/string.h" 3 4
                                                                  ;



extern void bcopy (const void *__src, void *__dest, size_t __n)
     
# 451 "/usr/include/string.h"
    1 1
# 451 "/usr/include/string.h" 3 4
                              ;


extern void bzero (void *__s, size_t __n) 
# 454 "/usr/include/string.h"
                                         1 1
# 454 "/usr/include/string.h" 3 4
                                                                ;


extern int bcmp (const void *__s1, const void *__s2, size_t __n)
     
# 458 "/usr/include/string.h"
    1 1 1
# 458 "/usr/include/string.h" 3 4
                                                 ;
# 484 "/usr/include/string.h" 3 4
extern char *index (const char *__s, int __c)
     
# 485 "/usr/include/string.h"
    1 1 1
# 485 "/usr/include/string.h" 3 4
                                              ;
# 512 "/usr/include/string.h" 3 4
extern char *rindex (const char *__s, int __c)
     
# 513 "/usr/include/string.h"
    1 1 1
# 513 "/usr/include/string.h" 3 4
                                              ;




extern int ffs (int __i) 
# 518 "/usr/include/string.h"
                        1 1
# 518 "/usr/include/string.h" 3 4
                                                           ;




extern int ffsl (long int __l) 
# 523 "/usr/include/string.h"
                              1 1
# 523 "/usr/include/string.h" 3 4
                                                                 ;
__extension__ extern int ffsll (long long int __ll)
     
# 525 "/usr/include/string.h"
    1 1
# 525 "/usr/include/string.h" 3 4
                                       ;



extern int strcasecmp (const char *__s1, const char *__s2)
     
# 530 "/usr/include/string.h"
    1 1 1
# 530 "/usr/include/string.h" 3 4
                                                 ;


extern int strncasecmp (const char *__s1, const char *__s2, size_t __n)
     
# 534 "/usr/include/string.h"
    1 1 1
# 534 "/usr/include/string.h" 3 4
                                                 ;





extern int strcasecmp_l (const char *__s1, const char *__s2,
    __locale_t __loc)
     
# 542 "/usr/include/string.h"
    1 1 1
# 542 "/usr/include/string.h" 3 4
                                                    ;

extern int strncasecmp_l (const char *__s1, const char *__s2,
     size_t __n, __locale_t __loc)
     
# 546 "/usr/include/string.h"
    1 1 1
# 546 "/usr/include/string.h" 3 4
                                                    ;





extern char *strsep (char **__restrict __stringp,
       const char *__restrict __delim)
     
# 554 "/usr/include/string.h"
    1 1
# 554 "/usr/include/string.h" 3 4
                              ;




extern char *strsignal (int __sig) 
# 559 "/usr/include/string.h"
                                  1
# 559 "/usr/include/string.h" 3 4
                                         ;


extern char *__stpcpy (char *__restrict __dest, const char *__restrict __src)
     
# 563 "/usr/include/string.h"
    1 1
# 563 "/usr/include/string.h" 3 4
                              ;
extern char *stpcpy (char *__restrict __dest, const char *__restrict __src)
     
# 565 "/usr/include/string.h"
    1 1
# 565 "/usr/include/string.h" 3 4
                              ;



extern char *__stpncpy (char *__restrict __dest,
   const char *__restrict __src, size_t __n)
     
# 571 "/usr/include/string.h"
    1 1
# 571 "/usr/include/string.h" 3 4
                              ;
extern char *stpncpy (char *__restrict __dest,
        const char *__restrict __src, size_t __n)
     
# 574 "/usr/include/string.h"
    1 1
# 574 "/usr/include/string.h" 3 4
                              ;




extern int strverscmp (const char *__s1, const char *__s2)
     
# 580 "/usr/include/string.h"
    1 1 1
# 580 "/usr/include/string.h" 3 4
                                                 ;


extern char *strfry (char *__string) 
# 583 "/usr/include/string.h"
                                    1 1
# 583 "/usr/include/string.h" 3 4
                                                           ;


extern void *memfrob (void *__s, size_t __n) 
# 586 "/usr/include/string.h"
                                            1 1
# 586 "/usr/include/string.h" 3 4
                                                                   ;
# 599 "/usr/include/string.h" 3 4
extern char *basename (const char *__filename) 
# 599 "/usr/include/string.h"
                                              1 1
# 599 "/usr/include/string.h" 3 4
                                                                     ;
# 658 "/usr/include/string.h" 3 4

# 166 "/home/libraskywalker/Projects/ModelRenamer/git-master/block-sha1/../git-compat-util.h" 2



# 1 "/usr/include/errno.h" 1 3 4
# 31 "/usr/include/errno.h" 3 4




# 1 "/usr/include/x86_64-linux-gnu/bits/errno.h" 1 3 4
# 24 "/usr/include/x86_64-linux-gnu/bits/errno.h" 3 4
# 1 "/usr/include/linux/errno.h" 1 3 4
# 1 "/usr/include/x86_64-linux-gnu/asm/errno.h" 1 3 4
# 1 "/usr/include/asm-generic/errno.h" 1 3 4



# 1 "/usr/include/asm-generic/errno-base.h" 1 3 4
# 5 "/usr/include/asm-generic/errno.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/asm/errno.h" 2 3 4
# 1 "/usr/include/linux/errno.h" 2 3 4
# 25 "/usr/include/x86_64-linux-gnu/bits/errno.h" 2 3 4
# 50 "/usr/include/x86_64-linux-gnu/bits/errno.h" 3 4
extern int *__errno_location (void) 
# 50 "/usr/include/x86_64-linux-gnu/bits/errno.h"
                                   1 1
# 50 "/usr/include/x86_64-linux-gnu/bits/errno.h" 3 4
                                                                      ;
# 36 "/usr/include/errno.h" 2 3 4
# 54 "/usr/include/errno.h" 3 4
extern char *program_invocation_name, *program_invocation_short_name;




# 68 "/usr/include/errno.h" 3 4
typedef int error_t;
# 170 "/home/libraskywalker/Projects/ModelRenamer/git-master/block-sha1/../git-compat-util.h" 2
# 1 "/usr/lib/gcc/x86_64-linux-gnu/5/include-fixed/limits.h" 1 3 4
# 34 "/usr/lib/gcc/x86_64-linux-gnu/5/include-fixed/limits.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/5/include-fixed/syslimits.h" 1 3 4






# 1 "/usr/lib/gcc/x86_64-linux-gnu/5/include-fixed/limits.h" 1 3 4
# 168 "/usr/lib/gcc/x86_64-linux-gnu/5/include-fixed/limits.h" 3 4
# 1 "/usr/include/limits.h" 1 3 4
# 143 "/usr/include/limits.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/posix1_lim.h" 1 3 4
# 160 "/usr/include/x86_64-linux-gnu/bits/posix1_lim.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/local_lim.h" 1 3 4
# 38 "/usr/include/x86_64-linux-gnu/bits/local_lim.h" 3 4
# 1 "/usr/include/linux/limits.h" 1 3 4
# 39 "/usr/include/x86_64-linux-gnu/bits/local_lim.h" 2 3 4
# 161 "/usr/include/x86_64-linux-gnu/bits/posix1_lim.h" 2 3 4
# 144 "/usr/include/limits.h" 2 3 4



# 1 "/usr/include/x86_64-linux-gnu/bits/posix2_lim.h" 1 3 4
# 148 "/usr/include/limits.h" 2 3 4



# 1 "/usr/include/x86_64-linux-gnu/bits/xopen_lim.h" 1 3 4
# 33 "/usr/include/x86_64-linux-gnu/bits/xopen_lim.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/stdio_lim.h" 1 3 4
# 34 "/usr/include/x86_64-linux-gnu/bits/xopen_lim.h" 2 3 4
# 152 "/usr/include/limits.h" 2 3 4
# 169 "/usr/lib/gcc/x86_64-linux-gnu/5/include-fixed/limits.h" 2 3 4
# 8 "/usr/lib/gcc/x86_64-linux-gnu/5/include-fixed/syslimits.h" 2 3 4
# 35 "/usr/lib/gcc/x86_64-linux-gnu/5/include-fixed/limits.h" 2 3 4
# 171 "/home/libraskywalker/Projects/ModelRenamer/git-master/block-sha1/../git-compat-util.h" 2




# 1 "/usr/include/dirent.h" 1 3 4
# 27 "/usr/include/dirent.h" 3 4

# 61 "/usr/include/dirent.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/dirent.h" 1 3 4
# 22 "/usr/include/x86_64-linux-gnu/bits/dirent.h" 3 4
struct dirent
  {




    __ino64_t d_ino;
    __off64_t d_off;

    unsigned short int d_reclen;
    unsigned char d_type;
    char d_name[256];
  };


struct dirent64
  {
    __ino64_t d_ino;
    __off64_t d_off;
    unsigned short int d_reclen;
    unsigned char d_type;
    char d_name[256];
  };
# 62 "/usr/include/dirent.h" 2 3 4
# 97 "/usr/include/dirent.h" 3 4
enum
  {
    DT_UNKNOWN = 0,

    DT_FIFO = 1,

    DT_CHR = 2,

    DT_DIR = 4,

    DT_BLK = 6,

    DT_REG = 8,

    DT_LNK = 10,

    DT_SOCK = 12,

    DT_WHT = 14

  };
# 127 "/usr/include/dirent.h" 3 4
typedef struct __dirstream DIR;






extern DIR *opendir (const char *__name) 
# 134 "/usr/include/dirent.h"
                                        1
# 134 "/usr/include/dirent.h" 3 4
                                                       ;






extern DIR *fdopendir (int __fd);







extern int closedir (DIR *__dirp) 
# 149 "/usr/include/dirent.h"
                                 1
# 149 "/usr/include/dirent.h" 3 4
                                                ;
# 165 "/usr/include/dirent.h" 3 4
extern struct dirent *readdir (DIR *__dirp) __asm__
     
# 166 "/usr/include/dirent.h"
    1
# 166 "/usr/include/dirent.h" 3 4
                   ;






extern struct dirent64 *readdir64 (DIR *__dirp) 
# 173 "/usr/include/dirent.h"
                                               1
# 173 "/usr/include/dirent.h" 3 4
                                                              ;
# 189 "/usr/include/dirent.h" 3 4
extern int readdir_r (DIR *__restrict __dirp, struct dirent *__restrict __entry, struct dirent **__restrict __result) __asm__



                      
# 193 "/usr/include/dirent.h"
                     1
# 193 "/usr/include/dirent.h" 3 4
                                          ;






extern int readdir64_r (DIR *__restrict __dirp,
   struct dirent64 *__restrict __entry,
   struct dirent64 **__restrict __result)
     
# 203 "/usr/include/dirent.h"
    1
# 203 "/usr/include/dirent.h" 3 4
                         ;




extern void rewinddir (DIR *__dirp) 
# 208 "/usr/include/dirent.h"
                                   1 1
# 208 "/usr/include/dirent.h" 3 4
                                                          ;





extern void seekdir (DIR *__dirp, long int __pos) 
# 214 "/usr/include/dirent.h"
                                                 1 1
# 214 "/usr/include/dirent.h" 3 4
                                                                        ;


extern long int telldir (DIR *__dirp) 
# 217 "/usr/include/dirent.h"
                                     1 1
# 217 "/usr/include/dirent.h" 3 4
                                                            ;





extern int dirfd (DIR *__dirp) 
# 223 "/usr/include/dirent.h"
                              1 1
# 223 "/usr/include/dirent.h" 3 4
                                                     ;
# 244 "/usr/include/dirent.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" 1 3 4
# 245 "/usr/include/dirent.h" 2 3 4
# 262 "/usr/include/dirent.h" 3 4
extern int scandir (const char *__restrict __dir, struct dirent ***__restrict __namelist, int (*__selector) (const struct dirent *), int (*__cmp) (const struct dirent **, const struct dirent **)) __asm__





                    
# 268 "/usr/include/dirent.h"
                   1
# 268 "/usr/include/dirent.h" 3 4
                                     ;
# 277 "/usr/include/dirent.h" 3 4
extern int scandir64 (const char *__restrict __dir,
        struct dirent64 ***__restrict __namelist,
        int (*__selector) (const struct dirent64 *),
        int (*__cmp) (const struct dirent64 **,
        const struct dirent64 **))
     
# 282 "/usr/include/dirent.h"
    1
# 282 "/usr/include/dirent.h" 3 4
                      ;
# 300 "/usr/include/dirent.h" 3 4
extern int scandirat (int __dfd, const char *__restrict __dir, struct dirent ***__restrict __namelist, int (*__selector) (const struct dirent *), int (*__cmp) (const struct dirent **, const struct dirent **)) __asm__





                      
# 306 "/usr/include/dirent.h"
                     1
# 306 "/usr/include/dirent.h" 3 4
                                       ;







extern int scandirat64 (int __dfd, const char *__restrict __dir,
   struct dirent64 ***__restrict __namelist,
   int (*__selector) (const struct dirent64 *),
   int (*__cmp) (const struct dirent64 **,
          const struct dirent64 **))
     
# 319 "/usr/include/dirent.h"
    1
# 319 "/usr/include/dirent.h" 3 4
                      ;
# 329 "/usr/include/dirent.h" 3 4
extern int alphasort (const struct dirent **__e1, const struct dirent **__e2) __asm__ 
# 329 "/usr/include/dirent.h"
          1


                   1 1
# 332 "/usr/include/dirent.h" 3 4
                                                       ;






extern int alphasort64 (const struct dirent64 **__e1,
   const struct dirent64 **__e2)
     
# 341 "/usr/include/dirent.h"
    1 1 1
# 341 "/usr/include/dirent.h" 3 4
                                                 ;
# 358 "/usr/include/dirent.h" 3 4
extern __ssize_t getdirentries (int __fd, char *__restrict __buf, size_t __nbytes, __off64_t *__restrict __basep) __asm__ 
# 358 "/usr/include/dirent.h"
                1



                      1
# 362 "/usr/include/dirent.h" 3 4
                                       ;






extern __ssize_t getdirentries64 (int __fd, char *__restrict __buf,
      size_t __nbytes,
      __off64_t *__restrict __basep)
     
# 372 "/usr/include/dirent.h"
    1 1
# 372 "/usr/include/dirent.h" 3 4
                              ;
# 384 "/usr/include/dirent.h" 3 4
extern int versionsort (const struct dirent **__e1, const struct dirent **__e2) __asm__ 
# 384 "/usr/include/dirent.h"
          1



     1 1
# 388 "/usr/include/dirent.h" 3 4
                                         ;






extern int versionsort64 (const struct dirent64 **__e1,
     const struct dirent64 **__e2)
     
# 397 "/usr/include/dirent.h"
    1 1 1
# 397 "/usr/include/dirent.h" 3 4
                                                 ;




# 176 "/home/libraskywalker/Projects/ModelRenamer/git-master/block-sha1/../git-compat-util.h" 2
# 1 "/usr/include/x86_64-linux-gnu/sys/time.h" 1 3 4
# 25 "/usr/include/x86_64-linux-gnu/sys/time.h" 3 4
# 1 "/usr/include/time.h" 1 3 4
# 26 "/usr/include/x86_64-linux-gnu/sys/time.h" 2 3 4

# 1 "/usr/include/x86_64-linux-gnu/bits/time.h" 1 3 4
# 28 "/usr/include/x86_64-linux-gnu/sys/time.h" 2 3 4
# 37 "/usr/include/x86_64-linux-gnu/sys/time.h" 3 4

# 55 "/usr/include/x86_64-linux-gnu/sys/time.h" 3 4
struct timezone
  {
    int tz_minuteswest;
    int tz_dsttime;
  };

typedef struct timezone *__restrict __timezone_ptr_t;
# 71 "/usr/include/x86_64-linux-gnu/sys/time.h" 3 4
extern int gettimeofday (struct timeval *__restrict __tv,
    __timezone_ptr_t __tz) 
# 72 "/usr/include/x86_64-linux-gnu/sys/time.h"
                          1 1
# 72 "/usr/include/x86_64-linux-gnu/sys/time.h" 3 4
                                                 ;




extern int settimeofday (const struct timeval *__tv,
    const struct timezone *__tz)
     
# 79 "/usr/include/x86_64-linux-gnu/sys/time.h"
    1
# 79 "/usr/include/x86_64-linux-gnu/sys/time.h" 3 4
           ;





extern int adjtime (const struct timeval *__delta,
      struct timeval *__olddelta) 
# 86 "/usr/include/x86_64-linux-gnu/sys/time.h"
                                 1
# 86 "/usr/include/x86_64-linux-gnu/sys/time.h" 3 4
                                        ;




enum __itimer_which
  {

    ITIMER_REAL = 0,


    ITIMER_VIRTUAL = 1,



    ITIMER_PROF = 2

  };



struct itimerval
  {

    struct timeval it_interval;

    struct timeval it_value;
  };




typedef enum __itimer_which __itimer_which_t;






extern int getitimer (__itimer_which_t __which,
        struct itimerval *__value) 
# 126 "/usr/include/x86_64-linux-gnu/sys/time.h"
                                  1
# 126 "/usr/include/x86_64-linux-gnu/sys/time.h" 3 4
                                         ;




extern int setitimer (__itimer_which_t __which,
        const struct itimerval *__restrict __new,
        struct itimerval *__restrict __old) 
# 133 "/usr/include/x86_64-linux-gnu/sys/time.h"
                                           1
# 133 "/usr/include/x86_64-linux-gnu/sys/time.h" 3 4
                                                  ;




extern int utimes (const char *__file, const struct timeval __tvp[2])
     
# 139 "/usr/include/x86_64-linux-gnu/sys/time.h"
    1 1
# 139 "/usr/include/x86_64-linux-gnu/sys/time.h" 3 4
                           ;



extern int lutimes (const char *__file, const struct timeval __tvp[2])
     
# 144 "/usr/include/x86_64-linux-gnu/sys/time.h"
    1 1
# 144 "/usr/include/x86_64-linux-gnu/sys/time.h" 3 4
                           ;


extern int futimes (int __fd, const struct timeval __tvp[2]) 
# 147 "/usr/include/x86_64-linux-gnu/sys/time.h"
                                                            1
# 147 "/usr/include/x86_64-linux-gnu/sys/time.h" 3 4
                                                                   ;






extern int futimesat (int __fd, const char *__file,
        const struct timeval __tvp[2]) 
# 155 "/usr/include/x86_64-linux-gnu/sys/time.h"
                                      1
# 155 "/usr/include/x86_64-linux-gnu/sys/time.h" 3 4
                                             ;
# 189 "/usr/include/x86_64-linux-gnu/sys/time.h" 3 4

# 177 "/home/libraskywalker/Projects/ModelRenamer/git-master/block-sha1/../git-compat-util.h" 2
# 1 "/usr/include/time.h" 1 3 4
# 29 "/usr/include/time.h" 3 4








# 1 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" 1 3 4
# 38 "/usr/include/time.h" 2 3 4



# 1 "/usr/include/x86_64-linux-gnu/bits/time.h" 1 3 4
# 88 "/usr/include/x86_64-linux-gnu/bits/time.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/timex.h" 1 3 4
# 25 "/usr/include/x86_64-linux-gnu/bits/timex.h" 3 4
struct timex
{
  unsigned int modes;
  __syscall_slong_t offset;
  __syscall_slong_t freq;
  __syscall_slong_t maxerror;
  __syscall_slong_t esterror;
  int status;
  __syscall_slong_t constant;
  __syscall_slong_t precision;
  __syscall_slong_t tolerance;
  struct timeval time;
  __syscall_slong_t tick;
  __syscall_slong_t ppsfreq;
  __syscall_slong_t jitter;
  int shift;
  __syscall_slong_t stabil;
  __syscall_slong_t jitcnt;
  __syscall_slong_t calcnt;
  __syscall_slong_t errcnt;
  __syscall_slong_t stbcnt;

  int tai;


  int :32; int :32; int :32; int :32;
  int :32; int :32; int :32; int :32;
  int :32; int :32; int :32;
};
# 89 "/usr/include/x86_64-linux-gnu/bits/time.h" 2 3 4




extern int clock_adjtime (__clockid_t __clock_id, struct timex *__utx) 
# 93 "/usr/include/x86_64-linux-gnu/bits/time.h"
                                                                      1
# 93 "/usr/include/x86_64-linux-gnu/bits/time.h" 3 4
                                                                             ;


# 42 "/usr/include/time.h" 2 3 4
# 131 "/usr/include/time.h" 3 4


struct tm
{
  int tm_sec;
  int tm_min;
  int tm_hour;
  int tm_mday;
  int tm_mon;
  int tm_year;
  int tm_wday;
  int tm_yday;
  int tm_isdst;


  long int tm_gmtoff;
  const char *tm_zone;




};








struct itimerspec
  {
    struct timespec it_interval;
    struct timespec it_value;
  };


struct sigevent;
# 186 "/usr/include/time.h" 3 4



extern clock_t clock (void) 
# 189 "/usr/include/time.h"
                           1
# 189 "/usr/include/time.h" 3 4
                                  ;


extern time_t time (time_t *__timer) 
# 192 "/usr/include/time.h"
                                    1
# 192 "/usr/include/time.h" 3 4
                                           ;


extern double difftime (time_t __time1, time_t __time0)
     
# 196 "/usr/include/time.h"
    1 1
# 196 "/usr/include/time.h" 3 4
                                       ;


extern time_t mktime (struct tm *__tp) 
# 199 "/usr/include/time.h"
                                      1
# 199 "/usr/include/time.h" 3 4
                                             ;





extern size_t strftime (char *__restrict __s, size_t __maxsize,
   const char *__restrict __format,
   const struct tm *__restrict __tp) 
# 207 "/usr/include/time.h"
                                    1
# 207 "/usr/include/time.h" 3 4
                                           ;





extern char *strptime (const char *__restrict __s,
         const char *__restrict __fmt, struct tm *__tp)
     
# 215 "/usr/include/time.h"
    1
# 215 "/usr/include/time.h" 3 4
           ;







extern size_t strftime_l (char *__restrict __s, size_t __maxsize,
     const char *__restrict __format,
     const struct tm *__restrict __tp,
     __locale_t __loc) 
# 226 "/usr/include/time.h"
                      1
# 226 "/usr/include/time.h" 3 4
                             ;



extern char *strptime_l (const char *__restrict __s,
    const char *__restrict __fmt, struct tm *__tp,
    __locale_t __loc) 
# 232 "/usr/include/time.h"
                     1
# 232 "/usr/include/time.h" 3 4
                            ;






extern struct tm *gmtime (const time_t *__timer) 
# 239 "/usr/include/time.h"
                                                1
# 239 "/usr/include/time.h" 3 4
                                                       ;



extern struct tm *localtime (const time_t *__timer) 
# 243 "/usr/include/time.h"
                                                   1
# 243 "/usr/include/time.h" 3 4
                                                          ;





extern struct tm *gmtime_r (const time_t *__restrict __timer,
       struct tm *__restrict __tp) 
# 250 "/usr/include/time.h"
                                  1
# 250 "/usr/include/time.h" 3 4
                                         ;



extern struct tm *localtime_r (const time_t *__restrict __timer,
          struct tm *__restrict __tp) 
# 255 "/usr/include/time.h"
                                     1
# 255 "/usr/include/time.h" 3 4
                                            ;





extern char *asctime (const struct tm *__tp) 
# 261 "/usr/include/time.h"
                                            1
# 261 "/usr/include/time.h" 3 4
                                                   ;


extern char *ctime (const time_t *__timer) 
# 264 "/usr/include/time.h"
                                          1
# 264 "/usr/include/time.h" 3 4
                                                 ;







extern char *asctime_r (const struct tm *__restrict __tp,
   char *__restrict __buf) 
# 273 "/usr/include/time.h"
                          1
# 273 "/usr/include/time.h" 3 4
                                 ;


extern char *ctime_r (const time_t *__restrict __timer,
        char *__restrict __buf) 
# 277 "/usr/include/time.h"
                               1
# 277 "/usr/include/time.h" 3 4
                                      ;




extern char *__tzname[2];
extern int __daylight;
extern long int __timezone;




extern char *tzname[2];



extern void tzset (void) 
# 293 "/usr/include/time.h"
                        1
# 293 "/usr/include/time.h" 3 4
                               ;



extern int daylight;
extern long int timezone;





extern int stime (const time_t *__when) 
# 304 "/usr/include/time.h"
                                       1
# 304 "/usr/include/time.h" 3 4
                                              ;
# 319 "/usr/include/time.h" 3 4
extern time_t timegm (struct tm *__tp) 
# 319 "/usr/include/time.h"
                                      1
# 319 "/usr/include/time.h" 3 4
                                             ;


extern time_t timelocal (struct tm *__tp) 
# 322 "/usr/include/time.h"
                                         1
# 322 "/usr/include/time.h" 3 4
                                                ;


extern int dysize (int __year) 
# 325 "/usr/include/time.h"
                              1 1
# 325 "/usr/include/time.h" 3 4
                                                                  ;
# 334 "/usr/include/time.h" 3 4
extern int nanosleep (const struct timespec *__requested_time,
        struct timespec *__remaining);



extern int clock_getres (clockid_t __clock_id, struct timespec *__res) 
# 339 "/usr/include/time.h"
                                                                      1
# 339 "/usr/include/time.h" 3 4
                                                                             ;


extern int clock_gettime (clockid_t __clock_id, struct timespec *__tp) 
# 342 "/usr/include/time.h"
                                                                      1
# 342 "/usr/include/time.h" 3 4
                                                                             ;


extern int clock_settime (clockid_t __clock_id, const struct timespec *__tp)
     
# 346 "/usr/include/time.h"
    1
# 346 "/usr/include/time.h" 3 4
           ;






extern int clock_nanosleep (clockid_t __clock_id, int __flags,
       const struct timespec *__req,
       struct timespec *__rem);


extern int clock_getcpuclockid (pid_t __pid, clockid_t *__clock_id) 
# 358 "/usr/include/time.h"
                                                                   1
# 358 "/usr/include/time.h" 3 4
                                                                          ;




extern int timer_create (clockid_t __clock_id,
    struct sigevent *__restrict __evp,
    timer_t *__restrict __timerid) 
# 365 "/usr/include/time.h"
                                  1
# 365 "/usr/include/time.h" 3 4
                                         ;


extern int timer_delete (timer_t __timerid) 
# 368 "/usr/include/time.h"
                                           1
# 368 "/usr/include/time.h" 3 4
                                                  ;


extern int timer_settime (timer_t __timerid, int __flags,
     const struct itimerspec *__restrict __value,
     struct itimerspec *__restrict __ovalue) 
# 373 "/usr/include/time.h"
                                            1
# 373 "/usr/include/time.h" 3 4
                                                   ;


extern int timer_gettime (timer_t __timerid, struct itimerspec *__value)
     
# 377 "/usr/include/time.h"
    1
# 377 "/usr/include/time.h" 3 4
           ;


extern int timer_getoverrun (timer_t __timerid) 
# 380 "/usr/include/time.h"
                                               1
# 380 "/usr/include/time.h" 3 4
                                                      ;





extern int timespec_get (struct timespec *__ts, int __base)
     
# 387 "/usr/include/time.h"
    1 1
# 387 "/usr/include/time.h" 3 4
                           ;
# 403 "/usr/include/time.h" 3 4
extern int getdate_err;
# 412 "/usr/include/time.h" 3 4
extern struct tm *getdate (const char *__string);
# 426 "/usr/include/time.h" 3 4
extern int getdate_r (const char *__restrict __string,
        struct tm *__restrict __resbufp);



# 178 "/home/libraskywalker/Projects/ModelRenamer/git-master/block-sha1/../git-compat-util.h" 2
# 1 "/usr/include/signal.h" 1 3 4
# 30 "/usr/include/signal.h" 3 4


# 1 "/usr/include/x86_64-linux-gnu/bits/sigset.h" 1 3 4
# 102 "/usr/include/x86_64-linux-gnu/bits/sigset.h" 3 4
extern int __sigismember (const __sigset_t *, int);
extern int __sigaddset (__sigset_t *, int);
extern int __sigdelset (__sigset_t *, int);
# 33 "/usr/include/signal.h" 2 3 4







typedef __sig_atomic_t sig_atomic_t;

# 57 "/usr/include/signal.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/signum.h" 1 3 4
# 58 "/usr/include/signal.h" 2 3 4
# 80 "/usr/include/signal.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/siginfo.h" 1 3 4
# 24 "/usr/include/x86_64-linux-gnu/bits/siginfo.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 25 "/usr/include/x86_64-linux-gnu/bits/siginfo.h" 2 3 4







typedef union sigval
  {
    int sival_int;
    void *sival_ptr;
  } sigval_t;
# 58 "/usr/include/x86_64-linux-gnu/bits/siginfo.h" 3 4
typedef __clock_t __sigchld_clock_t;



typedef struct
  {
    int si_signo;
    int si_errno;

    int si_code;

    union
      {
 int _pad[((128 / sizeof (int)) - 4)];


 struct
   {
     __pid_t si_pid;
     __uid_t si_uid;
   } _kill;


 struct
   {
     int si_tid;
     int si_overrun;
     sigval_t si_sigval;
   } _timer;


 struct
   {
     __pid_t si_pid;
     __uid_t si_uid;
     sigval_t si_sigval;
   } _rt;


 struct
   {
     __pid_t si_pid;
     __uid_t si_uid;
     int si_status;
     __sigchld_clock_t si_utime;
     __sigchld_clock_t si_stime;
   } _sigchld;


 struct
   {
     void *si_addr;
     short int si_addr_lsb;
     struct
       {
  void *_lower;
  void *_upper;
       } si_addr_bnd;
   } _sigfault;


 struct
   {
     long int si_band;
     int si_fd;
   } _sigpoll;


 struct
   {
     void *_call_addr;
     int _syscall;
     unsigned int _arch;
   } _sigsys;
      } _sifields;
  } siginfo_t ;
# 160 "/usr/include/x86_64-linux-gnu/bits/siginfo.h" 3 4
enum
{
  SI_ASYNCNL = -60,

  SI_TKILL = -6,

  SI_SIGIO,

  SI_ASYNCIO,

  SI_MESGQ,

  SI_TIMER,

  SI_QUEUE,

  SI_USER,

  SI_KERNEL = 0x80

};




enum
{
  ILL_ILLOPC = 1,

  ILL_ILLOPN,

  ILL_ILLADR,

  ILL_ILLTRP,

  ILL_PRVOPC,

  ILL_PRVREG,

  ILL_COPROC,

  ILL_BADSTK

};


enum
{
  FPE_INTDIV = 1,

  FPE_INTOVF,

  FPE_FLTDIV,

  FPE_FLTOVF,

  FPE_FLTUND,

  FPE_FLTRES,

  FPE_FLTINV,

  FPE_FLTSUB

};


enum
{
  SEGV_MAPERR = 1,

  SEGV_ACCERR

};


enum
{
  BUS_ADRALN = 1,

  BUS_ADRERR,

  BUS_OBJERR,

  BUS_MCEERR_AR,

  BUS_MCEERR_AO

};




enum
{
  TRAP_BRKPT = 1,

  TRAP_TRACE

};




enum
{
  CLD_EXITED = 1,

  CLD_KILLED,

  CLD_DUMPED,

  CLD_TRAPPED,

  CLD_STOPPED,

  CLD_CONTINUED

};


enum
{
  POLL_IN = 1,

  POLL_OUT,

  POLL_MSG,

  POLL_ERR,

  POLL_PRI,

  POLL_HUP

};
# 320 "/usr/include/x86_64-linux-gnu/bits/siginfo.h" 3 4
typedef struct sigevent
  {
    sigval_t sigev_value;
    int sigev_signo;
    int sigev_notify;

    union
      {
 int _pad[((64 / sizeof (int)) - 4)];



 __pid_t _tid;

 struct
   {
     void (*_function) (sigval_t);
     pthread_attr_t *_attribute;
   } _sigev_thread;
      } _sigev_un;
  } sigevent_t;






enum
{
  SIGEV_SIGNAL = 0,

  SIGEV_NONE,

  SIGEV_THREAD,


  SIGEV_THREAD_ID = 4

};
# 81 "/usr/include/signal.h" 2 3 4




typedef void (*__sighandler_t) (int);




extern __sighandler_t __sysv_signal (int __sig, __sighandler_t __handler)
     
# 91 "/usr/include/signal.h"
    1
# 91 "/usr/include/signal.h" 3 4
           ;

extern __sighandler_t sysv_signal (int __sig, __sighandler_t __handler)
     
# 94 "/usr/include/signal.h"
    1
# 94 "/usr/include/signal.h" 3 4
           ;







extern __sighandler_t signal (int __sig, __sighandler_t __handler)
     
# 103 "/usr/include/signal.h"
    1
# 103 "/usr/include/signal.h" 3 4
           ;
# 114 "/usr/include/signal.h" 3 4





extern __sighandler_t bsd_signal (int __sig, __sighandler_t __handler)
     
# 120 "/usr/include/signal.h"
    1
# 120 "/usr/include/signal.h" 3 4
           ;






extern int kill (__pid_t __pid, int __sig) 
# 127 "/usr/include/signal.h"
                                          1
# 127 "/usr/include/signal.h" 3 4
                                                 ;






extern int killpg (__pid_t __pgrp, int __sig) 
# 134 "/usr/include/signal.h"
                                             1
# 134 "/usr/include/signal.h" 3 4
                                                    ;




extern int raise (int __sig) 
# 139 "/usr/include/signal.h"
                            1
# 139 "/usr/include/signal.h" 3 4
                                   ;




extern __sighandler_t ssignal (int __sig, __sighandler_t __handler)
     
# 145 "/usr/include/signal.h"
    1
# 145 "/usr/include/signal.h" 3 4
           ;
extern int gsignal (int __sig) 
# 146 "/usr/include/signal.h"
                              1
# 146 "/usr/include/signal.h" 3 4
                                     ;




extern void psignal (int __sig, const char *__s);


extern void psiginfo (const siginfo_t *__pinfo, const char *__s);
# 168 "/usr/include/signal.h" 3 4
extern int sigpause (int __sig) __asm__;
# 187 "/usr/include/signal.h" 3 4
extern int sigblock (int __mask) 
# 187 "/usr/include/signal.h"
                                1 1
# 187 "/usr/include/signal.h" 3 4
                                                                ;


extern int sigsetmask (int __mask) 
# 190 "/usr/include/signal.h"
                                  1 1
# 190 "/usr/include/signal.h" 3 4
                                                                  ;


extern int siggetmask (void) 
# 193 "/usr/include/signal.h"
                            1 1
# 193 "/usr/include/signal.h" 3 4
                                                            ;
# 202 "/usr/include/signal.h" 3 4
typedef __sighandler_t sighandler_t;




typedef __sighandler_t sig_t;





extern int sigemptyset (sigset_t *__set) 
# 213 "/usr/include/signal.h"
                                        1 1
# 213 "/usr/include/signal.h" 3 4
                                                               ;


extern int sigfillset (sigset_t *__set) 
# 216 "/usr/include/signal.h"
                                       1 1
# 216 "/usr/include/signal.h" 3 4
                                                              ;


extern int sigaddset (sigset_t *__set, int __signo) 
# 219 "/usr/include/signal.h"
                                                   1 1
# 219 "/usr/include/signal.h" 3 4
                                                                          ;


extern int sigdelset (sigset_t *__set, int __signo) 
# 222 "/usr/include/signal.h"
                                                   1 1
# 222 "/usr/include/signal.h" 3 4
                                                                          ;


extern int sigismember (const sigset_t *__set, int __signo)
     
# 226 "/usr/include/signal.h"
    1 1
# 226 "/usr/include/signal.h" 3 4
                           ;



extern int sigisemptyset (const sigset_t *__set) 
# 230 "/usr/include/signal.h"
                                                1 1
# 230 "/usr/include/signal.h" 3 4
                                                                       ;


extern int sigandset (sigset_t *__set, const sigset_t *__left,
        const sigset_t *__right) 
# 234 "/usr/include/signal.h"
                                1 1
# 234 "/usr/include/signal.h" 3 4
                                                             ;


extern int sigorset (sigset_t *__set, const sigset_t *__left,
       const sigset_t *__right) 
# 238 "/usr/include/signal.h"
                               1 1
# 238 "/usr/include/signal.h" 3 4
                                                            ;




# 1 "/usr/include/x86_64-linux-gnu/bits/sigaction.h" 1 3 4
# 24 "/usr/include/x86_64-linux-gnu/bits/sigaction.h" 3 4
struct sigaction
  {


    union
      {

 __sighandler_t sa_handler;

 void (*sa_sigaction) (int, siginfo_t *, void *);
      }
    __sigaction_handler;







    __sigset_t sa_mask;


    int sa_flags;


    void (*sa_restorer) (void);
  };
# 244 "/usr/include/signal.h" 2 3 4


extern int sigprocmask (int __how, const sigset_t *__restrict __set,
   sigset_t *__restrict __oset) 
# 247 "/usr/include/signal.h"
                               1
# 247 "/usr/include/signal.h" 3 4
                                      ;






extern int sigsuspend (const sigset_t *__set) 
# 254 "/usr/include/signal.h"
                                             1
# 254 "/usr/include/signal.h" 3 4
                                                            ;


extern int sigaction (int __sig, const struct sigaction *__restrict __act,
        struct sigaction *__restrict __oact) 
# 258 "/usr/include/signal.h"
                                            1
# 258 "/usr/include/signal.h" 3 4
                                                   ;


extern int sigpending (sigset_t *__set) 
# 261 "/usr/include/signal.h"
                                       1 1
# 261 "/usr/include/signal.h" 3 4
                                                              ;






extern int sigwait (const sigset_t *__restrict __set, int *__restrict __sig)
     
# 269 "/usr/include/signal.h"
    1
# 269 "/usr/include/signal.h" 3 4
                      ;






extern int sigwaitinfo (const sigset_t *__restrict __set,
   siginfo_t *__restrict __info) 
# 277 "/usr/include/signal.h"
                                1
# 277 "/usr/include/signal.h" 3 4
                                               ;






extern int sigtimedwait (const sigset_t *__restrict __set,
    siginfo_t *__restrict __info,
    const struct timespec *__restrict __timeout)
     
# 287 "/usr/include/signal.h"
    1
# 287 "/usr/include/signal.h" 3 4
                   ;



extern int sigqueue (__pid_t __pid, int __sig, const union sigval __val)
     
# 292 "/usr/include/signal.h"
    1
# 292 "/usr/include/signal.h" 3 4
           ;
# 301 "/usr/include/signal.h" 3 4
extern const char *const _sys_siglist[65];
extern const char *const sys_siglist[65];



# 1 "/usr/include/x86_64-linux-gnu/bits/sigcontext.h" 1 3 4
# 29 "/usr/include/x86_64-linux-gnu/bits/sigcontext.h" 3 4
struct _fpx_sw_bytes
{
  __uint32_t magic1;
  __uint32_t extended_size;
  __uint64_t xstate_bv;
  __uint32_t xstate_size;
  __uint32_t padding[7];
};

struct _fpreg
{
  unsigned short significand[4];
  unsigned short exponent;
};

struct _fpxreg
{
  unsigned short significand[4];
  unsigned short exponent;
  unsigned short padding[3];
};

struct _xmmreg
{
  __uint32_t element[4];
};
# 121 "/usr/include/x86_64-linux-gnu/bits/sigcontext.h" 3 4
struct _fpstate
{

  __uint16_t cwd;
  __uint16_t swd;
  __uint16_t ftw;
  __uint16_t fop;
  __uint64_t rip;
  __uint64_t rdp;
  __uint32_t mxcsr;
  __uint32_t mxcr_mask;
  struct _fpxreg _st[8];
  struct _xmmreg _xmm[16];
  __uint32_t padding[24];
};

struct sigcontext
{
  __uint64_t r8;
  __uint64_t r9;
  __uint64_t r10;
  __uint64_t r11;
  __uint64_t r12;
  __uint64_t r13;
  __uint64_t r14;
  __uint64_t r15;
  __uint64_t rdi;
  __uint64_t rsi;
  __uint64_t rbp;
  __uint64_t rbx;
  __uint64_t rdx;
  __uint64_t rax;
  __uint64_t rcx;
  __uint64_t rsp;
  __uint64_t rip;
  __uint64_t eflags;
  unsigned short cs;
  unsigned short gs;
  unsigned short fs;
  unsigned short __pad0;
  __uint64_t err;
  __uint64_t trapno;
  __uint64_t oldmask;
  __uint64_t cr2;
  __extension__ union
    {
      struct _fpstate * fpstate;
      __uint64_t __fpstate_word;
    };
  __uint64_t __reserved1 [8];
};



struct _xsave_hdr
{
  __uint64_t xstate_bv;
  __uint64_t reserved1[2];
  __uint64_t reserved2[5];
};

struct _ymmh_state
{
  __uint32_t ymmh_space[64];
};

struct _xstate
{
  struct _fpstate fpstate;
  struct _xsave_hdr xstate_hdr;
  struct _ymmh_state ymmh;
};
# 307 "/usr/include/signal.h" 2 3 4


extern int sigreturn (struct sigcontext *__scp) 
# 309 "/usr/include/signal.h"
                                               1
# 309 "/usr/include/signal.h" 3 4
                                                      ;






# 1 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" 1 3 4
# 317 "/usr/include/signal.h" 2 3 4




extern int siginterrupt (int __sig, int __interrupt) 
# 321 "/usr/include/signal.h"
                                                    1
# 321 "/usr/include/signal.h" 3 4
                                                           ;

# 1 "/usr/include/x86_64-linux-gnu/bits/sigstack.h" 1 3 4
# 25 "/usr/include/x86_64-linux-gnu/bits/sigstack.h" 3 4
struct sigstack
  {
    void *ss_sp;
    int ss_onstack;
  };



enum
{
  SS_ONSTACK = 1,

  SS_DISABLE

};
# 49 "/usr/include/x86_64-linux-gnu/bits/sigstack.h" 3 4
typedef struct sigaltstack
  {
    void *ss_sp;
    int ss_flags;
    size_t ss_size;
  } stack_t;
# 324 "/usr/include/signal.h" 2 3 4


# 1 "/usr/include/x86_64-linux-gnu/sys/ucontext.h" 1 3 4
# 22 "/usr/include/x86_64-linux-gnu/sys/ucontext.h" 3 4
# 1 "/usr/include/signal.h" 1 3 4
# 23 "/usr/include/x86_64-linux-gnu/sys/ucontext.h" 2 3 4
# 31 "/usr/include/x86_64-linux-gnu/sys/ucontext.h" 3 4
__extension__ typedef long long int greg_t;





typedef greg_t gregset_t[23];



enum
{
  REG_R8 = 0,

  REG_R9,

  REG_R10,

  REG_R11,

  REG_R12,

  REG_R13,

  REG_R14,

  REG_R15,

  REG_RDI,

  REG_RSI,

  REG_RBP,

  REG_RBX,

  REG_RDX,

  REG_RAX,

  REG_RCX,

  REG_RSP,

  REG_RIP,

  REG_EFL,

  REG_CSGSFS,

  REG_ERR,

  REG_TRAPNO,

  REG_OLDMASK,

  REG_CR2

};


struct _libc_fpxreg
{
  unsigned short int significand[4];
  unsigned short int exponent;
  unsigned short int padding[3];
};

struct _libc_xmmreg
{
  __uint32_t element[4];
};

struct _libc_fpstate
{

  __uint16_t cwd;
  __uint16_t swd;
  __uint16_t ftw;
  __uint16_t fop;
  __uint64_t rip;
  __uint64_t rdp;
  __uint32_t mxcsr;
  __uint32_t mxcr_mask;
  struct _libc_fpxreg _st[8];
  struct _libc_xmmreg _xmm[16];
  __uint32_t padding[24];
};


typedef struct _libc_fpstate *fpregset_t;


typedef struct
  {
    gregset_t gregs;

    fpregset_t fpregs;
    __extension__ unsigned long long __reserved1 [8];
} mcontext_t;


typedef struct ucontext
  {
    unsigned long int uc_flags;
    struct ucontext *uc_link;
    stack_t uc_stack;
    mcontext_t uc_mcontext;
    __sigset_t uc_sigmask;
    struct _libc_fpstate __fpregs_mem;
  } ucontext_t;
# 327 "/usr/include/signal.h" 2 3 4





extern int sigstack (struct sigstack *__ss, struct sigstack *__oss)
     
# 333 "/usr/include/signal.h"
    1 1
# 333 "/usr/include/signal.h" 3 4
                                    ;



extern int sigaltstack (const struct sigaltstack *__restrict __ss,
   struct sigaltstack *__restrict __oss) 
# 338 "/usr/include/signal.h"
                                        1
# 338 "/usr/include/signal.h" 3 4
                                               ;







extern int sighold (int __sig) 
# 346 "/usr/include/signal.h"
                              1
# 346 "/usr/include/signal.h" 3 4
                                     ;


extern int sigrelse (int __sig) 
# 349 "/usr/include/signal.h"
                               1
# 349 "/usr/include/signal.h" 3 4
                                      ;


extern int sigignore (int __sig) 
# 352 "/usr/include/signal.h"
                                1
# 352 "/usr/include/signal.h" 3 4
                                       ;


extern __sighandler_t sigset (int __sig, __sighandler_t __disp) 
# 355 "/usr/include/signal.h"
                                                               1
# 355 "/usr/include/signal.h" 3 4
                                                                      ;






# 1 "/usr/include/x86_64-linux-gnu/bits/sigthread.h" 1 3 4
# 30 "/usr/include/x86_64-linux-gnu/bits/sigthread.h" 3 4
extern int pthread_sigmask (int __how,
       const __sigset_t *__restrict __newmask,
       __sigset_t *__restrict __oldmask)
# 32 "/usr/include/x86_64-linux-gnu/bits/sigthread.h"
                                       1
# 32 "/usr/include/x86_64-linux-gnu/bits/sigthread.h" 3 4
                                              ;


extern int pthread_kill (pthread_t __threadid, int __signo) 
# 35 "/usr/include/x86_64-linux-gnu/bits/sigthread.h"
                                                           1
# 35 "/usr/include/x86_64-linux-gnu/bits/sigthread.h" 3 4
                                                                  ;



extern int pthread_sigqueue (pthread_t __threadid, int __signo,
        const union sigval __value) 
# 40 "/usr/include/x86_64-linux-gnu/bits/sigthread.h"
                                   1
# 40 "/usr/include/x86_64-linux-gnu/bits/sigthread.h" 3 4
                                          ;
# 363 "/usr/include/signal.h" 2 3 4






extern int __libc_current_sigrtmin (void) 
# 369 "/usr/include/signal.h"
                                         1
# 369 "/usr/include/signal.h" 3 4
                                                ;

extern int __libc_current_sigrtmax (void) 
# 371 "/usr/include/signal.h"
                                         1
# 371 "/usr/include/signal.h" 3 4
                                                ;




# 179 "/home/libraskywalker/Projects/ModelRenamer/git-master/block-sha1/../git-compat-util.h" 2
# 1 "/usr/include/assert.h" 1 3 4
# 66 "/usr/include/assert.h" 3 4



extern void __assert_fail (const char *__assertion, const char *__file,
      unsigned int __line, const char *__function)
     
# 71 "/usr/include/assert.h"
    1 1
# 71 "/usr/include/assert.h" 3 4
                                          ;


extern void __assert_perror_fail (int __errnum, const char *__file,
      unsigned int __line, const char *__function)
     
# 76 "/usr/include/assert.h"
    1 1
# 76 "/usr/include/assert.h" 3 4
                                          ;




extern void __assert (const char *__assertion, const char *__file, int __line)
     
# 82 "/usr/include/assert.h"
    1 1
# 82 "/usr/include/assert.h" 3 4
                                          ;



# 180 "/home/libraskywalker/Projects/ModelRenamer/git-master/block-sha1/../git-compat-util.h" 2
# 1 "/usr/include/regex.h" 1 3 4
# 34 "/usr/include/regex.h" 3 4
typedef long int s_reg_t;
typedef unsigned long int active_reg_t;






typedef unsigned long int reg_syntax_t;
# 181 "/usr/include/regex.h" 3 4
extern reg_syntax_t re_syntax_options;
# 308 "/usr/include/regex.h" 3 4
typedef enum
{

  REG_ENOSYS = -1,


  REG_NOERROR = 0,
  REG_NOMATCH,



  REG_BADPAT,
  REG_ECOLLATE,
  REG_ECTYPE,
  REG_EESCAPE,
  REG_ESUBREG,
  REG_EBRACK,
  REG_EPAREN,
  REG_EBRACE,
  REG_BADBR,
  REG_ERANGE,
  REG_ESPACE,
  REG_BADRPT,


  REG_EEND,
  REG_ESIZE,
  REG_ERPAREN
} reg_errcode_t;
# 357 "/usr/include/regex.h" 3 4
struct re_pattern_buffer
{



  unsigned char *buffer;


  unsigned long int allocated;


  unsigned long int used;


  reg_syntax_t syntax;




  char *fastmap;





  unsigned char * translate;


  size_t re_nsub;





  unsigned can_be_null : 1;
# 402 "/usr/include/regex.h" 3 4
  unsigned regs_allocated : 2;



  unsigned fastmap_accurate : 1;



  unsigned no_sub : 1;



  unsigned not_bol : 1;


  unsigned not_eol : 1;


  unsigned newline_anchor : 1;
};

typedef struct re_pattern_buffer regex_t;


typedef int regoff_t;





struct re_registers
{
  unsigned num_regs;
  regoff_t *start;
  regoff_t *end;
};
# 452 "/usr/include/regex.h" 3 4
typedef struct
{
  regoff_t rm_so;
  regoff_t rm_eo;
} regmatch_t;






extern reg_syntax_t re_set_syntax (reg_syntax_t __syntax);
# 473 "/usr/include/regex.h" 3 4
extern const char *re_compile_pattern (const char *__pattern, size_t __length,
           struct re_pattern_buffer *__buffer);





extern int re_compile_fastmap (struct re_pattern_buffer *__buffer);







extern int re_search (struct re_pattern_buffer *__buffer, const char *__string,
        int __length, int __start, int __range,
        struct re_registers *__regs);




extern int re_search_2 (struct re_pattern_buffer *__buffer,
   const char *__string1, int __length1,
   const char *__string2, int __length2, int __start,
   int __range, struct re_registers *__regs, int __stop);




extern int re_match (struct re_pattern_buffer *__buffer, const char *__string,
       int __length, int __start, struct re_registers *__regs);



extern int re_match_2 (struct re_pattern_buffer *__buffer,
         const char *__string1, int __length1,
         const char *__string2, int __length2, int __start,
         struct re_registers *__regs, int __stop);
# 526 "/usr/include/regex.h" 3 4
extern void re_set_registers (struct re_pattern_buffer *__buffer,
         struct re_registers *__regs,
         unsigned int __num_regs,
         regoff_t *__starts, regoff_t *__ends);
# 562 "/usr/include/regex.h" 3 4
extern int regcomp (regex_t *__restrict __preg,
      const char *__restrict __pattern,
      int __cflags);

extern int regexec (const regex_t *__restrict __preg,
      const char *__restrict __string, size_t __nmatch,
      regmatch_t __pmatch[__restrict],
      int __eflags);

extern size_t regerror (int __errcode, const regex_t *__restrict __preg,
   char *__restrict __errbuf, size_t __errbuf_size);

extern void regfree (regex_t *__preg);
# 181 "/home/libraskywalker/Projects/ModelRenamer/git-master/block-sha1/../git-compat-util.h" 2
# 1 "/usr/include/utime.h" 1 3 4
# 27 "/usr/include/utime.h" 3 4

# 37 "/usr/include/utime.h" 3 4
struct utimbuf
  {
    __time_t actime;
    __time_t modtime;
  };



extern int utime (const char *__file,
    const struct utimbuf *__file_times)
     
# 47 "/usr/include/utime.h"
    1 1
# 47 "/usr/include/utime.h" 3 4
                           ;


# 182 "/home/libraskywalker/Projects/ModelRenamer/git-master/block-sha1/../git-compat-util.h" 2
# 1 "/usr/include/syslog.h" 1 3 4
# 1 "/usr/include/x86_64-linux-gnu/sys/syslog.h" 1 3 4
# 40 "/usr/include/x86_64-linux-gnu/sys/syslog.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/syslog-path.h" 1 3 4
# 41 "/usr/include/x86_64-linux-gnu/sys/syslog.h" 2 3 4
# 169 "/usr/include/x86_64-linux-gnu/sys/syslog.h" 3 4






extern void closelog (void);





extern void openlog (const char *__ident, int __option, int __facility);


extern int setlogmask (int __mask) 
# 184 "/usr/include/x86_64-linux-gnu/sys/syslog.h"
                                  1
# 184 "/usr/include/x86_64-linux-gnu/sys/syslog.h" 3 4
                                         ;





extern void syslog (int __pri, const char *__fmt, ...)
     
# 191 "/usr/include/x86_64-linux-gnu/sys/syslog.h"
    1
# 191 "/usr/include/x86_64-linux-gnu/sys/syslog.h" 3 4
                                                   ;
# 200 "/usr/include/x86_64-linux-gnu/sys/syslog.h" 3 4
extern void vsyslog (int __pri, const char *__fmt, __gnuc_va_list __ap)
     
# 201 "/usr/include/x86_64-linux-gnu/sys/syslog.h"
    1
# 201 "/usr/include/x86_64-linux-gnu/sys/syslog.h" 3 4
                                                   ;
# 213 "/usr/include/x86_64-linux-gnu/sys/syslog.h" 3 4

# 1 "/usr/include/syslog.h" 2 3 4
# 183 "/home/libraskywalker/Projects/ModelRenamer/git-master/block-sha1/../git-compat-util.h" 2

# 1 "/usr/include/x86_64-linux-gnu/sys/poll.h" 1 3 4
# 25 "/usr/include/x86_64-linux-gnu/sys/poll.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/poll.h" 1 3 4
# 26 "/usr/include/x86_64-linux-gnu/sys/poll.h" 2 3 4


# 1 "/usr/include/x86_64-linux-gnu/bits/sigset.h" 1 3 4
# 29 "/usr/include/x86_64-linux-gnu/sys/poll.h" 2 3 4







typedef unsigned long int nfds_t;


struct pollfd
  {
    int fd;
    short int events;
    short int revents;
  };



# 57 "/usr/include/x86_64-linux-gnu/sys/poll.h" 3 4
extern int poll (struct pollfd *__fds, nfds_t __nfds, int __timeout);
# 66 "/usr/include/x86_64-linux-gnu/sys/poll.h" 3 4
extern int ppoll (struct pollfd *__fds, nfds_t __nfds,
    const struct timespec *__timeout,
    const __sigset_t *__ss);



# 185 "/home/libraskywalker/Projects/ModelRenamer/git-master/block-sha1/../git-compat-util.h" 2
# 201 "/home/libraskywalker/Projects/ModelRenamer/git-master/block-sha1/../git-compat-util.h"
# 1 "/usr/include/x86_64-linux-gnu/sys/utsname.h" 1 3 4
# 27 "/usr/include/x86_64-linux-gnu/sys/utsname.h" 3 4


# 1 "/usr/include/x86_64-linux-gnu/bits/utsname.h" 1 3 4
# 30 "/usr/include/x86_64-linux-gnu/sys/utsname.h" 2 3 4
# 48 "/usr/include/x86_64-linux-gnu/sys/utsname.h" 3 4
struct utsname
  {

    char sysname[65];


    char nodename[65];


    char release[65];

    char version[65];


    char machine[65];




    char domainname[65];




  };
# 81 "/usr/include/x86_64-linux-gnu/sys/utsname.h" 3 4
extern int uname (struct utsname *__name) 
# 81 "/usr/include/x86_64-linux-gnu/sys/utsname.h"
                                         1
# 81 "/usr/include/x86_64-linux-gnu/sys/utsname.h" 3 4
                                                ;



# 202 "/home/libraskywalker/Projects/ModelRenamer/git-master/block-sha1/../git-compat-util.h" 2
# 1 "/usr/include/x86_64-linux-gnu/sys/wait.h" 1 3 4
# 27 "/usr/include/x86_64-linux-gnu/sys/wait.h" 3 4

# 102 "/usr/include/x86_64-linux-gnu/sys/wait.h" 3 4
extern __pid_t wait (__WAIT_STATUS __stat_loc);
# 125 "/usr/include/x86_64-linux-gnu/sys/wait.h" 3 4
extern __pid_t waitpid (__pid_t __pid, int *__stat_loc, int __options);
# 135 "/usr/include/x86_64-linux-gnu/sys/wait.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/siginfo.h" 1 3 4
# 24 "/usr/include/x86_64-linux-gnu/bits/siginfo.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 25 "/usr/include/x86_64-linux-gnu/bits/siginfo.h" 2 3 4
# 136 "/usr/include/x86_64-linux-gnu/sys/wait.h" 2 3 4
# 148 "/usr/include/x86_64-linux-gnu/sys/wait.h" 3 4
extern int waitid (idtype_t __idtype, __id_t __id, siginfo_t *__infop,
     int __options);





struct rusage;






extern __pid_t wait3 (__WAIT_STATUS __stat_loc, int __options,
        struct rusage * __usage) 
# 163 "/usr/include/x86_64-linux-gnu/sys/wait.h"
                                1
# 163 "/usr/include/x86_64-linux-gnu/sys/wait.h" 3 4
                                         ;




extern __pid_t wait4 (__pid_t __pid, __WAIT_STATUS __stat_loc, int __options,
        struct rusage *__usage) 
# 169 "/usr/include/x86_64-linux-gnu/sys/wait.h"
                               1
# 169 "/usr/include/x86_64-linux-gnu/sys/wait.h" 3 4
                                        ;




# 203 "/home/libraskywalker/Projects/ModelRenamer/git-master/block-sha1/../git-compat-util.h" 2
# 1 "/usr/include/x86_64-linux-gnu/sys/resource.h" 1 3 4
# 24 "/usr/include/x86_64-linux-gnu/sys/resource.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/resource.h" 1 3 4
# 31 "/usr/include/x86_64-linux-gnu/bits/resource.h" 3 4
enum __rlimit_resource
{

  RLIMIT_CPU = 0,



  RLIMIT_FSIZE = 1,



  RLIMIT_DATA = 2,



  RLIMIT_STACK = 3,



  RLIMIT_CORE = 4,






  __RLIMIT_RSS = 5,



  RLIMIT_NOFILE = 7,
  __RLIMIT_OFILE = RLIMIT_NOFILE,




  RLIMIT_AS = 9,



  __RLIMIT_NPROC = 6,



  __RLIMIT_MEMLOCK = 8,



  __RLIMIT_LOCKS = 10,



  __RLIMIT_SIGPENDING = 11,



  __RLIMIT_MSGQUEUE = 12,





  __RLIMIT_NICE = 13,




  __RLIMIT_RTPRIO = 14,





  __RLIMIT_RTTIME = 15,


  __RLIMIT_NLIMITS = 16,
  __RLIM_NLIMITS = __RLIMIT_NLIMITS


};
# 133 "/usr/include/x86_64-linux-gnu/bits/resource.h" 3 4
typedef __rlim64_t rlim_t;


typedef __rlim64_t rlim64_t;


struct rlimit
  {

    rlim_t rlim_cur;

    rlim_t rlim_max;
  };


struct rlimit64
  {

    rlim64_t rlim_cur;

    rlim64_t rlim_max;
 };



enum __rusage_who
{

  RUSAGE_SELF = 0,



  RUSAGE_CHILDREN = -1



  ,

  RUSAGE_THREAD = 1




};


# 1 "/usr/include/x86_64-linux-gnu/bits/time.h" 1 3 4
# 180 "/usr/include/x86_64-linux-gnu/bits/resource.h" 2 3 4







struct rusage
  {

    struct timeval ru_utime;

    struct timeval ru_stime;

    __extension__ union
      {
 long int ru_maxrss;
 __syscall_slong_t __ru_maxrss_word;
      };



    __extension__ union
      {
 long int ru_ixrss;
 __syscall_slong_t __ru_ixrss_word;
      };

    __extension__ union
      {
 long int ru_idrss;
 __syscall_slong_t __ru_idrss_word;
      };

    __extension__ union
      {
 long int ru_isrss;
  __syscall_slong_t __ru_isrss_word;
      };


    __extension__ union
      {
 long int ru_minflt;
 __syscall_slong_t __ru_minflt_word;
      };

    __extension__ union
      {
 long int ru_majflt;
 __syscall_slong_t __ru_majflt_word;
      };

    __extension__ union
      {
 long int ru_nswap;
 __syscall_slong_t __ru_nswap_word;
      };


    __extension__ union
      {
 long int ru_inblock;
 __syscall_slong_t __ru_inblock_word;
      };

    __extension__ union
      {
 long int ru_oublock;
 __syscall_slong_t __ru_oublock_word;
      };

    __extension__ union
      {
 long int ru_msgsnd;
 __syscall_slong_t __ru_msgsnd_word;
      };

    __extension__ union
      {
 long int ru_msgrcv;
 __syscall_slong_t __ru_msgrcv_word;
      };

    __extension__ union
      {
 long int ru_nsignals;
 __syscall_slong_t __ru_nsignals_word;
      };



    __extension__ union
      {
 long int ru_nvcsw;
 __syscall_slong_t __ru_nvcsw_word;
      };


    __extension__ union
      {
 long int ru_nivcsw;
 __syscall_slong_t __ru_nivcsw_word;
      };
  };







enum __priority_which
{
  PRIO_PROCESS = 0,

  PRIO_PGRP = 1,

  PRIO_USER = 2

};



# 313 "/usr/include/x86_64-linux-gnu/bits/resource.h" 3 4
extern int prlimit (__pid_t __pid, enum __rlimit_resource __resource, const struct rlimit *__new_limit, struct rlimit *__old_limit) __asm__ 
# 313 "/usr/include/x86_64-linux-gnu/bits/resource.h"
          1


                                                
# 316 "/usr/include/x86_64-linux-gnu/bits/resource.h" 3 4
                                               ;





extern int prlimit64 (__pid_t __pid, enum __rlimit_resource __resource,
        const struct rlimit64 *__new_limit,
        struct rlimit64 *__old_limit) 
# 324 "/usr/include/x86_64-linux-gnu/bits/resource.h"
                                     1
# 324 "/usr/include/x86_64-linux-gnu/bits/resource.h" 3 4
                                            ;




# 25 "/usr/include/x86_64-linux-gnu/sys/resource.h" 2 3 4













typedef enum __rlimit_resource __rlimit_resource_t;
typedef enum __rusage_who __rusage_who_t;
typedef enum __priority_which __priority_which_t;
# 54 "/usr/include/x86_64-linux-gnu/sys/resource.h" 3 4
extern int getrlimit (__rlimit_resource_t __resource, struct rlimit *__rlimits) __asm__ 
# 54 "/usr/include/x86_64-linux-gnu/sys/resource.h"
          1
                                                  
# 55 "/usr/include/x86_64-linux-gnu/sys/resource.h" 3 4
                                                 ;





extern int getrlimit64 (__rlimit_resource_t __resource,
   struct rlimit64 *__rlimits) 
# 62 "/usr/include/x86_64-linux-gnu/sys/resource.h"
                              1
# 62 "/usr/include/x86_64-linux-gnu/sys/resource.h" 3 4
                                     ;
# 73 "/usr/include/x86_64-linux-gnu/sys/resource.h" 3 4
extern int setrlimit (__rlimit_resource_t __resource, const struct rlimit *__rlimits) __asm__ 
# 73 "/usr/include/x86_64-linux-gnu/sys/resource.h"
          1

                  
# 75 "/usr/include/x86_64-linux-gnu/sys/resource.h" 3 4
                 ;





extern int setrlimit64 (__rlimit_resource_t __resource,
   const struct rlimit64 *__rlimits) 
# 82 "/usr/include/x86_64-linux-gnu/sys/resource.h"
                                    1
# 82 "/usr/include/x86_64-linux-gnu/sys/resource.h" 3 4
                                           ;




extern int getrusage (__rusage_who_t __who, struct rusage *__usage) 
# 87 "/usr/include/x86_64-linux-gnu/sys/resource.h"
                                                                   1
# 87 "/usr/include/x86_64-linux-gnu/sys/resource.h" 3 4
                                                                          ;





extern int getpriority (__priority_which_t __which, id_t __who) 
# 93 "/usr/include/x86_64-linux-gnu/sys/resource.h"
                                                               1
# 93 "/usr/include/x86_64-linux-gnu/sys/resource.h" 3 4
                                                                      ;



extern int setpriority (__priority_which_t __which, id_t __who, int __prio)
     
# 98 "/usr/include/x86_64-linux-gnu/sys/resource.h"
    1
# 98 "/usr/include/x86_64-linux-gnu/sys/resource.h" 3 4
           ;


# 204 "/home/libraskywalker/Projects/ModelRenamer/git-master/block-sha1/../git-compat-util.h" 2
# 1 "/usr/include/x86_64-linux-gnu/sys/socket.h" 1 3 4
# 24 "/usr/include/x86_64-linux-gnu/sys/socket.h" 3 4


# 1 "/usr/include/x86_64-linux-gnu/sys/uio.h" 1 3 4
# 25 "/usr/include/x86_64-linux-gnu/sys/uio.h" 3 4



# 1 "/usr/include/x86_64-linux-gnu/bits/uio.h" 1 3 4
# 56 "/usr/include/x86_64-linux-gnu/bits/uio.h" 3 4



extern ssize_t process_vm_readv (pid_t __pid, const struct iovec *__lvec,
     unsigned long int __liovcnt,
     const struct iovec *__rvec,
     unsigned long int __riovcnt,
     unsigned long int __flags)
  
# 64 "/usr/include/x86_64-linux-gnu/bits/uio.h"
 1
# 64 "/usr/include/x86_64-linux-gnu/bits/uio.h" 3 4
        ;


extern ssize_t process_vm_writev (pid_t __pid, const struct iovec *__lvec,
      unsigned long int __liovcnt,
      const struct iovec *__rvec,
      unsigned long int __riovcnt,
      unsigned long int __flags)
  
# 72 "/usr/include/x86_64-linux-gnu/bits/uio.h"
 1
# 72 "/usr/include/x86_64-linux-gnu/bits/uio.h" 3 4
        ;


# 29 "/usr/include/x86_64-linux-gnu/sys/uio.h" 2 3 4
# 39 "/usr/include/x86_64-linux-gnu/sys/uio.h" 3 4
extern ssize_t readv (int __fd, const struct iovec *__iovec, int __count)
  ;
# 50 "/usr/include/x86_64-linux-gnu/sys/uio.h" 3 4
extern ssize_t writev (int __fd, const struct iovec *__iovec, int __count)
  ;
# 81 "/usr/include/x86_64-linux-gnu/sys/uio.h" 3 4
extern ssize_t preadv (int __fd, const struct iovec *__iovec, int __count, __off64_t __offset) __asm__

                     ;
extern ssize_t pwritev (int __fd, const struct iovec *__iovec, int __count, __off64_t __offset) __asm__

                      ;
# 103 "/usr/include/x86_64-linux-gnu/sys/uio.h" 3 4
extern ssize_t preadv64 (int __fd, const struct iovec *__iovec, int __count,
    __off64_t __offset) ;
# 115 "/usr/include/x86_64-linux-gnu/sys/uio.h" 3 4
extern ssize_t pwritev64 (int __fd, const struct iovec *__iovec, int __count,
     __off64_t __offset) ;




# 27 "/usr/include/x86_64-linux-gnu/sys/socket.h" 2 3 4

# 1 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" 1 3 4
# 29 "/usr/include/x86_64-linux-gnu/sys/socket.h" 2 3 4


# 1 "/usr/include/x86_64-linux-gnu/bits/sigset.h" 1 3 4
# 32 "/usr/include/x86_64-linux-gnu/sys/socket.h" 2 3 4






# 1 "/usr/include/x86_64-linux-gnu/bits/socket.h" 1 3 4
# 27 "/usr/include/x86_64-linux-gnu/bits/socket.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" 1 3 4
# 28 "/usr/include/x86_64-linux-gnu/bits/socket.h" 2 3 4
# 38 "/usr/include/x86_64-linux-gnu/bits/socket.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/socket_type.h" 1 3 4
# 24 "/usr/include/x86_64-linux-gnu/bits/socket_type.h" 3 4
enum __socket_type
{
  SOCK_STREAM = 1,


  SOCK_DGRAM = 2,


  SOCK_RAW = 3,

  SOCK_RDM = 4,

  SOCK_SEQPACKET = 5,


  SOCK_DCCP = 6,

  SOCK_PACKET = 10,







  SOCK_CLOEXEC = 02000000,


  SOCK_NONBLOCK = 00004000


};
# 39 "/usr/include/x86_64-linux-gnu/bits/socket.h" 2 3 4
# 150 "/usr/include/x86_64-linux-gnu/bits/socket.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/sockaddr.h" 1 3 4
# 28 "/usr/include/x86_64-linux-gnu/bits/sockaddr.h" 3 4
typedef unsigned short int sa_family_t;
# 151 "/usr/include/x86_64-linux-gnu/bits/socket.h" 2 3 4


struct sockaddr
  {
    sa_family_t sa_family;
    char sa_data[14];
  };
# 166 "/usr/include/x86_64-linux-gnu/bits/socket.h" 3 4
struct sockaddr_storage
  {
    sa_family_t ss_family;
    char __ss_padding[(128 - (sizeof (unsigned short int)) - sizeof (unsigned long int))];
    unsigned long int __ss_align;
  };



enum
  {
    MSG_OOB = 0x01,

    MSG_PEEK = 0x02,

    MSG_DONTROUTE = 0x04,



    MSG_TRYHARD = MSG_DONTROUTE,


    MSG_CTRUNC = 0x08,

    MSG_PROXY = 0x10,

    MSG_TRUNC = 0x20,

    MSG_DONTWAIT = 0x40,

    MSG_EOR = 0x80,

    MSG_WAITALL = 0x100,

    MSG_FIN = 0x200,

    MSG_SYN = 0x400,

    MSG_CONFIRM = 0x800,

    MSG_RST = 0x1000,

    MSG_ERRQUEUE = 0x2000,

    MSG_NOSIGNAL = 0x4000,

    MSG_MORE = 0x8000,

    MSG_WAITFORONE = 0x10000,

    MSG_FASTOPEN = 0x20000000,


    MSG_CMSG_CLOEXEC = 0x40000000



  };




struct msghdr
  {
    void *msg_name;
    socklen_t msg_namelen;

    struct iovec *msg_iov;
    size_t msg_iovlen;

    void *msg_control;
    size_t msg_controllen;




    int msg_flags;
  };


struct cmsghdr
  {
    size_t cmsg_len;




    int cmsg_level;
    int cmsg_type;

    __extension__ unsigned char __cmsg_data [];

  };
# 276 "/usr/include/x86_64-linux-gnu/bits/socket.h" 3 4
extern struct cmsghdr *__cmsg_nxthdr (struct msghdr *__mhdr,
          struct cmsghdr *__cmsg) 
# 277 "/usr/include/x86_64-linux-gnu/bits/socket.h"
                                 1
# 277 "/usr/include/x86_64-linux-gnu/bits/socket.h" 3 4
                                        ;
# 303 "/usr/include/x86_64-linux-gnu/bits/socket.h" 3 4
enum
  {
    SCM_RIGHTS = 0x01


    , SCM_CREDENTIALS = 0x02


  };



struct ucred
{
  pid_t pid;
  uid_t uid;
  gid_t gid;
};
# 349 "/usr/include/x86_64-linux-gnu/bits/socket.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/asm/socket.h" 1 3 4
# 1 "/usr/include/asm-generic/socket.h" 1 3 4



# 1 "/usr/include/x86_64-linux-gnu/asm/sockios.h" 1 3 4
# 1 "/usr/include/asm-generic/sockios.h" 1 3 4
# 1 "/usr/include/x86_64-linux-gnu/asm/sockios.h" 2 3 4
# 5 "/usr/include/asm-generic/socket.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/asm/socket.h" 2 3 4
# 350 "/usr/include/x86_64-linux-gnu/bits/socket.h" 2 3 4
# 383 "/usr/include/x86_64-linux-gnu/bits/socket.h" 3 4
struct linger
  {
    int l_onoff;
    int l_linger;
  };
# 39 "/usr/include/x86_64-linux-gnu/sys/socket.h" 2 3 4




struct osockaddr
  {
    unsigned short int sa_family;
    unsigned char sa_data[14];
  };




enum
{
  SHUT_RD = 0,

  SHUT_WR,

  SHUT_RDWR

};
# 90 "/usr/include/x86_64-linux-gnu/sys/socket.h" 3 4
typedef union { struct sockaddr *__restrict __sockaddr__; struct sockaddr_at *__restrict __sockaddr_at__; struct sockaddr_ax25 *__restrict __sockaddr_ax25__; struct sockaddr_dl *__restrict __sockaddr_dl__; struct sockaddr_eon *__restrict __sockaddr_eon__; struct sockaddr_in *__restrict __sockaddr_in__; struct sockaddr_in6 *__restrict __sockaddr_in6__; struct sockaddr_inarp *__restrict __sockaddr_inarp__; struct sockaddr_ipx *__restrict __sockaddr_ipx__; struct sockaddr_iso *__restrict __sockaddr_iso__; struct sockaddr_ns *__restrict __sockaddr_ns__; struct sockaddr_un *__restrict __sockaddr_un__; struct sockaddr_x25 *__restrict __sockaddr_x25__;
       } __SOCKADDR_ARG 
# 91 "/usr/include/x86_64-linux-gnu/sys/socket.h"
                       1
# 91 "/usr/include/x86_64-linux-gnu/sys/socket.h" 3 4
                                                              ;


typedef union { const struct sockaddr *__restrict __sockaddr__; const struct sockaddr_at *__restrict __sockaddr_at__; const struct sockaddr_ax25 *__restrict __sockaddr_ax25__; const struct sockaddr_dl *__restrict __sockaddr_dl__; const struct sockaddr_eon *__restrict __sockaddr_eon__; const struct sockaddr_in *__restrict __sockaddr_in__; const struct sockaddr_in6 *__restrict __sockaddr_in6__; const struct sockaddr_inarp *__restrict __sockaddr_inarp__; const struct sockaddr_ipx *__restrict __sockaddr_ipx__; const struct sockaddr_iso *__restrict __sockaddr_iso__; const struct sockaddr_ns *__restrict __sockaddr_ns__; const struct sockaddr_un *__restrict __sockaddr_un__; const struct sockaddr_x25 *__restrict __sockaddr_x25__;
       } __CONST_SOCKADDR_ARG 
# 95 "/usr/include/x86_64-linux-gnu/sys/socket.h"
                             1
# 95 "/usr/include/x86_64-linux-gnu/sys/socket.h" 3 4
                                                                    ;





struct mmsghdr
  {
    struct msghdr msg_hdr;
    unsigned int msg_len;

  };






extern int socket (int __domain, int __type, int __protocol) 
# 113 "/usr/include/x86_64-linux-gnu/sys/socket.h"
                                                            1
# 113 "/usr/include/x86_64-linux-gnu/sys/socket.h" 3 4
                                                                   ;





extern int socketpair (int __domain, int __type, int __protocol,
         int __fds[2]) 
# 120 "/usr/include/x86_64-linux-gnu/sys/socket.h"
                      1
# 120 "/usr/include/x86_64-linux-gnu/sys/socket.h" 3 4
                             ;


extern int bind (int __fd, __CONST_SOCKADDR_ARG __addr, socklen_t __len)
     
# 124 "/usr/include/x86_64-linux-gnu/sys/socket.h"
    1
# 124 "/usr/include/x86_64-linux-gnu/sys/socket.h" 3 4
           ;


extern int getsockname (int __fd, __SOCKADDR_ARG __addr,
   socklen_t *__restrict __len) 
# 128 "/usr/include/x86_64-linux-gnu/sys/socket.h"
                               1
# 128 "/usr/include/x86_64-linux-gnu/sys/socket.h" 3 4
                                      ;
# 137 "/usr/include/x86_64-linux-gnu/sys/socket.h" 3 4
extern int connect (int __fd, __CONST_SOCKADDR_ARG __addr, socklen_t __len);



extern int getpeername (int __fd, __SOCKADDR_ARG __addr,
   socklen_t *__restrict __len) 
# 142 "/usr/include/x86_64-linux-gnu/sys/socket.h"
                               1
# 142 "/usr/include/x86_64-linux-gnu/sys/socket.h" 3 4
                                      ;






extern ssize_t send (int __fd, const void *__buf, size_t __n, int __flags);






extern ssize_t recv (int __fd, void *__buf, size_t __n, int __flags);






extern ssize_t sendto (int __fd, const void *__buf, size_t __n,
         int __flags, __CONST_SOCKADDR_ARG __addr,
         socklen_t __addr_len);
# 174 "/usr/include/x86_64-linux-gnu/sys/socket.h" 3 4
extern ssize_t recvfrom (int __fd, void *__restrict __buf, size_t __n,
    int __flags, __SOCKADDR_ARG __addr,
    socklen_t *__restrict __addr_len);







extern ssize_t sendmsg (int __fd, const struct msghdr *__message,
   int __flags);







extern int sendmmsg (int __fd, struct mmsghdr *__vmessages,
       unsigned int __vlen, int __flags);







extern ssize_t recvmsg (int __fd, struct msghdr *__message, int __flags);







extern int recvmmsg (int __fd, struct mmsghdr *__vmessages,
       unsigned int __vlen, int __flags,
       struct timespec *__tmo);






extern int getsockopt (int __fd, int __level, int __optname,
         void *__restrict __optval,
         socklen_t *__restrict __optlen) 
# 221 "/usr/include/x86_64-linux-gnu/sys/socket.h"
                                        1
# 221 "/usr/include/x86_64-linux-gnu/sys/socket.h" 3 4
                                               ;




extern int setsockopt (int __fd, int __level, int __optname,
         const void *__optval, socklen_t __optlen) 
# 227 "/usr/include/x86_64-linux-gnu/sys/socket.h"
                                                  1
# 227 "/usr/include/x86_64-linux-gnu/sys/socket.h" 3 4
                                                         ;





extern int listen (int __fd, int __n) 
# 233 "/usr/include/x86_64-linux-gnu/sys/socket.h"
                                     1
# 233 "/usr/include/x86_64-linux-gnu/sys/socket.h" 3 4
                                            ;
# 243 "/usr/include/x86_64-linux-gnu/sys/socket.h" 3 4
extern int accept (int __fd, __SOCKADDR_ARG __addr,
     socklen_t *__restrict __addr_len);






extern int accept4 (int __fd, __SOCKADDR_ARG __addr,
      socklen_t *__restrict __addr_len, int __flags);
# 261 "/usr/include/x86_64-linux-gnu/sys/socket.h" 3 4
extern int shutdown (int __fd, int __how) 
# 261 "/usr/include/x86_64-linux-gnu/sys/socket.h"
                                         1
# 261 "/usr/include/x86_64-linux-gnu/sys/socket.h" 3 4
                                                ;




extern int sockatmark (int __fd) 
# 266 "/usr/include/x86_64-linux-gnu/sys/socket.h"
                                1
# 266 "/usr/include/x86_64-linux-gnu/sys/socket.h" 3 4
                                       ;







extern int isfdtype (int __fd, int __fdtype) 
# 274 "/usr/include/x86_64-linux-gnu/sys/socket.h"
                                            1
# 274 "/usr/include/x86_64-linux-gnu/sys/socket.h" 3 4
                                                   ;
# 283 "/usr/include/x86_64-linux-gnu/sys/socket.h" 3 4

# 205 "/home/libraskywalker/Projects/ModelRenamer/git-master/block-sha1/../git-compat-util.h" 2
# 1 "/usr/include/x86_64-linux-gnu/sys/ioctl.h" 1 3 4
# 23 "/usr/include/x86_64-linux-gnu/sys/ioctl.h" 3 4



# 1 "/usr/include/x86_64-linux-gnu/bits/ioctls.h" 1 3 4
# 23 "/usr/include/x86_64-linux-gnu/bits/ioctls.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/asm/ioctls.h" 1 3 4
# 1 "/usr/include/asm-generic/ioctls.h" 1 3 4



# 1 "/usr/include/linux/ioctl.h" 1 3 4



# 1 "/usr/include/x86_64-linux-gnu/asm/ioctl.h" 1 3 4
# 1 "/usr/include/asm-generic/ioctl.h" 1 3 4
# 1 "/usr/include/x86_64-linux-gnu/asm/ioctl.h" 2 3 4
# 5 "/usr/include/linux/ioctl.h" 2 3 4
# 5 "/usr/include/asm-generic/ioctls.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/asm/ioctls.h" 2 3 4
# 24 "/usr/include/x86_64-linux-gnu/bits/ioctls.h" 2 3 4
# 27 "/usr/include/x86_64-linux-gnu/sys/ioctl.h" 2 3 4


# 1 "/usr/include/x86_64-linux-gnu/bits/ioctl-types.h" 1 3 4
# 24 "/usr/include/x86_64-linux-gnu/bits/ioctl-types.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/asm/ioctls.h" 1 3 4
# 25 "/usr/include/x86_64-linux-gnu/bits/ioctl-types.h" 2 3 4


struct winsize
  {
    unsigned short int ws_row;
    unsigned short int ws_col;
    unsigned short int ws_xpixel;
    unsigned short int ws_ypixel;
  };


struct termio
  {
    unsigned short int c_iflag;
    unsigned short int c_oflag;
    unsigned short int c_cflag;
    unsigned short int c_lflag;
    unsigned char c_line;
    unsigned char c_cc[8];
};
# 30 "/usr/include/x86_64-linux-gnu/sys/ioctl.h" 2 3 4






# 1 "/usr/include/x86_64-linux-gnu/sys/ttydefaults.h" 1 3 4
# 37 "/usr/include/x86_64-linux-gnu/sys/ioctl.h" 2 3 4




extern int ioctl (int __fd, unsigned long int __request, ...) 
# 41 "/usr/include/x86_64-linux-gnu/sys/ioctl.h"
                                                             1
# 41 "/usr/include/x86_64-linux-gnu/sys/ioctl.h" 3 4
                                                                    ;


# 206 "/home/libraskywalker/Projects/ModelRenamer/git-master/block-sha1/../git-compat-util.h" 2
# 1 "/usr/include/termios.h" 1 3 4
# 35 "/usr/include/termios.h" 3 4




# 1 "/usr/include/x86_64-linux-gnu/bits/termios.h" 1 3 4
# 23 "/usr/include/x86_64-linux-gnu/bits/termios.h" 3 4
typedef unsigned char cc_t;
typedef unsigned int speed_t;
typedef unsigned int tcflag_t;


struct termios
  {
    tcflag_t c_iflag;
    tcflag_t c_oflag;
    tcflag_t c_cflag;
    tcflag_t c_lflag;
    cc_t c_line;
    cc_t c_cc[32];
    speed_t c_ispeed;
    speed_t c_ospeed;


  };
# 40 "/usr/include/termios.h" 2 3 4
# 48 "/usr/include/termios.h" 3 4
extern speed_t cfgetospeed (const struct termios *__termios_p) 
# 48 "/usr/include/termios.h"
                                                              1
# 48 "/usr/include/termios.h" 3 4
                                                                     ;


extern speed_t cfgetispeed (const struct termios *__termios_p) 
# 51 "/usr/include/termios.h"
                                                              1
# 51 "/usr/include/termios.h" 3 4
                                                                     ;


extern int cfsetospeed (struct termios *__termios_p, speed_t __speed) 
# 54 "/usr/include/termios.h"
                                                                     1
# 54 "/usr/include/termios.h" 3 4
                                                                            ;


extern int cfsetispeed (struct termios *__termios_p, speed_t __speed) 
# 57 "/usr/include/termios.h"
                                                                     1
# 57 "/usr/include/termios.h" 3 4
                                                                            ;



extern int cfsetspeed (struct termios *__termios_p, speed_t __speed) 
# 61 "/usr/include/termios.h"
                                                                    1
# 61 "/usr/include/termios.h" 3 4
                                                                           ;




extern int tcgetattr (int __fd, struct termios *__termios_p) 
# 66 "/usr/include/termios.h"
                                                            1
# 66 "/usr/include/termios.h" 3 4
                                                                   ;



extern int tcsetattr (int __fd, int __optional_actions,
        const struct termios *__termios_p) 
# 71 "/usr/include/termios.h"
                                          1
# 71 "/usr/include/termios.h" 3 4
                                                 ;




extern void cfmakeraw (struct termios *__termios_p) 
# 76 "/usr/include/termios.h"
                                                   1
# 76 "/usr/include/termios.h" 3 4
                                                          ;



extern int tcsendbreak (int __fd, int __duration) 
# 80 "/usr/include/termios.h"
                                                 1
# 80 "/usr/include/termios.h" 3 4
                                                        ;





extern int tcdrain (int __fd);



extern int tcflush (int __fd, int __queue_selector) 
# 90 "/usr/include/termios.h"
                                                   1
# 90 "/usr/include/termios.h" 3 4
                                                          ;



extern int tcflow (int __fd, int __action) 
# 94 "/usr/include/termios.h"
                                          1
# 94 "/usr/include/termios.h" 3 4
                                                 ;




extern __pid_t tcgetsid (int __fd) 
# 99 "/usr/include/termios.h"
                                  1
# 99 "/usr/include/termios.h" 3 4
                                         ;




# 1 "/usr/include/x86_64-linux-gnu/sys/ttydefaults.h" 1 3 4
# 105 "/usr/include/termios.h" 2 3 4



# 207 "/home/libraskywalker/Projects/ModelRenamer/git-master/block-sha1/../git-compat-util.h" 2



# 1 "/usr/include/netinet/in.h" 1 3 4
# 22 "/usr/include/netinet/in.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stdint.h" 1 3 4
# 9 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stdint.h" 3 4
# 1 "/usr/include/stdint.h" 1 3 4
# 26 "/usr/include/stdint.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wchar.h" 1 3 4
# 27 "/usr/include/stdint.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 28 "/usr/include/stdint.h" 2 3 4
# 48 "/usr/include/stdint.h" 3 4
typedef unsigned char uint8_t;
typedef unsigned short int uint16_t;

typedef unsigned int uint32_t;



typedef unsigned long int uint64_t;
# 65 "/usr/include/stdint.h" 3 4
typedef signed char int_least8_t;
typedef short int int_least16_t;
typedef int int_least32_t;

typedef long int int_least64_t;






typedef unsigned char uint_least8_t;
typedef unsigned short int uint_least16_t;
typedef unsigned int uint_least32_t;

typedef unsigned long int uint_least64_t;
# 90 "/usr/include/stdint.h" 3 4
typedef signed char int_fast8_t;

typedef long int int_fast16_t;
typedef long int int_fast32_t;
typedef long int int_fast64_t;
# 103 "/usr/include/stdint.h" 3 4
typedef unsigned char uint_fast8_t;

typedef unsigned long int uint_fast16_t;
typedef unsigned long int uint_fast32_t;
typedef unsigned long int uint_fast64_t;
# 122 "/usr/include/stdint.h" 3 4
typedef unsigned long int uintptr_t;
# 134 "/usr/include/stdint.h" 3 4
typedef long int intmax_t;
typedef unsigned long int uintmax_t;
# 10 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stdint.h" 2 3 4
# 23 "/usr/include/netinet/in.h" 2 3 4







typedef uint32_t in_addr_t;
struct in_addr
  {
    in_addr_t s_addr;
  };


# 1 "/usr/include/x86_64-linux-gnu/bits/in.h" 1 3 4
# 133 "/usr/include/x86_64-linux-gnu/bits/in.h" 3 4
struct ip_opts
  {
    struct in_addr ip_dst;
    char ip_opts[40];
  };


struct ip_mreqn
  {
    struct in_addr imr_multiaddr;
    struct in_addr imr_address;
    int imr_ifindex;
  };


struct in_pktinfo
  {
    int ipi_ifindex;
    struct in_addr ipi_spec_dst;
    struct in_addr ipi_addr;
  };
# 38 "/usr/include/netinet/in.h" 2 3 4


enum
  {
    IPPROTO_IP = 0,

    IPPROTO_ICMP = 1,

    IPPROTO_IGMP = 2,

    IPPROTO_IPIP = 4,

    IPPROTO_TCP = 6,

    IPPROTO_EGP = 8,

    IPPROTO_PUP = 12,

    IPPROTO_UDP = 17,

    IPPROTO_IDP = 22,

    IPPROTO_TP = 29,

    IPPROTO_DCCP = 33,

    IPPROTO_IPV6 = 41,

    IPPROTO_RSVP = 46,

    IPPROTO_GRE = 47,

    IPPROTO_ESP = 50,

    IPPROTO_AH = 51,

    IPPROTO_MTP = 92,

    IPPROTO_BEETPH = 94,

    IPPROTO_ENCAP = 98,

    IPPROTO_PIM = 103,

    IPPROTO_COMP = 108,

    IPPROTO_SCTP = 132,

    IPPROTO_UDPLITE = 136,

    IPPROTO_MPLS = 137,

    IPPROTO_RAW = 255,

    IPPROTO_MAX
  };





enum
  {
    IPPROTO_HOPOPTS = 0,

    IPPROTO_ROUTING = 43,

    IPPROTO_FRAGMENT = 44,

    IPPROTO_ICMPV6 = 58,

    IPPROTO_NONE = 59,

    IPPROTO_DSTOPTS = 60,

    IPPROTO_MH = 135

  };



typedef uint16_t in_port_t;


enum
  {
    IPPORT_ECHO = 7,
    IPPORT_DISCARD = 9,
    IPPORT_SYSTAT = 11,
    IPPORT_DAYTIME = 13,
    IPPORT_NETSTAT = 15,
    IPPORT_FTP = 21,
    IPPORT_TELNET = 23,
    IPPORT_SMTP = 25,
    IPPORT_TIMESERVER = 37,
    IPPORT_NAMESERVER = 42,
    IPPORT_WHOIS = 43,
    IPPORT_MTP = 57,

    IPPORT_TFTP = 69,
    IPPORT_RJE = 77,
    IPPORT_FINGER = 79,
    IPPORT_TTYLINK = 87,
    IPPORT_SUPDUP = 95,


    IPPORT_EXECSERVER = 512,
    IPPORT_LOGINSERVER = 513,
    IPPORT_CMDSERVER = 514,
    IPPORT_EFSSERVER = 520,


    IPPORT_BIFFUDP = 512,
    IPPORT_WHOSERVER = 513,
    IPPORT_ROUTESERVER = 520,


    IPPORT_RESERVED = 1024,


    IPPORT_USERRESERVED = 5000
  };
# 211 "/usr/include/netinet/in.h" 3 4
struct in6_addr
  {
    union
      {
 uint8_t __u6_addr8[16];

 uint16_t __u6_addr16[8];
 uint32_t __u6_addr32[4];

      } __in6_u;





  };


extern const struct in6_addr in6addr_any;
extern const struct in6_addr in6addr_loopback;
# 239 "/usr/include/netinet/in.h" 3 4
struct sockaddr_in
  {
    sa_family_t sin_family;
    in_port_t sin_port;
    struct in_addr sin_addr;


    unsigned char sin_zero[sizeof (struct sockaddr) -
      (sizeof (unsigned short int)) -
      sizeof (in_port_t) -
      sizeof (struct in_addr)];
  };



struct sockaddr_in6
  {
    sa_family_t sin6_family;
    in_port_t sin6_port;
    uint32_t sin6_flowinfo;
    struct in6_addr sin6_addr;
    uint32_t sin6_scope_id;
  };




struct ip_mreq
  {

    struct in_addr imr_multiaddr;


    struct in_addr imr_interface;
  };

struct ip_mreq_source
  {

    struct in_addr imr_multiaddr;


    struct in_addr imr_interface;


    struct in_addr imr_sourceaddr;
  };




struct ipv6_mreq
  {

    struct in6_addr ipv6mr_multiaddr;


    unsigned int ipv6mr_interface;
  };




struct group_req
  {

    uint32_t gr_interface;


    struct sockaddr_storage gr_group;
  };

struct group_source_req
  {

    uint32_t gsr_interface;


    struct sockaddr_storage gsr_group;


    struct sockaddr_storage gsr_source;
  };



struct ip_msfilter
  {

    struct in_addr imsf_multiaddr;


    struct in_addr imsf_interface;


    uint32_t imsf_fmode;


    uint32_t imsf_numsrc;

    struct in_addr imsf_slist[1];
  };





struct group_filter
  {

    uint32_t gf_interface;


    struct sockaddr_storage gf_group;


    uint32_t gf_fmode;


    uint32_t gf_numsrc;

    struct sockaddr_storage gf_slist[1];
};
# 376 "/usr/include/netinet/in.h" 3 4
extern uint32_t ntohl (uint32_t __netlong) 
# 376 "/usr/include/netinet/in.h"
                                          1 1
# 376 "/usr/include/netinet/in.h" 3 4
                                                                             ;
extern uint16_t ntohs (uint16_t __netshort)
     
# 378 "/usr/include/netinet/in.h"
    1 1
# 378 "/usr/include/netinet/in.h" 3 4
                                       ;
extern uint32_t htonl (uint32_t __hostlong)
     
# 380 "/usr/include/netinet/in.h"
    1 1
# 380 "/usr/include/netinet/in.h" 3 4
                                       ;
extern uint16_t htons (uint16_t __hostshort)
     
# 382 "/usr/include/netinet/in.h"
    1 1
# 382 "/usr/include/netinet/in.h" 3 4
                                       ;




# 1 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 1 3 4
# 388 "/usr/include/netinet/in.h" 2 3 4
# 503 "/usr/include/netinet/in.h" 3 4
extern int bindresvport (int __sockfd, struct sockaddr_in *__sock_in) 
# 503 "/usr/include/netinet/in.h"
                                                                     1
# 503 "/usr/include/netinet/in.h" 3 4
                                                                            ;


extern int bindresvport6 (int __sockfd, struct sockaddr_in6 *__sock_in)
     
# 507 "/usr/include/netinet/in.h"
    1
# 507 "/usr/include/netinet/in.h" 3 4
           ;
# 533 "/usr/include/netinet/in.h" 3 4
struct cmsghdr;



struct in6_pktinfo
  {
    struct in6_addr ipi6_addr;
    unsigned int ipi6_ifindex;
  };


struct ip6_mtuinfo
  {
    struct sockaddr_in6 ip6m_addr;
    uint32_t ip6m_mtu;
  };



extern int inet6_option_space (int __nbytes)
     
# 553 "/usr/include/netinet/in.h"
    1 1
# 553 "/usr/include/netinet/in.h" 3 4
                                    ;
extern int inet6_option_init (void *__bp, struct cmsghdr **__cmsgp,
         int __type) 
# 555 "/usr/include/netinet/in.h"
                    1 1
# 555 "/usr/include/netinet/in.h" 3 4
                                                    ;
extern int inet6_option_append (struct cmsghdr *__cmsg,
    const uint8_t *__typep, int __multx,
    int __plusy) 
# 558 "/usr/include/netinet/in.h"
                1 1
# 558 "/usr/include/netinet/in.h" 3 4
                                                ;
extern uint8_t *inet6_option_alloc (struct cmsghdr *__cmsg, int __datalen,
        int __multx, int __plusy)
     
# 561 "/usr/include/netinet/in.h"
    1 1
# 561 "/usr/include/netinet/in.h" 3 4
                                    ;
extern int inet6_option_next (const struct cmsghdr *__cmsg,
         uint8_t **__tptrp)
     
# 564 "/usr/include/netinet/in.h"
    1 1
# 564 "/usr/include/netinet/in.h" 3 4
                                    ;
extern int inet6_option_find (const struct cmsghdr *__cmsg,
         uint8_t **__tptrp, int __type)
     
# 567 "/usr/include/netinet/in.h"
    1 1
# 567 "/usr/include/netinet/in.h" 3 4
                                    ;



extern int inet6_opt_init (void *__extbuf, socklen_t __extlen) 
# 571 "/usr/include/netinet/in.h"
                                                              1
# 571 "/usr/include/netinet/in.h" 3 4
                                                                     ;
extern int inet6_opt_append (void *__extbuf, socklen_t __extlen, int __offset,
        uint8_t __type, socklen_t __len, uint8_t __align,
        void **__databufp) 
# 574 "/usr/include/netinet/in.h"
                          1
# 574 "/usr/include/netinet/in.h" 3 4
                                 ;
extern int inet6_opt_finish (void *__extbuf, socklen_t __extlen, int __offset)
     
# 576 "/usr/include/netinet/in.h"
    1
# 576 "/usr/include/netinet/in.h" 3 4
           ;
extern int inet6_opt_set_val (void *__databuf, int __offset, void *__val,
         socklen_t __vallen) 
# 578 "/usr/include/netinet/in.h"
                            1
# 578 "/usr/include/netinet/in.h" 3 4
                                   ;
extern int inet6_opt_next (void *__extbuf, socklen_t __extlen, int __offset,
      uint8_t *__typep, socklen_t *__lenp,
      void **__databufp) 
# 581 "/usr/include/netinet/in.h"
                        1
# 581 "/usr/include/netinet/in.h" 3 4
                               ;
extern int inet6_opt_find (void *__extbuf, socklen_t __extlen, int __offset,
      uint8_t __type, socklen_t *__lenp,
      void **__databufp) 
# 584 "/usr/include/netinet/in.h"
                        1
# 584 "/usr/include/netinet/in.h" 3 4
                               ;
extern int inet6_opt_get_val (void *__databuf, int __offset, void *__val,
         socklen_t __vallen) 
# 586 "/usr/include/netinet/in.h"
                            1
# 586 "/usr/include/netinet/in.h" 3 4
                                   ;



extern socklen_t inet6_rth_space (int __type, int __segments) 
# 590 "/usr/include/netinet/in.h"
                                                             1
# 590 "/usr/include/netinet/in.h" 3 4
                                                                    ;
extern void *inet6_rth_init (void *__bp, socklen_t __bp_len, int __type,
        int __segments) 
# 592 "/usr/include/netinet/in.h"
                       1
# 592 "/usr/include/netinet/in.h" 3 4
                              ;
extern int inet6_rth_add (void *__bp, const struct in6_addr *__addr) 
# 593 "/usr/include/netinet/in.h"
                                                                    1
# 593 "/usr/include/netinet/in.h" 3 4
                                                                           ;
extern int inet6_rth_reverse (const void *__in, void *__out) 
# 594 "/usr/include/netinet/in.h"
                                                            1
# 594 "/usr/include/netinet/in.h" 3 4
                                                                   ;
extern int inet6_rth_segments (const void *__bp) 
# 595 "/usr/include/netinet/in.h"
                                                1
# 595 "/usr/include/netinet/in.h" 3 4
                                                       ;
extern struct in6_addr *inet6_rth_getaddr (const void *__bp, int __index)
     
# 597 "/usr/include/netinet/in.h"
    1
# 597 "/usr/include/netinet/in.h" 3 4
           ;





extern int getipv4sourcefilter (int __s, struct in_addr __interface_addr,
    struct in_addr __group, uint32_t *__fmode,
    uint32_t *__numsrc, struct in_addr *__slist)
     
# 606 "/usr/include/netinet/in.h"
    1
# 606 "/usr/include/netinet/in.h" 3 4
           ;


extern int setipv4sourcefilter (int __s, struct in_addr __interface_addr,
    struct in_addr __group, uint32_t __fmode,
    uint32_t __numsrc,
    const struct in_addr *__slist)
     
# 613 "/usr/include/netinet/in.h"
    1
# 613 "/usr/include/netinet/in.h" 3 4
           ;



extern int getsourcefilter (int __s, uint32_t __interface_addr,
       const struct sockaddr *__group,
       socklen_t __grouplen, uint32_t *__fmode,
       uint32_t *__numsrc,
       struct sockaddr_storage *__slist) 
# 621 "/usr/include/netinet/in.h"
                                        1
# 621 "/usr/include/netinet/in.h" 3 4
                                               ;


extern int setsourcefilter (int __s, uint32_t __interface_addr,
       const struct sockaddr *__group,
       socklen_t __grouplen, uint32_t __fmode,
       uint32_t __numsrc,
       const struct sockaddr_storage *__slist) 
# 628 "/usr/include/netinet/in.h"
                                              1
# 628 "/usr/include/netinet/in.h" 3 4
                                                     ;



# 211 "/home/libraskywalker/Projects/ModelRenamer/git-master/block-sha1/../git-compat-util.h" 2
# 1 "/usr/include/netinet/tcp.h" 1 3 4
# 77 "/usr/include/netinet/tcp.h" 3 4
typedef u_int32_t tcp_seq;




struct tcphdr
  {
    __extension__ union
    {
      struct
      {
 u_int16_t th_sport;
 u_int16_t th_dport;
 tcp_seq th_seq;
 tcp_seq th_ack;

 u_int8_t th_x2:4;
 u_int8_t th_off:4;





 u_int8_t th_flags;






 u_int16_t th_win;
 u_int16_t th_sum;
 u_int16_t th_urp;
      };
      struct
      {
 u_int16_t source;
 u_int16_t dest;
 u_int32_t seq;
 u_int32_t ack_seq;

 u_int16_t res1:4;
 u_int16_t doff:4;
 u_int16_t fin:1;
 u_int16_t syn:1;
 u_int16_t rst:1;
 u_int16_t psh:1;
 u_int16_t ack:1;
 u_int16_t urg:1;
 u_int16_t res2:2;
# 140 "/usr/include/netinet/tcp.h" 3 4
 u_int16_t window;
 u_int16_t check;
 u_int16_t urg_ptr;
      };
    };
};

enum
{
  TCP_ESTABLISHED = 1,
  TCP_SYN_SENT,
  TCP_SYN_RECV,
  TCP_FIN_WAIT1,
  TCP_FIN_WAIT2,
  TCP_TIME_WAIT,
  TCP_CLOSE,
  TCP_CLOSE_WAIT,
  TCP_LAST_ACK,
  TCP_LISTEN,
  TCP_CLOSING
};
# 201 "/usr/include/netinet/tcp.h" 3 4
enum tcp_ca_state
{
  TCP_CA_Open = 0,
  TCP_CA_Disorder = 1,
  TCP_CA_CWR = 2,
  TCP_CA_Recovery = 3,
  TCP_CA_Loss = 4
};

struct tcp_info
{
  u_int8_t tcpi_state;
  u_int8_t tcpi_ca_state;
  u_int8_t tcpi_retransmits;
  u_int8_t tcpi_probes;
  u_int8_t tcpi_backoff;
  u_int8_t tcpi_options;
  u_int8_t tcpi_snd_wscale : 4, tcpi_rcv_wscale : 4;

  u_int32_t tcpi_rto;
  u_int32_t tcpi_ato;
  u_int32_t tcpi_snd_mss;
  u_int32_t tcpi_rcv_mss;

  u_int32_t tcpi_unacked;
  u_int32_t tcpi_sacked;
  u_int32_t tcpi_lost;
  u_int32_t tcpi_retrans;
  u_int32_t tcpi_fackets;


  u_int32_t tcpi_last_data_sent;
  u_int32_t tcpi_last_ack_sent;
  u_int32_t tcpi_last_data_recv;
  u_int32_t tcpi_last_ack_recv;


  u_int32_t tcpi_pmtu;
  u_int32_t tcpi_rcv_ssthresh;
  u_int32_t tcpi_rtt;
  u_int32_t tcpi_rttvar;
  u_int32_t tcpi_snd_ssthresh;
  u_int32_t tcpi_snd_cwnd;
  u_int32_t tcpi_advmss;
  u_int32_t tcpi_reordering;

  u_int32_t tcpi_rcv_rtt;
  u_int32_t tcpi_rcv_space;

  u_int32_t tcpi_total_retrans;
};





struct tcp_md5sig
{
  struct sockaddr_storage tcpm_addr;
  u_int16_t __tcpm_pad1;
  u_int16_t tcpm_keylen;
  u_int32_t __tcpm_pad2;
  u_int8_t tcpm_key[80];
};


struct tcp_repair_opt
{
  u_int32_t opt_code;
  u_int32_t opt_val;
};


enum
{
  TCP_NO_QUEUE,
  TCP_RECV_QUEUE,
  TCP_SEND_QUEUE,
  TCP_QUEUES_NR,
};
# 299 "/usr/include/netinet/tcp.h" 3 4
struct tcp_cookie_transactions
{
  u_int16_t tcpct_flags;
  u_int8_t __tcpct_pad1;
  u_int8_t tcpct_cookie_desired;
  u_int16_t tcpct_s_data_desired;
  u_int16_t tcpct_used;
  u_int8_t tcpct_value[536U];
};
# 212 "/home/libraskywalker/Projects/ModelRenamer/git-master/block-sha1/../git-compat-util.h" 2
# 1 "/usr/include/arpa/inet.h" 1 3 4
# 30 "/usr/include/arpa/inet.h" 3 4




extern in_addr_t inet_addr (const char *__cp) 
# 34 "/usr/include/arpa/inet.h"
                                             1
# 34 "/usr/include/arpa/inet.h" 3 4
                                                    ;


extern in_addr_t inet_lnaof (struct in_addr __in) 
# 37 "/usr/include/arpa/inet.h"
                                                 1
# 37 "/usr/include/arpa/inet.h" 3 4
                                                        ;



extern struct in_addr inet_makeaddr (in_addr_t __net, in_addr_t __host)
     
# 42 "/usr/include/arpa/inet.h"
    1
# 42 "/usr/include/arpa/inet.h" 3 4
           ;


extern in_addr_t inet_netof (struct in_addr __in) 
# 45 "/usr/include/arpa/inet.h"
                                                 1
# 45 "/usr/include/arpa/inet.h" 3 4
                                                        ;



extern in_addr_t inet_network (const char *__cp) 
# 49 "/usr/include/arpa/inet.h"
                                                1
# 49 "/usr/include/arpa/inet.h" 3 4
                                                       ;



extern char *inet_ntoa (struct in_addr __in) 
# 53 "/usr/include/arpa/inet.h"
                                            1
# 53 "/usr/include/arpa/inet.h" 3 4
                                                   ;




extern int inet_pton (int __af, const char *__restrict __cp,
        void *__restrict __buf) 
# 59 "/usr/include/arpa/inet.h"
                               1
# 59 "/usr/include/arpa/inet.h" 3 4
                                      ;




extern const char *inet_ntop (int __af, const void *__restrict __cp,
         char *__restrict __buf, socklen_t __len)
     
# 66 "/usr/include/arpa/inet.h"
    1
# 66 "/usr/include/arpa/inet.h" 3 4
           ;






extern int inet_aton (const char *__cp, struct in_addr *__inp) 
# 73 "/usr/include/arpa/inet.h"
                                                              1
# 73 "/usr/include/arpa/inet.h" 3 4
                                                                     ;



extern char *inet_neta (in_addr_t __net, char *__buf, size_t __len) 
# 77 "/usr/include/arpa/inet.h"
                                                                   1
# 77 "/usr/include/arpa/inet.h" 3 4
                                                                          ;




extern char *inet_net_ntop (int __af, const void *__cp, int __bits,
       char *__buf, size_t __len) 
# 83 "/usr/include/arpa/inet.h"
                                 1
# 83 "/usr/include/arpa/inet.h" 3 4
                                        ;




extern int inet_net_pton (int __af, const char *__cp,
     void *__buf, size_t __len) 
# 89 "/usr/include/arpa/inet.h"
                               1
# 89 "/usr/include/arpa/inet.h" 3 4
                                      ;




extern unsigned int inet_nsap_addr (const char *__cp,
        unsigned char *__buf, int __len) 
# 95 "/usr/include/arpa/inet.h"
                                        1
# 95 "/usr/include/arpa/inet.h" 3 4
                                               ;



extern char *inet_nsap_ntoa (int __len, const unsigned char *__cp,
        char *__buf) 
# 100 "/usr/include/arpa/inet.h"
                    1
# 100 "/usr/include/arpa/inet.h" 3 4
                           ;



# 213 "/home/libraskywalker/Projects/ModelRenamer/git-master/block-sha1/../git-compat-util.h" 2
# 1 "/usr/include/netdb.h" 1 3 4
# 32 "/usr/include/netdb.h" 3 4
# 1 "/usr/include/rpc/netdb.h" 1 3 4
# 42 "/usr/include/rpc/netdb.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" 1 3 4
# 43 "/usr/include/rpc/netdb.h" 2 3 4



struct rpcent
{
  char *r_name;
  char **r_aliases;
  int r_number;
};

extern void setrpcent (int __stayopen) 
# 53 "/usr/include/rpc/netdb.h"
                                      1
# 53 "/usr/include/rpc/netdb.h" 3 4
                                             ;
extern void endrpcent (void) 
# 54 "/usr/include/rpc/netdb.h"
                            1
# 54 "/usr/include/rpc/netdb.h" 3 4
                                   ;
extern struct rpcent *getrpcbyname (const char *__name) 
# 55 "/usr/include/rpc/netdb.h"
                                                       1
# 55 "/usr/include/rpc/netdb.h" 3 4
                                                              ;
extern struct rpcent *getrpcbynumber (int __number) 
# 56 "/usr/include/rpc/netdb.h"
                                                   1
# 56 "/usr/include/rpc/netdb.h" 3 4
                                                          ;
extern struct rpcent *getrpcent (void) 
# 57 "/usr/include/rpc/netdb.h"
                                      1
# 57 "/usr/include/rpc/netdb.h" 3 4
                                             ;


extern int getrpcbyname_r (const char *__name, struct rpcent *__result_buf,
      char *__buffer, size_t __buflen,
      struct rpcent **__result) 
# 62 "/usr/include/rpc/netdb.h"
                               1
# 62 "/usr/include/rpc/netdb.h" 3 4
                                      ;

extern int getrpcbynumber_r (int __number, struct rpcent *__result_buf,
        char *__buffer, size_t __buflen,
        struct rpcent **__result) 
# 66 "/usr/include/rpc/netdb.h"
                                 1
# 66 "/usr/include/rpc/netdb.h" 3 4
                                        ;

extern int getrpcent_r (struct rpcent *__result_buf, char *__buffer,
   size_t __buflen, struct rpcent **__result) 
# 69 "/usr/include/rpc/netdb.h"
                                             1
# 69 "/usr/include/rpc/netdb.h" 3 4
                                                    ;



# 33 "/usr/include/netdb.h" 2 3 4




# 1 "/usr/include/x86_64-linux-gnu/bits/siginfo.h" 1 3 4
# 24 "/usr/include/x86_64-linux-gnu/bits/siginfo.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 25 "/usr/include/x86_64-linux-gnu/bits/siginfo.h" 2 3 4
# 38 "/usr/include/netdb.h" 2 3 4




# 1 "/usr/include/x86_64-linux-gnu/bits/netdb.h" 1 3 4
# 26 "/usr/include/x86_64-linux-gnu/bits/netdb.h" 3 4
struct netent
{
  char *n_name;
  char **n_aliases;
  int n_addrtype;
  uint32_t n_net;
};
# 43 "/usr/include/netdb.h" 2 3 4
# 53 "/usr/include/netdb.h" 3 4








extern int *__h_errno_location (void) 
# 61 "/usr/include/netdb.h"
                                     1 1
# 61 "/usr/include/netdb.h" 3 4
                                                                        ;
# 92 "/usr/include/netdb.h" 3 4
extern void herror (const char *__str) 
# 92 "/usr/include/netdb.h"
                                      1
# 92 "/usr/include/netdb.h" 3 4
                                             ;


extern const char *hstrerror (int __err_num) 
# 95 "/usr/include/netdb.h"
                                            1
# 95 "/usr/include/netdb.h" 3 4
                                                   ;




struct hostent
{
  char *h_name;
  char **h_aliases;
  int h_addrtype;
  int h_length;
  char **h_addr_list;



};






extern void sethostent (int __stay_open);





extern void endhostent (void);






extern struct hostent *gethostent (void);






extern struct hostent *gethostbyaddr (const void *__addr, __socklen_t __len,
          int __type);





extern struct hostent *gethostbyname (const char *__name);
# 155 "/usr/include/netdb.h" 3 4
extern struct hostent *gethostbyname2 (const char *__name, int __af);
# 167 "/usr/include/netdb.h" 3 4
extern int gethostent_r (struct hostent *__restrict __result_buf,
    char *__restrict __buf, size_t __buflen,
    struct hostent **__restrict __result,
    int *__restrict __h_errnop);

extern int gethostbyaddr_r (const void *__restrict __addr, __socklen_t __len,
       int __type,
       struct hostent *__restrict __result_buf,
       char *__restrict __buf, size_t __buflen,
       struct hostent **__restrict __result,
       int *__restrict __h_errnop);

extern int gethostbyname_r (const char *__restrict __name,
       struct hostent *__restrict __result_buf,
       char *__restrict __buf, size_t __buflen,
       struct hostent **__restrict __result,
       int *__restrict __h_errnop);

extern int gethostbyname2_r (const char *__restrict __name, int __af,
        struct hostent *__restrict __result_buf,
        char *__restrict __buf, size_t __buflen,
        struct hostent **__restrict __result,
        int *__restrict __h_errnop);
# 198 "/usr/include/netdb.h" 3 4
extern void setnetent (int __stay_open);





extern void endnetent (void);






extern struct netent *getnetent (void);






extern struct netent *getnetbyaddr (uint32_t __net, int __type);





extern struct netent *getnetbyname (const char *__name);
# 237 "/usr/include/netdb.h" 3 4
extern int getnetent_r (struct netent *__restrict __result_buf,
   char *__restrict __buf, size_t __buflen,
   struct netent **__restrict __result,
   int *__restrict __h_errnop);

extern int getnetbyaddr_r (uint32_t __net, int __type,
      struct netent *__restrict __result_buf,
      char *__restrict __buf, size_t __buflen,
      struct netent **__restrict __result,
      int *__restrict __h_errnop);

extern int getnetbyname_r (const char *__restrict __name,
      struct netent *__restrict __result_buf,
      char *__restrict __buf, size_t __buflen,
      struct netent **__restrict __result,
      int *__restrict __h_errnop);




struct servent
{
  char *s_name;
  char **s_aliases;
  int s_port;
  char *s_proto;
};






extern void setservent (int __stay_open);





extern void endservent (void);






extern struct servent *getservent (void);






extern struct servent *getservbyname (const char *__name, const char *__proto);






extern struct servent *getservbyport (int __port, const char *__proto);
# 308 "/usr/include/netdb.h" 3 4
extern int getservent_r (struct servent *__restrict __result_buf,
    char *__restrict __buf, size_t __buflen,
    struct servent **__restrict __result);

extern int getservbyname_r (const char *__restrict __name,
       const char *__restrict __proto,
       struct servent *__restrict __result_buf,
       char *__restrict __buf, size_t __buflen,
       struct servent **__restrict __result);

extern int getservbyport_r (int __port, const char *__restrict __proto,
       struct servent *__restrict __result_buf,
       char *__restrict __buf, size_t __buflen,
       struct servent **__restrict __result);




struct protoent
{
  char *p_name;
  char **p_aliases;
  int p_proto;
};






extern void setprotoent (int __stay_open);





extern void endprotoent (void);






extern struct protoent *getprotoent (void);





extern struct protoent *getprotobyname (const char *__name);





extern struct protoent *getprotobynumber (int __proto);
# 374 "/usr/include/netdb.h" 3 4
extern int getprotoent_r (struct protoent *__restrict __result_buf,
     char *__restrict __buf, size_t __buflen,
     struct protoent **__restrict __result);

extern int getprotobyname_r (const char *__restrict __name,
        struct protoent *__restrict __result_buf,
        char *__restrict __buf, size_t __buflen,
        struct protoent **__restrict __result);

extern int getprotobynumber_r (int __proto,
          struct protoent *__restrict __result_buf,
          char *__restrict __buf, size_t __buflen,
          struct protoent **__restrict __result);
# 395 "/usr/include/netdb.h" 3 4
extern int setnetgrent (const char *__netgroup);







extern void endnetgrent (void);
# 412 "/usr/include/netdb.h" 3 4
extern int getnetgrent (char **__restrict __hostp,
   char **__restrict __userp,
   char **__restrict __domainp);
# 423 "/usr/include/netdb.h" 3 4
extern int innetgr (const char *__netgroup, const char *__host,
      const char *__user, const char *__domain);







extern int getnetgrent_r (char **__restrict __hostp,
     char **__restrict __userp,
     char **__restrict __domainp,
     char *__restrict __buffer, size_t __buflen);
# 451 "/usr/include/netdb.h" 3 4
extern int rcmd (char **__restrict __ahost, unsigned short int __rport,
   const char *__restrict __locuser,
   const char *__restrict __remuser,
   const char *__restrict __cmd, int *__restrict __fd2p);
# 463 "/usr/include/netdb.h" 3 4
extern int rcmd_af (char **__restrict __ahost, unsigned short int __rport,
      const char *__restrict __locuser,
      const char *__restrict __remuser,
      const char *__restrict __cmd, int *__restrict __fd2p,
      sa_family_t __af);
# 479 "/usr/include/netdb.h" 3 4
extern int rexec (char **__restrict __ahost, int __rport,
    const char *__restrict __name,
    const char *__restrict __pass,
    const char *__restrict __cmd, int *__restrict __fd2p);
# 491 "/usr/include/netdb.h" 3 4
extern int rexec_af (char **__restrict __ahost, int __rport,
       const char *__restrict __name,
       const char *__restrict __pass,
       const char *__restrict __cmd, int *__restrict __fd2p,
       sa_family_t __af);
# 505 "/usr/include/netdb.h" 3 4
extern int ruserok (const char *__rhost, int __suser,
      const char *__remuser, const char *__locuser);
# 515 "/usr/include/netdb.h" 3 4
extern int ruserok_af (const char *__rhost, int __suser,
         const char *__remuser, const char *__locuser,
         sa_family_t __af);
# 528 "/usr/include/netdb.h" 3 4
extern int iruserok (uint32_t __raddr, int __suser,
       const char *__remuser, const char *__locuser);
# 539 "/usr/include/netdb.h" 3 4
extern int iruserok_af (const void *__raddr, int __suser,
   const char *__remuser, const char *__locuser,
   sa_family_t __af);
# 551 "/usr/include/netdb.h" 3 4
extern int rresvport (int *__alport);
# 560 "/usr/include/netdb.h" 3 4
extern int rresvport_af (int *__alport, sa_family_t __af);






struct addrinfo
{
  int ai_flags;
  int ai_family;
  int ai_socktype;
  int ai_protocol;
  socklen_t ai_addrlen;
  struct sockaddr *ai_addr;
  char *ai_canonname;
  struct addrinfo *ai_next;
};



struct gaicb
{
  const char *ar_name;
  const char *ar_service;
  const struct addrinfo *ar_request;
  struct addrinfo *ar_result;

  int __return;
  int __glibc_reserved[5];
};
# 662 "/usr/include/netdb.h" 3 4
extern int getaddrinfo (const char *__restrict __name,
   const char *__restrict __service,
   const struct addrinfo *__restrict __req,
   struct addrinfo **__restrict __pai);


extern void freeaddrinfo (struct addrinfo *__ai) 
# 668 "/usr/include/netdb.h"
                                                1
# 668 "/usr/include/netdb.h" 3 4
                                                       ;


extern const char *gai_strerror (int __ecode) 
# 671 "/usr/include/netdb.h"
                                             1
# 671 "/usr/include/netdb.h" 3 4
                                                    ;





extern int getnameinfo (const struct sockaddr *__restrict __sa,
   socklen_t __salen, char *__restrict __host,
   socklen_t __hostlen, char *__restrict __serv,
   socklen_t __servlen, int __flags);
# 692 "/usr/include/netdb.h" 3 4
extern int getaddrinfo_a (int __mode, struct gaicb *__list[__restrict],
     int __ent, struct sigevent *__restrict __sig);
# 703 "/usr/include/netdb.h" 3 4
extern int gai_suspend (const struct gaicb *const __list[], int __ent,
   const struct timespec *__timeout);


extern int gai_error (struct gaicb *__req) 
# 707 "/usr/include/netdb.h"
                                          1
# 707 "/usr/include/netdb.h" 3 4
                                                 ;


extern int gai_cancel (struct gaicb *__gaicbp) 
# 710 "/usr/include/netdb.h"
                                              1
# 710 "/usr/include/netdb.h" 3 4
                                                     ;



# 214 "/home/libraskywalker/Projects/ModelRenamer/git-master/block-sha1/../git-compat-util.h" 2
# 1 "/usr/include/pwd.h" 1 3 4
# 27 "/usr/include/pwd.h" 3 4





# 1 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" 1 3 4
# 33 "/usr/include/pwd.h" 2 3 4
# 49 "/usr/include/pwd.h" 3 4
struct passwd
{
  char *pw_name;
  char *pw_passwd;
  __uid_t pw_uid;
  __gid_t pw_gid;
  char *pw_gecos;
  char *pw_dir;
  char *pw_shell;
};
# 72 "/usr/include/pwd.h" 3 4
extern void setpwent (void);





extern void endpwent (void);





extern struct passwd *getpwent (void);
# 94 "/usr/include/pwd.h" 3 4
extern struct passwd *fgetpwent (FILE *__stream) 
# 94 "/usr/include/pwd.h"
                                                1
# 94 "/usr/include/pwd.h" 3 4
                                                               ;







extern int putpwent (const struct passwd *__restrict __p,
       FILE *__restrict __f);






extern struct passwd *getpwuid (__uid_t __uid);





extern struct passwd *getpwnam (const char *__name) 
# 116 "/usr/include/pwd.h"
                                                   1
# 116 "/usr/include/pwd.h" 3 4
                                                                  ;
# 139 "/usr/include/pwd.h" 3 4
extern int getpwent_r (struct passwd *__restrict __resultbuf,
         char *__restrict __buffer, size_t __buflen,
         struct passwd **__restrict __result)
         
# 142 "/usr/include/pwd.h"
        1
# 142 "/usr/include/pwd.h" 3 4
                             ;


extern int getpwuid_r (__uid_t __uid,
         struct passwd *__restrict __resultbuf,
         char *__restrict __buffer, size_t __buflen,
         struct passwd **__restrict __result)
         
# 149 "/usr/include/pwd.h"
        1
# 149 "/usr/include/pwd.h" 3 4
                             ;

extern int getpwnam_r (const char *__restrict __name,
         struct passwd *__restrict __resultbuf,
         char *__restrict __buffer, size_t __buflen,
         struct passwd **__restrict __result)
         
# 155 "/usr/include/pwd.h"
        1
# 155 "/usr/include/pwd.h" 3 4
                                ;
# 166 "/usr/include/pwd.h" 3 4
extern int fgetpwent_r (FILE *__restrict __stream,
   struct passwd *__restrict __resultbuf,
   char *__restrict __buffer, size_t __buflen,
   struct passwd **__restrict __result)
   
# 170 "/usr/include/pwd.h"
  1
# 170 "/usr/include/pwd.h" 3 4
                          ;
# 184 "/usr/include/pwd.h" 3 4
extern int getpw (__uid_t __uid, char *__buffer);



# 215 "/home/libraskywalker/Projects/ModelRenamer/git-master/block-sha1/../git-compat-util.h" 2
# 1 "/usr/include/x86_64-linux-gnu/sys/un.h" 1 3 4
# 26 "/usr/include/x86_64-linux-gnu/sys/un.h" 3 4



struct sockaddr_un
  {
    sa_family_t sun_family;
    char sun_path[108];
  };
# 44 "/usr/include/x86_64-linux-gnu/sys/un.h" 3 4

# 216 "/home/libraskywalker/Projects/ModelRenamer/git-master/block-sha1/../git-compat-util.h" 2

# 1 "/usr/include/inttypes.h" 1 3 4
# 34 "/usr/include/inttypes.h" 3 4
typedef int __gwchar_t;
# 266 "/usr/include/inttypes.h" 3 4





typedef struct
  {
    long int quot;
    long int rem;
  } imaxdiv_t;
# 290 "/usr/include/inttypes.h" 3 4
extern intmax_t imaxabs (intmax_t __n) 
# 290 "/usr/include/inttypes.h"
                                      1 1
# 290 "/usr/include/inttypes.h" 3 4
                                                                         ;


extern imaxdiv_t imaxdiv (intmax_t __numer, intmax_t __denom)
      
# 294 "/usr/include/inttypes.h"
     1 1
# 294 "/usr/include/inttypes.h" 3 4
                                        ;


extern intmax_t strtoimax (const char *__restrict __nptr,
      char **__restrict __endptr, int __base) 
# 298 "/usr/include/inttypes.h"
                                             1
# 298 "/usr/include/inttypes.h" 3 4
                                                    ;


extern uintmax_t strtoumax (const char *__restrict __nptr,
       char ** __restrict __endptr, int __base) 
# 302 "/usr/include/inttypes.h"
                                               1
# 302 "/usr/include/inttypes.h" 3 4
                                                      ;


extern intmax_t wcstoimax (const __gwchar_t *__restrict __nptr,
      __gwchar_t **__restrict __endptr, int __base)
     
# 307 "/usr/include/inttypes.h"
    1
# 307 "/usr/include/inttypes.h" 3 4
           ;


extern uintmax_t wcstoumax (const __gwchar_t *__restrict __nptr,
       __gwchar_t ** __restrict __endptr, int __base)
     
# 312 "/usr/include/inttypes.h"
    1
# 312 "/usr/include/inttypes.h" 3 4
           ;
# 432 "/usr/include/inttypes.h" 3 4

# 218 "/home/libraskywalker/Projects/ModelRenamer/git-master/block-sha1/../git-compat-util.h" 2
# 233 "/home/libraskywalker/Projects/ModelRenamer/git-master/block-sha1/../git-compat-util.h"
# 1 "/usr/include/grp.h" 1 3 4
# 27 "/usr/include/grp.h" 3 4





# 1 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" 1 3 4
# 33 "/usr/include/grp.h" 2 3 4
# 42 "/usr/include/grp.h" 3 4
struct group
  {
    char *gr_name;
    char *gr_passwd;
    __gid_t gr_gid;
    char **gr_mem;
  };
# 62 "/usr/include/grp.h" 3 4
extern void setgrent (void);





extern void endgrent (void);





extern struct group *getgrent (void);
# 84 "/usr/include/grp.h" 3 4
extern struct group *fgetgrent (FILE *__stream);
# 94 "/usr/include/grp.h" 3 4
extern int putgrent (const struct group *__restrict __p,
       FILE *__restrict __f);






extern struct group *getgrgid (__gid_t __gid);





extern struct group *getgrnam (const char *__name);
# 132 "/usr/include/grp.h" 3 4
extern int getgrent_r (struct group *__restrict __resultbuf,
         char *__restrict __buffer, size_t __buflen,
         struct group **__restrict __result);






extern int getgrgid_r (__gid_t __gid, struct group *__restrict __resultbuf,
         char *__restrict __buffer, size_t __buflen,
         struct group **__restrict __result);





extern int getgrnam_r (const char *__restrict __name,
         struct group *__restrict __resultbuf,
         char *__restrict __buffer, size_t __buflen,
         struct group **__restrict __result);
# 162 "/usr/include/grp.h" 3 4
extern int fgetgrent_r (FILE *__restrict __stream,
   struct group *__restrict __resultbuf,
   char *__restrict __buffer, size_t __buflen,
   struct group **__restrict __result);
# 174 "/usr/include/grp.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" 1 3 4
# 175 "/usr/include/grp.h" 2 3 4


extern int setgroups (size_t __n, const __gid_t *__groups) 
# 177 "/usr/include/grp.h"
                                                          1
# 177 "/usr/include/grp.h" 3 4
                                                                 ;
# 187 "/usr/include/grp.h" 3 4
extern int getgrouplist (const char *__user, __gid_t __group,
    __gid_t *__groups, int *__ngroups);
# 198 "/usr/include/grp.h" 3 4
extern int initgroups (const char *__user, __gid_t __group);




# 234 "/home/libraskywalker/Projects/ModelRenamer/git-master/block-sha1/../git-compat-util.h" 2
# 263 "/home/libraskywalker/Projects/ModelRenamer/git-master/block-sha1/../git-compat-util.h"
# 1 "/usr/include/libgen.h" 1 3 4
# 23 "/usr/include/libgen.h" 3 4



extern char *dirname (char *__path) 
# 26 "/usr/include/libgen.h"
                                   1
# 26 "/usr/include/libgen.h" 3 4
                                          ;







extern char *__xpg_basename (char *__path) 
# 34 "/usr/include/libgen.h"
                                          1
# 34 "/usr/include/libgen.h" 3 4
                                                 ;



# 264 "/home/libraskywalker/Projects/ModelRenamer/git-master/block-sha1/../git-compat-util.h" 2
# 272 "/home/libraskywalker/Projects/ModelRenamer/git-master/block-sha1/../git-compat-util.h"
# 1 "/usr/include/iconv.h" 1 3 4
# 23 "/usr/include/iconv.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" 1 3 4
# 24 "/usr/include/iconv.h" 2 3 4





typedef void *iconv_t;







extern iconv_t iconv_open (const char *__tocode, const char *__fromcode);




extern size_t iconv (iconv_t __cd, char **__restrict __inbuf,
       size_t *__restrict __inbytesleft,
       char **__restrict __outbuf,
       size_t *__restrict __outbytesleft);





extern int iconv_close (iconv_t __cd);


# 273 "/home/libraskywalker/Projects/ModelRenamer/git-master/block-sha1/../git-compat-util.h" 2
# 283 "/home/libraskywalker/Projects/ModelRenamer/git-master/block-sha1/../git-compat-util.h"
# 1 "/usr/include/openssl/ssl.h" 1 3 4
# 146 "/usr/include/openssl/ssl.h" 3 4
# 1 "/usr/include/openssl/e_os2.h" 1 3 4
# 56 "/usr/include/openssl/e_os2.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/openssl/opensslconf.h" 1 3 4
# 57 "/usr/include/openssl/e_os2.h" 2 3 4
# 147 "/usr/include/openssl/ssl.h" 2 3 4


# 1 "/usr/include/openssl/comp.h" 1 3 4




# 1 "/usr/include/openssl/crypto.h" 1 3 4
# 122 "/usr/include/openssl/crypto.h" 3 4
# 1 "/usr/include/openssl/e_os2.h" 1 3 4
# 56 "/usr/include/openssl/e_os2.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/openssl/opensslconf.h" 1 3 4
# 57 "/usr/include/openssl/e_os2.h" 2 3 4
# 123 "/usr/include/openssl/crypto.h" 2 3 4





# 1 "/usr/include/openssl/stack.h" 1 3 4
# 66 "/usr/include/openssl/stack.h" 3 4
typedef struct stack_st {
    int num;
    char **data;
    int sorted;
    int num_alloc;
    int (*comp) (const void *, const void *);
} _STACK;




int sk_num(const _STACK *);
void *sk_value(const _STACK *, int);

void *sk_set(_STACK *, int, void *);

_STACK *sk_new(int (*cmp) (const void *, const void *));
_STACK *sk_new_null(void);
void sk_free(_STACK *);
void sk_pop_free(_STACK *st, void (*func) (void *));
_STACK *sk_deep_copy(_STACK *, void *(*)(void *), void (*)(void *));
int sk_insert(_STACK *sk, void *data, int where);
void *sk_delete(_STACK *st, int loc);
void *sk_delete_ptr(_STACK *st, void *p);
int sk_find(_STACK *st, void *data);
int sk_find_ex(_STACK *st, void *data);
int sk_push(_STACK *st, void *data);
int sk_unshift(_STACK *st, void *data);
void *sk_shift(_STACK *st);
void *sk_pop(_STACK *st);
void sk_zero(_STACK *st);
int (*sk_set_cmp_func(_STACK *sk, int (*c) (const void *, const void *)))
 (const void *, const void *);
_STACK *sk_dup(_STACK *st);
void sk_sort(_STACK *st);
int sk_is_sorted(const _STACK *st);
# 129 "/usr/include/openssl/crypto.h" 2 3 4
# 1 "/usr/include/openssl/safestack.h" 1 3 4
# 119 "/usr/include/openssl/safestack.h" 3 4
typedef char *OPENSSL_STRING;

typedef const char *OPENSSL_CSTRING;
# 131 "/usr/include/openssl/safestack.h" 3 4
struct stack_st_OPENSSL_STRING { _STACK stack; };





typedef void *OPENSSL_BLOCK;
struct stack_st_OPENSSL_BLOCK { _STACK stack; };
# 130 "/usr/include/openssl/crypto.h" 2 3 4
# 1 "/usr/include/openssl/opensslv.h" 1 3 4
# 131 "/usr/include/openssl/crypto.h" 2 3 4
# 1 "/usr/include/openssl/ossl_typ.h" 1 3 4
# 62 "/usr/include/openssl/ossl_typ.h" 3 4
# 1 "/usr/include/openssl/e_os2.h" 1 3 4
# 56 "/usr/include/openssl/e_os2.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/openssl/opensslconf.h" 1 3 4
# 57 "/usr/include/openssl/e_os2.h" 2 3 4
# 63 "/usr/include/openssl/ossl_typ.h" 2 3 4
# 83 "/usr/include/openssl/ossl_typ.h" 3 4
typedef struct asn1_string_st ASN1_INTEGER;
typedef struct asn1_string_st ASN1_ENUMERATED;
typedef struct asn1_string_st ASN1_BIT_STRING;
typedef struct asn1_string_st ASN1_OCTET_STRING;
typedef struct asn1_string_st ASN1_PRINTABLESTRING;
typedef struct asn1_string_st ASN1_T61STRING;
typedef struct asn1_string_st ASN1_IA5STRING;
typedef struct asn1_string_st ASN1_GENERALSTRING;
typedef struct asn1_string_st ASN1_UNIVERSALSTRING;
typedef struct asn1_string_st ASN1_BMPSTRING;
typedef struct asn1_string_st ASN1_UTCTIME;
typedef struct asn1_string_st ASN1_TIME;
typedef struct asn1_string_st ASN1_GENERALIZEDTIME;
typedef struct asn1_string_st ASN1_VISIBLESTRING;
typedef struct asn1_string_st ASN1_UTF8STRING;
typedef struct asn1_string_st ASN1_STRING;
typedef int ASN1_BOOLEAN;
typedef int ASN1_NULL;


typedef struct asn1_object_st ASN1_OBJECT;

typedef struct ASN1_ITEM_st ASN1_ITEM;
typedef struct asn1_pctx_st ASN1_PCTX;
# 120 "/usr/include/openssl/ossl_typ.h" 3 4
typedef struct bignum_st BIGNUM;
typedef struct bignum_ctx BN_CTX;
typedef struct bn_blinding_st BN_BLINDING;
typedef struct bn_mont_ctx_st BN_MONT_CTX;
typedef struct bn_recp_ctx_st BN_RECP_CTX;
typedef struct bn_gencb_st BN_GENCB;

typedef struct buf_mem_st BUF_MEM;

typedef struct evp_cipher_st EVP_CIPHER;
typedef struct evp_cipher_ctx_st EVP_CIPHER_CTX;
typedef struct env_md_st EVP_MD;
typedef struct env_md_ctx_st EVP_MD_CTX;
typedef struct evp_pkey_st EVP_PKEY;

typedef struct evp_pkey_asn1_method_st EVP_PKEY_ASN1_METHOD;

typedef struct evp_pkey_method_st EVP_PKEY_METHOD;
typedef struct evp_pkey_ctx_st EVP_PKEY_CTX;

typedef struct dh_st DH;
typedef struct dh_method DH_METHOD;

typedef struct dsa_st DSA;
typedef struct dsa_method DSA_METHOD;

typedef struct rsa_st RSA;
typedef struct rsa_meth_st RSA_METHOD;

typedef struct rand_meth_st RAND_METHOD;

typedef struct ecdh_method ECDH_METHOD;
typedef struct ecdsa_method ECDSA_METHOD;

typedef struct x509_st X509;
typedef struct X509_algor_st X509_ALGOR;
typedef struct X509_crl_st X509_CRL;
typedef struct x509_crl_method_st X509_CRL_METHOD;
typedef struct x509_revoked_st X509_REVOKED;
typedef struct X509_name_st X509_NAME;
typedef struct X509_pubkey_st X509_PUBKEY;
typedef struct x509_store_st X509_STORE;
typedef struct x509_store_ctx_st X509_STORE_CTX;

typedef struct pkcs8_priv_key_info_st PKCS8_PRIV_KEY_INFO;

typedef struct v3_ext_ctx X509V3_CTX;
typedef struct conf_st CONF;

typedef struct store_st STORE;
typedef struct store_method_st STORE_METHOD;

typedef struct ui_st UI;
typedef struct ui_method_st UI_METHOD;

typedef struct st_ERR_FNS ERR_FNS;

typedef struct engine_st ENGINE;
typedef struct ssl_st SSL;
typedef struct ssl_ctx_st SSL_CTX;

typedef struct X509_POLICY_NODE_st X509_POLICY_NODE;
typedef struct X509_POLICY_LEVEL_st X509_POLICY_LEVEL;
typedef struct X509_POLICY_TREE_st X509_POLICY_TREE;
typedef struct X509_POLICY_CACHE_st X509_POLICY_CACHE;

typedef struct AUTHORITY_KEYID_st AUTHORITY_KEYID;
typedef struct DIST_POINT_st DIST_POINT;
typedef struct ISSUING_DIST_POINT_st ISSUING_DIST_POINT;
typedef struct NAME_CONSTRAINTS_st NAME_CONSTRAINTS;





typedef struct crypto_ex_data_st CRYPTO_EX_DATA;

typedef int CRYPTO_EX_new (void *parent, void *ptr, CRYPTO_EX_DATA *ad,
                           int idx, long argl, void *argp);
typedef void CRYPTO_EX_free (void *parent, void *ptr, CRYPTO_EX_DATA *ad,
                             int idx, long argl, void *argp);
typedef int CRYPTO_EX_dup (CRYPTO_EX_DATA *to, CRYPTO_EX_DATA *from,
                           void *from_d, int idx, long argl, void *argp);

typedef struct ocsp_req_ctx_st OCSP_REQ_CTX;
typedef struct ocsp_response_st OCSP_RESPONSE;
typedef struct ocsp_responder_id_st OCSP_RESPID;
# 132 "/usr/include/openssl/crypto.h" 2 3 4
# 141 "/usr/include/openssl/crypto.h" 3 4
# 1 "/usr/include/openssl/symhacks.h" 1 3 4
# 58 "/usr/include/openssl/symhacks.h" 3 4
# 1 "/usr/include/openssl/e_os2.h" 1 3 4
# 56 "/usr/include/openssl/e_os2.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/openssl/opensslconf.h" 1 3 4
# 57 "/usr/include/openssl/e_os2.h" 2 3 4
# 59 "/usr/include/openssl/symhacks.h" 2 3 4
# 142 "/usr/include/openssl/crypto.h" 2 3 4
# 175 "/usr/include/openssl/crypto.h" 3 4
typedef struct openssl_item_st {
    int code;
    void *value;
    size_t value_size;

    size_t *value_length;
} OPENSSL_ITEM;
# 262 "/usr/include/openssl/crypto.h" 3 4
typedef struct {
    int references;
    struct CRYPTO_dynlock_value *data;
} CRYPTO_dynlock;
# 290 "/usr/include/openssl/crypto.h" 3 4
typedef struct bio_st BIO_dummy;

struct crypto_ex_data_st {
    struct stack_st_void *sk;

    int dummy;
};
struct stack_st_void { _STACK stack; };






typedef struct crypto_ex_data_func_st {
    long argl;
    void *argp;
    CRYPTO_EX_new *new_func;
    CRYPTO_EX_free *free_func;
    CRYPTO_EX_dup *dup_func;
} CRYPTO_EX_DATA_FUNCS;

struct stack_st_CRYPTO_EX_DATA_FUNCS { _STACK stack; };
# 369 "/usr/include/openssl/crypto.h" 3 4
int CRYPTO_mem_ctrl(int mode);
int CRYPTO_is_mem_check_on(void);
# 396 "/usr/include/openssl/crypto.h" 3 4
const char *SSLeay_version(int type);
unsigned long SSLeay(void);

int OPENSSL_issetugid(void);


typedef struct st_CRYPTO_EX_DATA_IMPL CRYPTO_EX_DATA_IMPL;

const CRYPTO_EX_DATA_IMPL *CRYPTO_get_ex_data_implementation(void);

int CRYPTO_set_ex_data_implementation(const CRYPTO_EX_DATA_IMPL *i);

int CRYPTO_ex_data_new_class(void);

int CRYPTO_get_ex_new_index(int class_index, long argl, void *argp,
                            CRYPTO_EX_new *new_func, CRYPTO_EX_dup *dup_func,
                            CRYPTO_EX_free *free_func);




int CRYPTO_new_ex_data(int class_index, void *obj, CRYPTO_EX_DATA *ad);
int CRYPTO_dup_ex_data(int class_index, CRYPTO_EX_DATA *to,
                       CRYPTO_EX_DATA *from);
void CRYPTO_free_ex_data(int class_index, void *obj, CRYPTO_EX_DATA *ad);




int CRYPTO_set_ex_data(CRYPTO_EX_DATA *ad, int idx, void *val);
void *CRYPTO_get_ex_data(const CRYPTO_EX_DATA *ad, int idx);




void CRYPTO_cleanup_all_ex_data(void);

int CRYPTO_get_new_lockid(char *name);

int CRYPTO_num_locks(void);
void CRYPTO_lock(int mode, int type, const char *file, int line);
void CRYPTO_set_locking_callback(void (*func) (int mode, int type,
                                               const char *file, int line));
void (*CRYPTO_get_locking_callback(void)) (int mode, int type,
                                           const char *file, int line);
void CRYPTO_set_add_lock_callback(int (*func)
                                   (int *num, int mount, int type,
                                    const char *file, int line));
int (*CRYPTO_get_add_lock_callback(void)) (int *num, int mount, int type,
                                           const char *file, int line);


typedef struct crypto_threadid_st {
    void *ptr;
    unsigned long val;
} CRYPTO_THREADID;

void CRYPTO_THREADID_set_numeric(CRYPTO_THREADID *id, unsigned long val);
void CRYPTO_THREADID_set_pointer(CRYPTO_THREADID *id, void *ptr);
int CRYPTO_THREADID_set_callback(void (*threadid_func) (CRYPTO_THREADID *));
void (*CRYPTO_THREADID_get_callback(void)) (CRYPTO_THREADID *);
void CRYPTO_THREADID_current(CRYPTO_THREADID *id);
int CRYPTO_THREADID_cmp(const CRYPTO_THREADID *a, const CRYPTO_THREADID *b);
void CRYPTO_THREADID_cpy(CRYPTO_THREADID *dest, const CRYPTO_THREADID *src);
unsigned long CRYPTO_THREADID_hash(const CRYPTO_THREADID *id);

void CRYPTO_set_id_callback(unsigned long (*func) (void));
unsigned long (*CRYPTO_get_id_callback(void)) (void);
unsigned long CRYPTO_thread_id(void);


const char *CRYPTO_get_lock_name(int type);
int CRYPTO_add_lock(int *pointer, int amount, int type, const char *file,
                    int line);

int CRYPTO_get_new_dynlockid(void);
void CRYPTO_destroy_dynlockid(int i);
struct CRYPTO_dynlock_value *CRYPTO_get_dynlock_value(int i);
void CRYPTO_set_dynlock_create_callback(struct CRYPTO_dynlock_value
                                        *(*dyn_create_function) (const char
                                                                 *file,
                                                                 int line));
void CRYPTO_set_dynlock_lock_callback(void (*dyn_lock_function)
                                       (int mode,
                                        struct CRYPTO_dynlock_value *l,
                                        const char *file, int line));
void CRYPTO_set_dynlock_destroy_callback(void (*dyn_destroy_function)
                                          (struct CRYPTO_dynlock_value *l,
                                           const char *file, int line));
struct CRYPTO_dynlock_value
*(*CRYPTO_get_dynlock_create_callback(void)) (const char *file, int line);
void (*CRYPTO_get_dynlock_lock_callback(void)) (int mode,
                                                struct CRYPTO_dynlock_value
                                                *l, const char *file,
                                                int line);
void (*CRYPTO_get_dynlock_destroy_callback(void)) (struct CRYPTO_dynlock_value
                                                   *l, const char *file,
                                                   int line);





int CRYPTO_set_mem_functions(void *(*m) (size_t), void *(*r) (void *, size_t),
                             void (*f) (void *));
int CRYPTO_set_locked_mem_functions(void *(*m) (size_t),
                                    void (*free_func) (void *));
int CRYPTO_set_mem_ex_functions(void *(*m) (size_t, const char *, int),
                                void *(*r) (void *, size_t, const char *,
                                            int), void (*f) (void *));
int CRYPTO_set_locked_mem_ex_functions(void *(*m) (size_t, const char *, int),
                                       void (*free_func) (void *));
int CRYPTO_set_mem_debug_functions(void (*m)
                                    (void *, int, const char *, int, int),
                                   void (*r) (void *, void *, int,
                                              const char *, int, int),
                                   void (*f) (void *, int), void (*so) (long),
                                   long (*go) (void));
void CRYPTO_get_mem_functions(void *(**m) (size_t),
                              void *(**r) (void *, size_t),
                              void (**f) (void *));
void CRYPTO_get_locked_mem_functions(void *(**m) (size_t),
                                     void (**f) (void *));
void CRYPTO_get_mem_ex_functions(void *(**m) (size_t, const char *, int),
                                 void *(**r) (void *, size_t, const char *,
                                              int), void (**f) (void *));
void CRYPTO_get_locked_mem_ex_functions(void
                                        *(**m) (size_t, const char *, int),
                                        void (**f) (void *));
void CRYPTO_get_mem_debug_functions(void (**m)
                                     (void *, int, const char *, int, int),
                                    void (**r) (void *, void *, int,
                                                const char *, int, int),
                                    void (**f) (void *, int),
                                    void (**so) (long), long (**go) (void));

void *CRYPTO_malloc_locked(int num, const char *file, int line);
void CRYPTO_free_locked(void *ptr);
void *CRYPTO_malloc(int num, const char *file, int line);
char *CRYPTO_strdup(const char *str, const char *file, int line);
void CRYPTO_free(void *ptr);
void *CRYPTO_realloc(void *addr, int num, const char *file, int line);
void *CRYPTO_realloc_clean(void *addr, int old_num, int num, const char *file,
                           int line);
void *CRYPTO_remalloc(void *addr, int num, const char *file, int line);

void OPENSSL_cleanse(void *ptr, size_t len);

void CRYPTO_set_mem_debug_options(long bits);
long CRYPTO_get_mem_debug_options(void);



int CRYPTO_push_info_(const char *info, const char *file, int line);
int CRYPTO_pop_info(void);
int CRYPTO_remove_all_info(void);
# 563 "/usr/include/openssl/crypto.h" 3 4
void CRYPTO_dbg_malloc(void *addr, int num, const char *file, int line,
                       int before_p);
void CRYPTO_dbg_realloc(void *addr1, void *addr2, int num, const char *file,
                        int line, int before_p);
void CRYPTO_dbg_free(void *addr, int before_p);
# 577 "/usr/include/openssl/crypto.h" 3 4
void CRYPTO_dbg_set_options(long bits);
long CRYPTO_dbg_get_options(void);


void CRYPTO_mem_leaks_fp(FILE *);

void CRYPTO_mem_leaks(struct bio_st *bio);

typedef void *CRYPTO_MEM_LEAK_CB (unsigned long, const char *, int, int,
                                  void *);
void CRYPTO_mem_leaks_cb(CRYPTO_MEM_LEAK_CB *cb);


void OpenSSLDie(const char *file, int line, const char *assertion);


unsigned long *OPENSSL_ia32cap_loc(void);

int OPENSSL_isservice(void);

int FIPS_mode(void);
int FIPS_mode_set(int r);

void OPENSSL_init(void);
# 631 "/usr/include/openssl/crypto.h" 3 4
int CRYPTO_memcmp(const volatile void *a, const volatile void *b, size_t len);






void ERR_load_CRYPTO_strings(void);
# 6 "/usr/include/openssl/comp.h" 2 3 4





typedef struct comp_ctx_st COMP_CTX;

typedef struct comp_method_st {
    int type;
    const char *name;
    int (*init) (COMP_CTX *ctx);
    void (*finish) (COMP_CTX *ctx);
    int (*compress) (COMP_CTX *ctx,
                     unsigned char *out, unsigned int olen,
                     unsigned char *in, unsigned int ilen);
    int (*expand) (COMP_CTX *ctx,
                   unsigned char *out, unsigned int olen,
                   unsigned char *in, unsigned int ilen);



    long (*ctrl) (void);
    long (*callback_ctrl) (void);
} COMP_METHOD;

struct comp_ctx_st {
    COMP_METHOD *meth;
    unsigned long compress_in;
    unsigned long compress_out;
    unsigned long expand_in;
    unsigned long expand_out;
    CRYPTO_EX_DATA ex_data;
};

COMP_CTX *COMP_CTX_new(COMP_METHOD *meth);
void COMP_CTX_free(COMP_CTX *ctx);
int COMP_compress_block(COMP_CTX *ctx, unsigned char *out, int olen,
                        unsigned char *in, int ilen);
int COMP_expand_block(COMP_CTX *ctx, unsigned char *out, int olen,
                      unsigned char *in, int ilen);
COMP_METHOD *COMP_rle(void);
COMP_METHOD *COMP_zlib(void);
void COMP_zlib_cleanup(void);
# 61 "/usr/include/openssl/comp.h" 3 4
void ERR_load_COMP_strings(void);
# 150 "/usr/include/openssl/ssl.h" 2 3 4


# 1 "/usr/include/openssl/bio.h" 1 3 4
# 62 "/usr/include/openssl/bio.h" 3 4
# 1 "/usr/include/openssl/e_os2.h" 1 3 4
# 56 "/usr/include/openssl/e_os2.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/openssl/opensslconf.h" 1 3 4
# 57 "/usr/include/openssl/e_os2.h" 2 3 4
# 63 "/usr/include/openssl/bio.h" 2 3 4
# 238 "/usr/include/openssl/bio.h" 3 4
typedef struct bio_st BIO;

void BIO_set_flags(BIO *b, int flags);
int BIO_test_flags(const BIO *b, int flags);
void BIO_clear_flags(BIO *b, int flags);
# 298 "/usr/include/openssl/bio.h" 3 4
long (*BIO_get_callback(const BIO *b)) (struct bio_st *, int, const char *,
                                        int, long, long);
void BIO_set_callback(BIO *b,
                      long (*callback) (struct bio_st *, int, const char *,
                                        int, long, long));
char *BIO_get_callback_arg(const BIO *b);
void BIO_set_callback_arg(BIO *b, char *arg);

const char *BIO_method_name(const BIO *b);
int BIO_method_type(const BIO *b);

typedef void bio_info_cb (struct bio_st *, int, const char *, int, long,
                          long);

typedef struct bio_method_st {
    int type;
    const char *name;
    int (*bwrite) (BIO *, const char *, int);
    int (*bread) (BIO *, char *, int);
    int (*bputs) (BIO *, const char *);
    int (*bgets) (BIO *, char *, int);
    long (*ctrl) (BIO *, int, long, void *);
    int (*create) (BIO *);
    int (*destroy) (BIO *);
    long (*callback_ctrl) (BIO *, int, bio_info_cb *);
} BIO_METHOD;

struct bio_st {
    BIO_METHOD *method;

    long (*callback) (struct bio_st *, int, const char *, int, long, long);
    char *cb_arg;
    int init;
    int shutdown;
    int flags;
    int retry_reason;
    int num;
    void *ptr;
    struct bio_st *next_bio;
    struct bio_st *prev_bio;
    int references;
    unsigned long num_read;
    unsigned long num_write;
    CRYPTO_EX_DATA ex_data;
};

struct stack_st_BIO { _STACK stack; };

typedef struct bio_f_buffer_ctx_struct {
# 359 "/usr/include/openssl/bio.h" 3 4
    int ibuf_size;
    int obuf_size;
    char *ibuf;
    int ibuf_len;
    int ibuf_off;
    char *obuf;
    int obuf_len;
    int obuf_off;
} BIO_F_BUFFER_CTX;


typedef int asn1_ps_func (BIO *b, unsigned char **pbuf, int *plen,
                          void *parg);
# 594 "/usr/include/openssl/bio.h" 3 4
size_t BIO_ctrl_pending(BIO *b);
size_t BIO_ctrl_wpending(BIO *b);
# 613 "/usr/include/openssl/bio.h" 3 4
size_t BIO_ctrl_get_write_guarantee(BIO *b);
size_t BIO_ctrl_get_read_request(BIO *b);
int BIO_ctrl_reset_read_request(BIO *b);
# 636 "/usr/include/openssl/bio.h" 3 4
int BIO_set_ex_data(BIO *bio, int idx, void *data);
void *BIO_get_ex_data(BIO *bio, int idx);
int BIO_get_ex_new_index(long argl, void *argp, CRYPTO_EX_new *new_func,
                         CRYPTO_EX_dup *dup_func, CRYPTO_EX_free *free_func);
unsigned long BIO_number_read(BIO *bio);
unsigned long BIO_number_written(BIO *bio);


int BIO_asn1_set_prefix(BIO *b, asn1_ps_func *prefix,
                        asn1_ps_func *prefix_free);
int BIO_asn1_get_prefix(BIO *b, asn1_ps_func **pprefix,
                        asn1_ps_func **pprefix_free);
int BIO_asn1_set_suffix(BIO *b, asn1_ps_func *suffix,
                        asn1_ps_func *suffix_free);
int BIO_asn1_get_suffix(BIO *b, asn1_ps_func **psuffix,
                        asn1_ps_func **psuffix_free);


BIO_METHOD *BIO_s_file(void);
BIO *BIO_new_file(const char *filename, const char *mode);
BIO *BIO_new_fp(FILE *stream, int close_flag);


BIO *BIO_new(BIO_METHOD *type);
int BIO_set(BIO *a, BIO_METHOD *type);
int BIO_free(BIO *a);
void BIO_vfree(BIO *a);
int BIO_read(BIO *b, void *data, int len);
int BIO_gets(BIO *bp, char *buf, int size);
int BIO_write(BIO *b, const void *data, int len);
int BIO_puts(BIO *bp, const char *buf);
int BIO_indent(BIO *b, int indent, int max);
long BIO_ctrl(BIO *bp, int cmd, long larg, void *parg);
long BIO_callback_ctrl(BIO *b, int cmd,
                       void (*fp) (struct bio_st *, int, const char *, int,
                                   long, long));
char *BIO_ptr_ctrl(BIO *bp, int cmd, long larg);
long BIO_int_ctrl(BIO *bp, int cmd, long larg, int iarg);
BIO *BIO_push(BIO *b, BIO *append);
BIO *BIO_pop(BIO *b);
void BIO_free_all(BIO *a);
BIO *BIO_find_type(BIO *b, int bio_type);
BIO *BIO_next(BIO *b);
BIO *BIO_get_retry_BIO(BIO *bio, int *reason);
int BIO_get_retry_reason(BIO *bio);
BIO *BIO_dup_chain(BIO *in);

int BIO_nread0(BIO *bio, char **buf);
int BIO_nread(BIO *bio, char **buf, int num);
int BIO_nwrite0(BIO *bio, char **buf);
int BIO_nwrite(BIO *bio, char **buf, int num);

long BIO_debug_callback(BIO *bio, int cmd, const char *argp, int argi,
                        long argl, long ret);

BIO_METHOD *BIO_s_mem(void);
BIO *BIO_new_mem_buf(const void *buf, int len);
BIO_METHOD *BIO_s_socket(void);
BIO_METHOD *BIO_s_connect(void);
BIO_METHOD *BIO_s_accept(void);
BIO_METHOD *BIO_s_fd(void);

BIO_METHOD *BIO_s_log(void);

BIO_METHOD *BIO_s_bio(void);
BIO_METHOD *BIO_s_null(void);
BIO_METHOD *BIO_f_null(void);
BIO_METHOD *BIO_f_buffer(void);



BIO_METHOD *BIO_f_nbio_test(void);

BIO_METHOD *BIO_s_datagram(void);







int BIO_sock_should_retry(int i);
int BIO_sock_non_fatal_error(int error);
int BIO_dgram_non_fatal_error(int error);

int BIO_fd_should_retry(int i);
int BIO_fd_non_fatal_error(int error);
int BIO_dump_cb(int (*cb) (const void *data, size_t len, void *u),
                void *u, const char *s, int len);
int BIO_dump_indent_cb(int (*cb) (const void *data, size_t len, void *u),
                       void *u, const char *s, int len, int indent);
int BIO_dump(BIO *b, const char *bytes, int len);
int BIO_dump_indent(BIO *b, const char *bytes, int len, int indent);

int BIO_dump_fp(FILE *fp, const char *s, int len);
int BIO_dump_indent_fp(FILE *fp, const char *s, int len, int indent);

int BIO_hex_string(BIO *out, int indent, int width, unsigned char *data,
                   int datalen);

struct hostent *BIO_gethostbyname(const char *name);
# 746 "/usr/include/openssl/bio.h" 3 4
int BIO_sock_error(int sock);
int BIO_socket_ioctl(int fd, long type, void *arg);
int BIO_socket_nbio(int fd, int mode);
int BIO_get_port(const char *str, unsigned short *port_ptr);
int BIO_get_host_ip(const char *str, unsigned char *ip);
int BIO_get_accept_socket(char *host_port, int mode);
int BIO_accept(int sock, char **ip_port);
int BIO_sock_init(void);
void BIO_sock_cleanup(void);
int BIO_set_tcp_ndelay(int sock, int turn_on);

BIO *BIO_new_socket(int sock, int close_flag);
BIO *BIO_new_dgram(int fd, int close_flag);
# 771 "/usr/include/openssl/bio.h" 3 4
BIO *BIO_new_fd(int fd, int close_flag);
BIO *BIO_new_connect(const char *host_port);
BIO *BIO_new_accept(const char *host_port);

int BIO_new_bio_pair(BIO **bio1, size_t writebuf1,
                     BIO **bio2, size_t writebuf2);






void BIO_copy_next_retry(BIO *b);
# 794 "/usr/include/openssl/bio.h" 3 4
int BIO_printf(BIO *bio, const char *format, ...)

# 795 "/usr/include/openssl/bio.h"
1
# 795 "/usr/include/openssl/bio.h" 3 4
                                              ;
int BIO_vprintf(BIO *bio, const char *format, va_list args)

# 797 "/usr/include/openssl/bio.h"
1
# 797 "/usr/include/openssl/bio.h" 3 4
                                              ;
int BIO_snprintf(char *buf, size_t n, const char *format, ...)

# 799 "/usr/include/openssl/bio.h"
1
# 799 "/usr/include/openssl/bio.h" 3 4
                                              ;
int BIO_vsnprintf(char *buf, size_t n, const char *format, va_list args)

# 801 "/usr/include/openssl/bio.h"
1
# 801 "/usr/include/openssl/bio.h" 3 4
                                              ;







void ERR_load_BIO_strings(void);
# 153 "/usr/include/openssl/ssl.h" 2 3 4



# 1 "/usr/include/openssl/x509.h" 1 3 4
# 67 "/usr/include/openssl/x509.h" 3 4
# 1 "/usr/include/openssl/e_os2.h" 1 3 4
# 56 "/usr/include/openssl/e_os2.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/openssl/opensslconf.h" 1 3 4
# 57 "/usr/include/openssl/e_os2.h" 2 3 4
# 68 "/usr/include/openssl/x509.h" 2 3 4


# 1 "/usr/include/openssl/buffer.h" 1 3 4
# 68 "/usr/include/openssl/buffer.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" 1 3 4
# 69 "/usr/include/openssl/buffer.h" 2 3 4
# 77 "/usr/include/openssl/buffer.h" 3 4
struct buf_mem_st {
    size_t length;
    char *data;
    size_t max;
};

BUF_MEM *BUF_MEM_new(void);
void BUF_MEM_free(BUF_MEM *a);
int BUF_MEM_grow(BUF_MEM *str, size_t len);
int BUF_MEM_grow_clean(BUF_MEM *str, size_t len);
size_t BUF_strnlen(const char *str, size_t maxlen);
char *BUF_strdup(const char *str);





char *BUF_strndup(const char *str, size_t siz);

void *BUF_memdup(const void *data, size_t siz);
void BUF_reverse(unsigned char *out, const unsigned char *in, size_t siz);


size_t BUF_strlcpy(char *dst, const char *src, size_t siz);
size_t BUF_strlcat(char *dst, const char *src, size_t siz);






void ERR_load_BUF_strings(void);
# 71 "/usr/include/openssl/x509.h" 2 3 4


# 1 "/usr/include/openssl/evp.h" 1 3 4
# 66 "/usr/include/openssl/evp.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/openssl/opensslconf.h" 1 3 4
# 67 "/usr/include/openssl/evp.h" 2 3 4
# 94 "/usr/include/openssl/evp.h" 3 4
# 1 "/usr/include/openssl/objects.h" 1 3 4
# 65 "/usr/include/openssl/objects.h" 3 4
# 1 "/usr/include/openssl/obj_mac.h" 1 3 4
# 66 "/usr/include/openssl/objects.h" 2 3 4
# 965 "/usr/include/openssl/objects.h" 3 4
# 1 "/usr/include/openssl/asn1.h" 1 3 4
# 63 "/usr/include/openssl/asn1.h" 3 4
# 1 "/usr/include/openssl/e_os2.h" 1 3 4
# 56 "/usr/include/openssl/e_os2.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/openssl/opensslconf.h" 1 3 4
# 57 "/usr/include/openssl/e_os2.h" 2 3 4
# 64 "/usr/include/openssl/asn1.h" 2 3 4
# 74 "/usr/include/openssl/asn1.h" 3 4
# 1 "/usr/include/openssl/bn.h" 1 3 4
# 128 "/usr/include/openssl/bn.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/5/include-fixed/limits.h" 1 3 4
# 129 "/usr/include/openssl/bn.h" 2 3 4
# 1 "/usr/include/openssl/e_os2.h" 1 3 4
# 56 "/usr/include/openssl/e_os2.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/openssl/opensslconf.h" 1 3 4
# 57 "/usr/include/openssl/e_os2.h" 2 3 4
# 130 "/usr/include/openssl/bn.h" 2 3 4
# 313 "/usr/include/openssl/bn.h" 3 4
struct bignum_st {
    unsigned long *d;

    int top;

    int dmax;
    int neg;
    int flags;
};


struct bn_mont_ctx_st {
    int ri;
    BIGNUM RR;
    BIGNUM N;
    BIGNUM Ni;

    unsigned long n0[2];


    int flags;
};





struct bn_recp_ctx_st {
    BIGNUM N;
    BIGNUM Nr;
    int num_bits;
    int shift;
    int flags;
};


struct bn_gencb_st {
    unsigned int ver;
    void *arg;
    union {

        void (*cb_1) (int, int, void *);

        int (*cb_2) (int, int, BN_GENCB *);
    } cb;
};

int BN_GENCB_call(BN_GENCB *cb, int a, int b);
# 421 "/usr/include/openssl/bn.h" 3 4
const BIGNUM *BN_value_one(void);
char *BN_options(void);
BN_CTX *BN_CTX_new(void);

void BN_CTX_init(BN_CTX *c);

void BN_CTX_free(BN_CTX *c);
void BN_CTX_start(BN_CTX *ctx);
BIGNUM *BN_CTX_get(BN_CTX *ctx);
void BN_CTX_end(BN_CTX *ctx);
int BN_rand(BIGNUM *rnd, int bits, int top, int bottom);
int BN_pseudo_rand(BIGNUM *rnd, int bits, int top, int bottom);
int BN_rand_range(BIGNUM *rnd, const BIGNUM *range);
int BN_pseudo_rand_range(BIGNUM *rnd, const BIGNUM *range);
int BN_num_bits(const BIGNUM *a);
int BN_num_bits_word(unsigned long);
BIGNUM *BN_new(void);
void BN_init(BIGNUM *);
void BN_clear_free(BIGNUM *a);
BIGNUM *BN_copy(BIGNUM *a, const BIGNUM *b);
void BN_swap(BIGNUM *a, BIGNUM *b);
BIGNUM *BN_bin2bn(const unsigned char *s, int len, BIGNUM *ret);
int BN_bn2bin(const BIGNUM *a, unsigned char *to);
BIGNUM *BN_mpi2bn(const unsigned char *s, int len, BIGNUM *ret);
int BN_bn2mpi(const BIGNUM *a, unsigned char *to);
int BN_sub(BIGNUM *r, const BIGNUM *a, const BIGNUM *b);
int BN_usub(BIGNUM *r, const BIGNUM *a, const BIGNUM *b);
int BN_uadd(BIGNUM *r, const BIGNUM *a, const BIGNUM *b);
int BN_add(BIGNUM *r, const BIGNUM *a, const BIGNUM *b);
int BN_mul(BIGNUM *r, const BIGNUM *a, const BIGNUM *b, BN_CTX *ctx);
int BN_sqr(BIGNUM *r, const BIGNUM *a, BN_CTX *ctx);




void BN_set_negative(BIGNUM *b, int n);






int BN_div(BIGNUM *dv, BIGNUM *rem, const BIGNUM *m, const BIGNUM *d,
           BN_CTX *ctx);

int BN_nnmod(BIGNUM *r, const BIGNUM *m, const BIGNUM *d, BN_CTX *ctx);
int BN_mod_add(BIGNUM *r, const BIGNUM *a, const BIGNUM *b, const BIGNUM *m,
               BN_CTX *ctx);
int BN_mod_add_quick(BIGNUM *r, const BIGNUM *a, const BIGNUM *b,
                     const BIGNUM *m);
int BN_mod_sub(BIGNUM *r, const BIGNUM *a, const BIGNUM *b, const BIGNUM *m,
               BN_CTX *ctx);
int BN_mod_sub_quick(BIGNUM *r, const BIGNUM *a, const BIGNUM *b,
                     const BIGNUM *m);
int BN_mod_mul(BIGNUM *r, const BIGNUM *a, const BIGNUM *b, const BIGNUM *m,
               BN_CTX *ctx);
int BN_mod_sqr(BIGNUM *r, const BIGNUM *a, const BIGNUM *m, BN_CTX *ctx);
int BN_mod_lshift1(BIGNUM *r, const BIGNUM *a, const BIGNUM *m, BN_CTX *ctx);
int BN_mod_lshift1_quick(BIGNUM *r, const BIGNUM *a, const BIGNUM *m);
int BN_mod_lshift(BIGNUM *r, const BIGNUM *a, int n, const BIGNUM *m,
                  BN_CTX *ctx);
int BN_mod_lshift_quick(BIGNUM *r, const BIGNUM *a, int n, const BIGNUM *m);

unsigned long BN_mod_word(const BIGNUM *a, unsigned long w);
unsigned long BN_div_word(BIGNUM *a, unsigned long w);
int BN_mul_word(BIGNUM *a, unsigned long w);
int BN_add_word(BIGNUM *a, unsigned long w);
int BN_sub_word(BIGNUM *a, unsigned long w);
int BN_set_word(BIGNUM *a, unsigned long w);
unsigned long BN_get_word(const BIGNUM *a);

int BN_cmp(const BIGNUM *a, const BIGNUM *b);
void BN_free(BIGNUM *a);
int BN_is_bit_set(const BIGNUM *a, int n);
int BN_lshift(BIGNUM *r, const BIGNUM *a, int n);
int BN_lshift1(BIGNUM *r, const BIGNUM *a);
int BN_exp(BIGNUM *r, const BIGNUM *a, const BIGNUM *p, BN_CTX *ctx);

int BN_mod_exp(BIGNUM *r, const BIGNUM *a, const BIGNUM *p,
               const BIGNUM *m, BN_CTX *ctx);
int BN_mod_exp_mont(BIGNUM *r, const BIGNUM *a, const BIGNUM *p,
                    const BIGNUM *m, BN_CTX *ctx, BN_MONT_CTX *m_ctx);
int BN_mod_exp_mont_consttime(BIGNUM *rr, const BIGNUM *a, const BIGNUM *p,
                              const BIGNUM *m, BN_CTX *ctx,
                              BN_MONT_CTX *in_mont);
int BN_mod_exp_mont_word(BIGNUM *r, unsigned long a, const BIGNUM *p,
                         const BIGNUM *m, BN_CTX *ctx, BN_MONT_CTX *m_ctx);
int BN_mod_exp2_mont(BIGNUM *r, const BIGNUM *a1, const BIGNUM *p1,
                     const BIGNUM *a2, const BIGNUM *p2, const BIGNUM *m,
                     BN_CTX *ctx, BN_MONT_CTX *m_ctx);
int BN_mod_exp_simple(BIGNUM *r, const BIGNUM *a, const BIGNUM *p,
                      const BIGNUM *m, BN_CTX *ctx);

int BN_mask_bits(BIGNUM *a, int n);

int BN_print_fp(FILE *fp, const BIGNUM *a);


int BN_print(BIO *fp, const BIGNUM *a);



int BN_reciprocal(BIGNUM *r, const BIGNUM *m, int len, BN_CTX *ctx);
int BN_rshift(BIGNUM *r, const BIGNUM *a, int n);
int BN_rshift1(BIGNUM *r, const BIGNUM *a);
void BN_clear(BIGNUM *a);
BIGNUM *BN_dup(const BIGNUM *a);
int BN_ucmp(const BIGNUM *a, const BIGNUM *b);
int BN_set_bit(BIGNUM *a, int n);
int BN_clear_bit(BIGNUM *a, int n);
char *BN_bn2hex(const BIGNUM *a);
char *BN_bn2dec(const BIGNUM *a);
int BN_hex2bn(BIGNUM **a, const char *str);
int BN_dec2bn(BIGNUM **a, const char *str);
int BN_asc2bn(BIGNUM **a, const char *str);
int BN_gcd(BIGNUM *r, const BIGNUM *a, const BIGNUM *b, BN_CTX *ctx);
int BN_kronecker(const BIGNUM *a, const BIGNUM *b, BN_CTX *ctx);


BIGNUM *BN_mod_inverse(BIGNUM *ret,
                       const BIGNUM *a, const BIGNUM *n, BN_CTX *ctx);
BIGNUM *BN_mod_sqrt(BIGNUM *ret,
                    const BIGNUM *a, const BIGNUM *n, BN_CTX *ctx);

void BN_consttime_swap(unsigned long swap, BIGNUM *a, BIGNUM *b, int nwords);



BIGNUM *BN_generate_prime(BIGNUM *ret, int bits, int safe,
                          const BIGNUM *add, const BIGNUM *rem,
                          void (*callback) (int, int, void *), void *cb_arg);
int BN_is_prime(const BIGNUM *p, int nchecks,
                void (*callback) (int, int, void *),
                BN_CTX *ctx, void *cb_arg);
int BN_is_prime_fasttest(const BIGNUM *p, int nchecks,
                         void (*callback) (int, int, void *), BN_CTX *ctx,
                         void *cb_arg, int do_trial_division);



int BN_generate_prime_ex(BIGNUM *ret, int bits, int safe, const BIGNUM *add,
                         const BIGNUM *rem, BN_GENCB *cb);
int BN_is_prime_ex(const BIGNUM *p, int nchecks, BN_CTX *ctx, BN_GENCB *cb);
int BN_is_prime_fasttest_ex(const BIGNUM *p, int nchecks, BN_CTX *ctx,
                            int do_trial_division, BN_GENCB *cb);

int BN_X931_generate_Xpq(BIGNUM *Xp, BIGNUM *Xq, int nbits, BN_CTX *ctx);

int BN_X931_derive_prime_ex(BIGNUM *p, BIGNUM *p1, BIGNUM *p2,
                            const BIGNUM *Xp, const BIGNUM *Xp1,
                            const BIGNUM *Xp2, const BIGNUM *e, BN_CTX *ctx,
                            BN_GENCB *cb);
int BN_X931_generate_prime_ex(BIGNUM *p, BIGNUM *p1, BIGNUM *p2, BIGNUM *Xp1,
                              BIGNUM *Xp2, const BIGNUM *Xp, const BIGNUM *e,
                              BN_CTX *ctx, BN_GENCB *cb);

BN_MONT_CTX *BN_MONT_CTX_new(void);
void BN_MONT_CTX_init(BN_MONT_CTX *ctx);
int BN_mod_mul_montgomery(BIGNUM *r, const BIGNUM *a, const BIGNUM *b,
                          BN_MONT_CTX *mont, BN_CTX *ctx);


int BN_from_montgomery(BIGNUM *r, const BIGNUM *a,
                       BN_MONT_CTX *mont, BN_CTX *ctx);
void BN_MONT_CTX_free(BN_MONT_CTX *mont);
int BN_MONT_CTX_set(BN_MONT_CTX *mont, const BIGNUM *mod, BN_CTX *ctx);
BN_MONT_CTX *BN_MONT_CTX_copy(BN_MONT_CTX *to, BN_MONT_CTX *from);
BN_MONT_CTX *BN_MONT_CTX_set_locked(BN_MONT_CTX **pmont, int lock,
                                    const BIGNUM *mod, BN_CTX *ctx);





BN_BLINDING *BN_BLINDING_new(const BIGNUM *A, const BIGNUM *Ai, BIGNUM *mod);
void BN_BLINDING_free(BN_BLINDING *b);
int BN_BLINDING_update(BN_BLINDING *b, BN_CTX *ctx);
int BN_BLINDING_convert(BIGNUM *n, BN_BLINDING *b, BN_CTX *ctx);
int BN_BLINDING_invert(BIGNUM *n, BN_BLINDING *b, BN_CTX *ctx);
int BN_BLINDING_convert_ex(BIGNUM *n, BIGNUM *r, BN_BLINDING *b, BN_CTX *);
int BN_BLINDING_invert_ex(BIGNUM *n, const BIGNUM *r, BN_BLINDING *b,
                          BN_CTX *);

unsigned long BN_BLINDING_get_thread_id(const BN_BLINDING *);
void BN_BLINDING_set_thread_id(BN_BLINDING *, unsigned long);

CRYPTO_THREADID *BN_BLINDING_thread_id(BN_BLINDING *);
unsigned long BN_BLINDING_get_flags(const BN_BLINDING *);
void BN_BLINDING_set_flags(BN_BLINDING *, unsigned long);
BN_BLINDING *BN_BLINDING_create_param(BN_BLINDING *b,
                                      const BIGNUM *e, BIGNUM *m, BN_CTX *ctx,
                                      int (*bn_mod_exp) (BIGNUM *r,
                                                         const BIGNUM *a,
                                                         const BIGNUM *p,
                                                         const BIGNUM *m,
                                                         BN_CTX *ctx,
                                                         BN_MONT_CTX *m_ctx),
                                      BN_MONT_CTX *m_ctx);


void BN_set_params(int mul, int high, int low, int mont);
int BN_get_params(int which);


void BN_RECP_CTX_init(BN_RECP_CTX *recp);
BN_RECP_CTX *BN_RECP_CTX_new(void);
void BN_RECP_CTX_free(BN_RECP_CTX *recp);
int BN_RECP_CTX_set(BN_RECP_CTX *recp, const BIGNUM *rdiv, BN_CTX *ctx);
int BN_mod_mul_reciprocal(BIGNUM *r, const BIGNUM *x, const BIGNUM *y,
                          BN_RECP_CTX *recp, BN_CTX *ctx);
int BN_mod_exp_recp(BIGNUM *r, const BIGNUM *a, const BIGNUM *p,
                    const BIGNUM *m, BN_CTX *ctx);
int BN_div_recp(BIGNUM *dv, BIGNUM *rem, const BIGNUM *m,
                BN_RECP_CTX *recp, BN_CTX *ctx);
# 648 "/usr/include/openssl/bn.h" 3 4
int BN_GF2m_add(BIGNUM *r, const BIGNUM *a, const BIGNUM *b);




int BN_GF2m_mod(BIGNUM *r, const BIGNUM *a, const BIGNUM *p);

int BN_GF2m_mod_mul(BIGNUM *r, const BIGNUM *a, const BIGNUM *b,
                    const BIGNUM *p, BN_CTX *ctx);

int BN_GF2m_mod_sqr(BIGNUM *r, const BIGNUM *a, const BIGNUM *p, BN_CTX *ctx);

int BN_GF2m_mod_inv(BIGNUM *r, const BIGNUM *b, const BIGNUM *p, BN_CTX *ctx);

int BN_GF2m_mod_div(BIGNUM *r, const BIGNUM *a, const BIGNUM *b,
                    const BIGNUM *p, BN_CTX *ctx);

int BN_GF2m_mod_exp(BIGNUM *r, const BIGNUM *a, const BIGNUM *b,
                    const BIGNUM *p, BN_CTX *ctx);

int BN_GF2m_mod_sqrt(BIGNUM *r, const BIGNUM *a, const BIGNUM *p,
                     BN_CTX *ctx);

int BN_GF2m_mod_solve_quad(BIGNUM *r, const BIGNUM *a, const BIGNUM *p,
                           BN_CTX *ctx);
# 681 "/usr/include/openssl/bn.h" 3 4
int BN_GF2m_mod_arr(BIGNUM *r, const BIGNUM *a, const int p[]);

int BN_GF2m_mod_mul_arr(BIGNUM *r, const BIGNUM *a, const BIGNUM *b,
                        const int p[], BN_CTX *ctx);

int BN_GF2m_mod_sqr_arr(BIGNUM *r, const BIGNUM *a, const int p[],
                        BN_CTX *ctx);

int BN_GF2m_mod_inv_arr(BIGNUM *r, const BIGNUM *b, const int p[],
                        BN_CTX *ctx);

int BN_GF2m_mod_div_arr(BIGNUM *r, const BIGNUM *a, const BIGNUM *b,
                        const int p[], BN_CTX *ctx);

int BN_GF2m_mod_exp_arr(BIGNUM *r, const BIGNUM *a, const BIGNUM *b,
                        const int p[], BN_CTX *ctx);

int BN_GF2m_mod_sqrt_arr(BIGNUM *r, const BIGNUM *a,
                         const int p[], BN_CTX *ctx);

int BN_GF2m_mod_solve_quad_arr(BIGNUM *r, const BIGNUM *a,
                               const int p[], BN_CTX *ctx);
int BN_GF2m_poly2arr(const BIGNUM *a, int p[], int max);
int BN_GF2m_arr2poly(const int p[], BIGNUM *a);






int BN_nist_mod_192(BIGNUM *r, const BIGNUM *a, const BIGNUM *p, BN_CTX *ctx);
int BN_nist_mod_224(BIGNUM *r, const BIGNUM *a, const BIGNUM *p, BN_CTX *ctx);
int BN_nist_mod_256(BIGNUM *r, const BIGNUM *a, const BIGNUM *p, BN_CTX *ctx);
int BN_nist_mod_384(BIGNUM *r, const BIGNUM *a, const BIGNUM *p, BN_CTX *ctx);
int BN_nist_mod_521(BIGNUM *r, const BIGNUM *a, const BIGNUM *p, BN_CTX *ctx);

const BIGNUM *BN_get0_nist_prime_192(void);
const BIGNUM *BN_get0_nist_prime_224(void);
const BIGNUM *BN_get0_nist_prime_256(void);
const BIGNUM *BN_get0_nist_prime_384(void);
const BIGNUM *BN_get0_nist_prime_521(void);
# 737 "/usr/include/openssl/bn.h" 3 4
BIGNUM *bn_expand2(BIGNUM *a, int words);

BIGNUM *bn_dup_expand(const BIGNUM *a, int words);
# 848 "/usr/include/openssl/bn.h" 3 4
unsigned long bn_mul_add_words(unsigned long *rp, const unsigned long *ap, int num,
                          unsigned long w);
unsigned long bn_mul_words(unsigned long *rp, const unsigned long *ap, int num, unsigned long w);
void bn_sqr_words(unsigned long *rp, const unsigned long *ap, int num);
unsigned long bn_div_words(unsigned long h, unsigned long l, unsigned long d);
unsigned long bn_add_words(unsigned long *rp, const unsigned long *ap, const unsigned long *bp,
                      int num);
unsigned long bn_sub_words(unsigned long *rp, const unsigned long *ap, const unsigned long *bp,
                      int num);


BIGNUM *get_rfc2409_prime_768(BIGNUM *bn);
BIGNUM *get_rfc2409_prime_1024(BIGNUM *bn);


BIGNUM *get_rfc3526_prime_1536(BIGNUM *bn);
BIGNUM *get_rfc3526_prime_2048(BIGNUM *bn);
BIGNUM *get_rfc3526_prime_3072(BIGNUM *bn);
BIGNUM *get_rfc3526_prime_4096(BIGNUM *bn);
BIGNUM *get_rfc3526_prime_6144(BIGNUM *bn);
BIGNUM *get_rfc3526_prime_8192(BIGNUM *bn);

int BN_bntest_rand(BIGNUM *rnd, int bits, int top, int bottom);






void ERR_load_BN_strings(void);
# 75 "/usr/include/openssl/asn1.h" 2 3 4
# 169 "/usr/include/openssl/asn1.h" 3 4
    struct X509_algor_st;
struct stack_st_X509_ALGOR { _STACK stack; };
# 180 "/usr/include/openssl/asn1.h" 3 4
typedef struct asn1_ctx_st {
    unsigned char *p;
    int eos;

    int error;
    int inf;
    int tag;
    int xclass;
    long slen;
    unsigned char *max;
    unsigned char *q;
    unsigned char **pp;
    int line;
} ASN1_CTX;

typedef struct asn1_const_ctx_st {
    const unsigned char *p;
    int eos;

    int error;
    int inf;
    int tag;
    int xclass;
    long slen;
    const unsigned char *max;
    const unsigned char *q;
    const unsigned char **pp;
    int line;
} ASN1_const_CTX;
# 218 "/usr/include/openssl/asn1.h" 3 4
struct asn1_object_st {
    const char *sn, *ln;
    int nid;
    int length;
    const unsigned char *data;
    int flags;
};
# 247 "/usr/include/openssl/asn1.h" 3 4
struct asn1_string_st {
    int length;
    int type;
    unsigned char *data;





    long flags;
};







typedef struct ASN1_ENCODING_st {
    unsigned char *enc;
    long len;
    int modified;
} ASN1_ENCODING;
# 280 "/usr/include/openssl/asn1.h" 3 4
typedef struct asn1_string_table_st {
    int nid;
    long minsize;
    long maxsize;
    unsigned long mask;
    unsigned long flags;
} ASN1_STRING_TABLE;

struct stack_st_ASN1_STRING_TABLE { _STACK stack; };
# 304 "/usr/include/openssl/asn1.h" 3 4
typedef struct ASN1_TEMPLATE_st ASN1_TEMPLATE;
typedef struct ASN1_TLC_st ASN1_TLC;

typedef struct ASN1_VALUE_st ASN1_VALUE;
# 371 "/usr/include/openssl/asn1.h" 3 4
typedef void *d2i_of_void(void **,const unsigned char **,long); typedef int i2d_of_void(void *,unsigned char **);
# 412 "/usr/include/openssl/asn1.h" 3 4
typedef const ASN1_ITEM ASN1_ITEM_EXP;
# 527 "/usr/include/openssl/asn1.h" 3 4
struct stack_st_ASN1_INTEGER { _STACK stack; };


struct stack_st_ASN1_GENERALSTRING { _STACK stack; };

typedef struct asn1_type_st {
    int type;
    union {
        char *ptr;
        ASN1_BOOLEAN boolean;
        ASN1_STRING *asn1_string;
        ASN1_OBJECT *object;
        ASN1_INTEGER *integer;
        ASN1_ENUMERATED *enumerated;
        ASN1_BIT_STRING *bit_string;
        ASN1_OCTET_STRING *octet_string;
        ASN1_PRINTABLESTRING *printablestring;
        ASN1_T61STRING *t61string;
        ASN1_IA5STRING *ia5string;
        ASN1_GENERALSTRING *generalstring;
        ASN1_BMPSTRING *bmpstring;
        ASN1_UNIVERSALSTRING *universalstring;
        ASN1_UTCTIME *utctime;
        ASN1_GENERALIZEDTIME *generalizedtime;
        ASN1_VISIBLESTRING *visiblestring;
        ASN1_UTF8STRING *utf8string;




        ASN1_STRING *set;
        ASN1_STRING *sequence;
        ASN1_VALUE *asn1_value;
    } value;
} ASN1_TYPE;

struct stack_st_ASN1_TYPE { _STACK stack; };


typedef struct stack_st_ASN1_TYPE ASN1_SEQUENCE_ANY;

ASN1_SEQUENCE_ANY *d2i_ASN1_SEQUENCE_ANY(ASN1_SEQUENCE_ANY **a, const unsigned char **in, long len); int i2d_ASN1_SEQUENCE_ANY(const ASN1_SEQUENCE_ANY *a, unsigned char **out); extern const ASN1_ITEM ASN1_SEQUENCE_ANY_it;
ASN1_SEQUENCE_ANY *d2i_ASN1_SET_ANY(ASN1_SEQUENCE_ANY **a, const unsigned char **in, long len); int i2d_ASN1_SET_ANY(const ASN1_SEQUENCE_ANY *a, unsigned char **out); extern const ASN1_ITEM ASN1_SET_ANY_it;

typedef struct NETSCAPE_X509_st {
    ASN1_OCTET_STRING *header;
    X509 *cert;
} NETSCAPE_X509;


typedef struct BIT_STRING_BITNAME_st {
    int bitnum;
    const char *lname;
    const char *sname;
} BIT_STRING_BITNAME;
# 784 "/usr/include/openssl/asn1.h" 3 4
ASN1_TYPE *ASN1_TYPE_new(void); void ASN1_TYPE_free(ASN1_TYPE *a); ASN1_TYPE *d2i_ASN1_TYPE(ASN1_TYPE **a, const unsigned char **in, long len); int i2d_ASN1_TYPE(ASN1_TYPE *a, unsigned char **out); extern const ASN1_ITEM ASN1_ANY_it;

int ASN1_TYPE_get(ASN1_TYPE *a);
void ASN1_TYPE_set(ASN1_TYPE *a, int type, void *value);
int ASN1_TYPE_set1(ASN1_TYPE *a, int type, const void *value);
int ASN1_TYPE_cmp(const ASN1_TYPE *a, const ASN1_TYPE *b);

ASN1_OBJECT *ASN1_OBJECT_new(void);
void ASN1_OBJECT_free(ASN1_OBJECT *a);
int i2d_ASN1_OBJECT(ASN1_OBJECT *a, unsigned char **pp);
ASN1_OBJECT *c2i_ASN1_OBJECT(ASN1_OBJECT **a, const unsigned char **pp,
                             long length);
ASN1_OBJECT *d2i_ASN1_OBJECT(ASN1_OBJECT **a, const unsigned char **pp,
                             long length);

extern const ASN1_ITEM ASN1_OBJECT_it;

struct stack_st_ASN1_OBJECT { _STACK stack; };


ASN1_STRING *ASN1_STRING_new(void);
void ASN1_STRING_free(ASN1_STRING *a);
void ASN1_STRING_clear_free(ASN1_STRING *a);
int ASN1_STRING_copy(ASN1_STRING *dst, const ASN1_STRING *str);
ASN1_STRING *ASN1_STRING_dup(const ASN1_STRING *a);
ASN1_STRING *ASN1_STRING_type_new(int type);
int ASN1_STRING_cmp(const ASN1_STRING *a, const ASN1_STRING *b);




int ASN1_STRING_set(ASN1_STRING *str, const void *data, int len);
void ASN1_STRING_set0(ASN1_STRING *str, void *data, int len);
int ASN1_STRING_length(const ASN1_STRING *x);
void ASN1_STRING_length_set(ASN1_STRING *x, int n);
int ASN1_STRING_type(ASN1_STRING *x);
unsigned char *ASN1_STRING_data(ASN1_STRING *x);

ASN1_BIT_STRING *ASN1_BIT_STRING_new(void); void ASN1_BIT_STRING_free(ASN1_BIT_STRING *a); ASN1_BIT_STRING *d2i_ASN1_BIT_STRING(ASN1_BIT_STRING **a, const unsigned char **in, long len); int i2d_ASN1_BIT_STRING(ASN1_BIT_STRING *a, unsigned char **out); extern const ASN1_ITEM ASN1_BIT_STRING_it;
int i2c_ASN1_BIT_STRING(ASN1_BIT_STRING *a, unsigned char **pp);
ASN1_BIT_STRING *c2i_ASN1_BIT_STRING(ASN1_BIT_STRING **a,
                                     const unsigned char **pp, long length);
int ASN1_BIT_STRING_set(ASN1_BIT_STRING *a, unsigned char *d, int length);
int ASN1_BIT_STRING_set_bit(ASN1_BIT_STRING *a, int n, int value);
int ASN1_BIT_STRING_get_bit(ASN1_BIT_STRING *a, int n);
int ASN1_BIT_STRING_check(ASN1_BIT_STRING *a,
                          unsigned char *flags, int flags_len);


int ASN1_BIT_STRING_name_print(BIO *out, ASN1_BIT_STRING *bs,
                               BIT_STRING_BITNAME *tbl, int indent);

int ASN1_BIT_STRING_num_asc(char *name, BIT_STRING_BITNAME *tbl);
int ASN1_BIT_STRING_set_asc(ASN1_BIT_STRING *bs, char *name, int value,
                            BIT_STRING_BITNAME *tbl);

int i2d_ASN1_BOOLEAN(int a, unsigned char **pp);
int d2i_ASN1_BOOLEAN(int *a, const unsigned char **pp, long length);

ASN1_INTEGER *ASN1_INTEGER_new(void); void ASN1_INTEGER_free(ASN1_INTEGER *a); ASN1_INTEGER *d2i_ASN1_INTEGER(ASN1_INTEGER **a, const unsigned char **in, long len); int i2d_ASN1_INTEGER(ASN1_INTEGER *a, unsigned char **out); extern const ASN1_ITEM ASN1_INTEGER_it;
int i2c_ASN1_INTEGER(ASN1_INTEGER *a, unsigned char **pp);
ASN1_INTEGER *c2i_ASN1_INTEGER(ASN1_INTEGER **a, const unsigned char **pp,
                               long length);
ASN1_INTEGER *d2i_ASN1_UINTEGER(ASN1_INTEGER **a, const unsigned char **pp,
                                long length);
ASN1_INTEGER *ASN1_INTEGER_dup(const ASN1_INTEGER *x);
int ASN1_INTEGER_cmp(const ASN1_INTEGER *x, const ASN1_INTEGER *y);

ASN1_ENUMERATED *ASN1_ENUMERATED_new(void); void ASN1_ENUMERATED_free(ASN1_ENUMERATED *a); ASN1_ENUMERATED *d2i_ASN1_ENUMERATED(ASN1_ENUMERATED **a, const unsigned char **in, long len); int i2d_ASN1_ENUMERATED(ASN1_ENUMERATED *a, unsigned char **out); extern const ASN1_ITEM ASN1_ENUMERATED_it;

int ASN1_UTCTIME_check(const ASN1_UTCTIME *a);
ASN1_UTCTIME *ASN1_UTCTIME_set(ASN1_UTCTIME *s, time_t t);
ASN1_UTCTIME *ASN1_UTCTIME_adj(ASN1_UTCTIME *s, time_t t,
                               int offset_day, long offset_sec);
int ASN1_UTCTIME_set_string(ASN1_UTCTIME *s, const char *str);
int ASN1_UTCTIME_cmp_time_t(const ASN1_UTCTIME *s, time_t t);




int ASN1_GENERALIZEDTIME_check(const ASN1_GENERALIZEDTIME *a);
ASN1_GENERALIZEDTIME *ASN1_GENERALIZEDTIME_set(ASN1_GENERALIZEDTIME *s,
                                               time_t t);
ASN1_GENERALIZEDTIME *ASN1_GENERALIZEDTIME_adj(ASN1_GENERALIZEDTIME *s,
                                               time_t t, int offset_day,
                                               long offset_sec);
int ASN1_GENERALIZEDTIME_set_string(ASN1_GENERALIZEDTIME *s, const char *str);
int ASN1_TIME_diff(int *pday, int *psec,
                   const ASN1_TIME *from, const ASN1_TIME *to);

ASN1_OCTET_STRING *ASN1_OCTET_STRING_new(void); void ASN1_OCTET_STRING_free(ASN1_OCTET_STRING *a); ASN1_OCTET_STRING *d2i_ASN1_OCTET_STRING(ASN1_OCTET_STRING **a, const unsigned char **in, long len); int i2d_ASN1_OCTET_STRING(ASN1_OCTET_STRING *a, unsigned char **out); extern const ASN1_ITEM ASN1_OCTET_STRING_it;
ASN1_OCTET_STRING *ASN1_OCTET_STRING_dup(const ASN1_OCTET_STRING *a);
int ASN1_OCTET_STRING_cmp(const ASN1_OCTET_STRING *a,
                          const ASN1_OCTET_STRING *b);
int ASN1_OCTET_STRING_set(ASN1_OCTET_STRING *str, const unsigned char *data,
                          int len);

ASN1_VISIBLESTRING *ASN1_VISIBLESTRING_new(void); void ASN1_VISIBLESTRING_free(ASN1_VISIBLESTRING *a); ASN1_VISIBLESTRING *d2i_ASN1_VISIBLESTRING(ASN1_VISIBLESTRING **a, const unsigned char **in, long len); int i2d_ASN1_VISIBLESTRING(ASN1_VISIBLESTRING *a, unsigned char **out); extern const ASN1_ITEM ASN1_VISIBLESTRING_it;
ASN1_UNIVERSALSTRING *ASN1_UNIVERSALSTRING_new(void); void ASN1_UNIVERSALSTRING_free(ASN1_UNIVERSALSTRING *a); ASN1_UNIVERSALSTRING *d2i_ASN1_UNIVERSALSTRING(ASN1_UNIVERSALSTRING **a, const unsigned char **in, long len); int i2d_ASN1_UNIVERSALSTRING(ASN1_UNIVERSALSTRING *a, unsigned char **out); extern const ASN1_ITEM ASN1_UNIVERSALSTRING_it;
ASN1_UTF8STRING *ASN1_UTF8STRING_new(void); void ASN1_UTF8STRING_free(ASN1_UTF8STRING *a); ASN1_UTF8STRING *d2i_ASN1_UTF8STRING(ASN1_UTF8STRING **a, const unsigned char **in, long len); int i2d_ASN1_UTF8STRING(ASN1_UTF8STRING *a, unsigned char **out); extern const ASN1_ITEM ASN1_UTF8STRING_it;
ASN1_NULL *ASN1_NULL_new(void); void ASN1_NULL_free(ASN1_NULL *a); ASN1_NULL *d2i_ASN1_NULL(ASN1_NULL **a, const unsigned char **in, long len); int i2d_ASN1_NULL(ASN1_NULL *a, unsigned char **out); extern const ASN1_ITEM ASN1_NULL_it;
ASN1_BMPSTRING *ASN1_BMPSTRING_new(void); void ASN1_BMPSTRING_free(ASN1_BMPSTRING *a); ASN1_BMPSTRING *d2i_ASN1_BMPSTRING(ASN1_BMPSTRING **a, const unsigned char **in, long len); int i2d_ASN1_BMPSTRING(ASN1_BMPSTRING *a, unsigned char **out); extern const ASN1_ITEM ASN1_BMPSTRING_it;

int UTF8_getc(const unsigned char *str, int len, unsigned long *val);
int UTF8_putc(unsigned char *str, int len, unsigned long value);

ASN1_STRING *ASN1_PRINTABLE_new(void); void ASN1_PRINTABLE_free(ASN1_STRING *a); ASN1_STRING *d2i_ASN1_PRINTABLE(ASN1_STRING **a, const unsigned char **in, long len); int i2d_ASN1_PRINTABLE(ASN1_STRING *a, unsigned char **out); extern const ASN1_ITEM ASN1_PRINTABLE_it;

ASN1_STRING *DIRECTORYSTRING_new(void); void DIRECTORYSTRING_free(ASN1_STRING *a); ASN1_STRING *d2i_DIRECTORYSTRING(ASN1_STRING **a, const unsigned char **in, long len); int i2d_DIRECTORYSTRING(ASN1_STRING *a, unsigned char **out); extern const ASN1_ITEM DIRECTORYSTRING_it;
ASN1_STRING *DISPLAYTEXT_new(void); void DISPLAYTEXT_free(ASN1_STRING *a); ASN1_STRING *d2i_DISPLAYTEXT(ASN1_STRING **a, const unsigned char **in, long len); int i2d_DISPLAYTEXT(ASN1_STRING *a, unsigned char **out); extern const ASN1_ITEM DISPLAYTEXT_it;
ASN1_PRINTABLESTRING *ASN1_PRINTABLESTRING_new(void); void ASN1_PRINTABLESTRING_free(ASN1_PRINTABLESTRING *a); ASN1_PRINTABLESTRING *d2i_ASN1_PRINTABLESTRING(ASN1_PRINTABLESTRING **a, const unsigned char **in, long len); int i2d_ASN1_PRINTABLESTRING(ASN1_PRINTABLESTRING *a, unsigned char **out); extern const ASN1_ITEM ASN1_PRINTABLESTRING_it;
ASN1_T61STRING *ASN1_T61STRING_new(void); void ASN1_T61STRING_free(ASN1_T61STRING *a); ASN1_T61STRING *d2i_ASN1_T61STRING(ASN1_T61STRING **a, const unsigned char **in, long len); int i2d_ASN1_T61STRING(ASN1_T61STRING *a, unsigned char **out); extern const ASN1_ITEM ASN1_T61STRING_it;
ASN1_IA5STRING *ASN1_IA5STRING_new(void); void ASN1_IA5STRING_free(ASN1_IA5STRING *a); ASN1_IA5STRING *d2i_ASN1_IA5STRING(ASN1_IA5STRING **a, const unsigned char **in, long len); int i2d_ASN1_IA5STRING(ASN1_IA5STRING *a, unsigned char **out); extern const ASN1_ITEM ASN1_IA5STRING_it;
ASN1_GENERALSTRING *ASN1_GENERALSTRING_new(void); void ASN1_GENERALSTRING_free(ASN1_GENERALSTRING *a); ASN1_GENERALSTRING *d2i_ASN1_GENERALSTRING(ASN1_GENERALSTRING **a, const unsigned char **in, long len); int i2d_ASN1_GENERALSTRING(ASN1_GENERALSTRING *a, unsigned char **out); extern const ASN1_ITEM ASN1_GENERALSTRING_it;
ASN1_UTCTIME *ASN1_UTCTIME_new(void); void ASN1_UTCTIME_free(ASN1_UTCTIME *a); ASN1_UTCTIME *d2i_ASN1_UTCTIME(ASN1_UTCTIME **a, const unsigned char **in, long len); int i2d_ASN1_UTCTIME(ASN1_UTCTIME *a, unsigned char **out); extern const ASN1_ITEM ASN1_UTCTIME_it;
ASN1_GENERALIZEDTIME *ASN1_GENERALIZEDTIME_new(void); void ASN1_GENERALIZEDTIME_free(ASN1_GENERALIZEDTIME *a); ASN1_GENERALIZEDTIME *d2i_ASN1_GENERALIZEDTIME(ASN1_GENERALIZEDTIME **a, const unsigned char **in, long len); int i2d_ASN1_GENERALIZEDTIME(ASN1_GENERALIZEDTIME *a, unsigned char **out); extern const ASN1_ITEM ASN1_GENERALIZEDTIME_it;
ASN1_TIME *ASN1_TIME_new(void); void ASN1_TIME_free(ASN1_TIME *a); ASN1_TIME *d2i_ASN1_TIME(ASN1_TIME **a, const unsigned char **in, long len); int i2d_ASN1_TIME(ASN1_TIME *a, unsigned char **out); extern const ASN1_ITEM ASN1_TIME_it;

extern const ASN1_ITEM ASN1_OCTET_STRING_NDEF_it;

ASN1_TIME *ASN1_TIME_set(ASN1_TIME *s, time_t t);
ASN1_TIME *ASN1_TIME_adj(ASN1_TIME *s, time_t t,
                         int offset_day, long offset_sec);
int ASN1_TIME_check(ASN1_TIME *t);
ASN1_GENERALIZEDTIME *ASN1_TIME_to_generalizedtime(ASN1_TIME *t, ASN1_GENERALIZEDTIME
                                                   **out);
int ASN1_TIME_set_string(ASN1_TIME *s, const char *str);

int i2d_ASN1_SET(struct stack_st_OPENSSL_BLOCK *a, unsigned char **pp,
                 i2d_of_void *i2d, int ex_tag, int ex_class, int is_set);
struct stack_st_OPENSSL_BLOCK *d2i_ASN1_SET(struct stack_st_OPENSSL_BLOCK **a,
                                      const unsigned char **pp,
                                      long length, d2i_of_void *d2i,
                                      void (*free_func) (OPENSSL_BLOCK),
                                      int ex_tag, int ex_class);


int i2a_ASN1_INTEGER(BIO *bp, ASN1_INTEGER *a);
int a2i_ASN1_INTEGER(BIO *bp, ASN1_INTEGER *bs, char *buf, int size);
int i2a_ASN1_ENUMERATED(BIO *bp, ASN1_ENUMERATED *a);
int a2i_ASN1_ENUMERATED(BIO *bp, ASN1_ENUMERATED *bs, char *buf, int size);
int i2a_ASN1_OBJECT(BIO *bp, ASN1_OBJECT *a);
int a2i_ASN1_STRING(BIO *bp, ASN1_STRING *bs, char *buf, int size);
int i2a_ASN1_STRING(BIO *bp, ASN1_STRING *a, int type);

int i2t_ASN1_OBJECT(char *buf, int buf_len, ASN1_OBJECT *a);

int a2d_ASN1_OBJECT(unsigned char *out, int olen, const char *buf, int num);
ASN1_OBJECT *ASN1_OBJECT_create(int nid, unsigned char *data, int len,
                                const char *sn, const char *ln);

int ASN1_INTEGER_set(ASN1_INTEGER *a, long v);
long ASN1_INTEGER_get(const ASN1_INTEGER *a);
ASN1_INTEGER *BN_to_ASN1_INTEGER(const BIGNUM *bn, ASN1_INTEGER *ai);
BIGNUM *ASN1_INTEGER_to_BN(const ASN1_INTEGER *ai, BIGNUM *bn);

int ASN1_ENUMERATED_set(ASN1_ENUMERATED *a, long v);
long ASN1_ENUMERATED_get(ASN1_ENUMERATED *a);
ASN1_ENUMERATED *BN_to_ASN1_ENUMERATED(BIGNUM *bn, ASN1_ENUMERATED *ai);
BIGNUM *ASN1_ENUMERATED_to_BN(ASN1_ENUMERATED *ai, BIGNUM *bn);



int ASN1_PRINTABLE_type(const unsigned char *s, int max);

int i2d_ASN1_bytes(ASN1_STRING *a, unsigned char **pp, int tag, int xclass);
ASN1_STRING *d2i_ASN1_bytes(ASN1_STRING **a, const unsigned char **pp,
                            long length, int Ptag, int Pclass);
unsigned long ASN1_tag2bit(int tag);

ASN1_STRING *d2i_ASN1_type_bytes(ASN1_STRING **a, const unsigned char **pp,
                                 long length, int type);


int asn1_Finish(ASN1_CTX *c);
int asn1_const_Finish(ASN1_const_CTX *c);


int ASN1_get_object(const unsigned char **pp, long *plength, int *ptag,
                    int *pclass, long omax);
int ASN1_check_infinite_end(unsigned char **p, long len);
int ASN1_const_check_infinite_end(const unsigned char **p, long len);
void ASN1_put_object(unsigned char **pp, int constructed, int length,
                     int tag, int xclass);
int ASN1_put_eoc(unsigned char **pp);
int ASN1_object_size(int constructed, int length, int tag);


void *ASN1_dup(i2d_of_void *i2d, d2i_of_void *d2i, void *x);
# 984 "/usr/include/openssl/asn1.h" 3 4
void *ASN1_item_dup(const ASN1_ITEM *it, void *x);
# 993 "/usr/include/openssl/asn1.h" 3 4
void *ASN1_d2i_fp(void *(*xnew) (void), d2i_of_void *d2i, FILE *in, void **x);







void *ASN1_item_d2i_fp(const ASN1_ITEM *it, FILE *in, void *x);
int ASN1_i2d_fp(i2d_of_void *i2d, FILE *out, void *x);
# 1014 "/usr/include/openssl/asn1.h" 3 4
int ASN1_item_i2d_fp(const ASN1_ITEM *it, FILE *out, void *x);
int ASN1_STRING_print_ex_fp(FILE *fp, ASN1_STRING *str, unsigned long flags);


int ASN1_STRING_to_UTF8(unsigned char **out, ASN1_STRING *in);


void *ASN1_d2i_bio(void *(*xnew) (void), d2i_of_void *d2i, BIO *in, void **x);







void *ASN1_item_d2i_bio(const ASN1_ITEM *it, BIO *in, void *x);
int ASN1_i2d_bio(i2d_of_void *i2d, BIO *out, unsigned char *x);
# 1042 "/usr/include/openssl/asn1.h" 3 4
int ASN1_item_i2d_bio(const ASN1_ITEM *it, BIO *out, void *x);
int ASN1_UTCTIME_print(BIO *fp, const ASN1_UTCTIME *a);
int ASN1_GENERALIZEDTIME_print(BIO *fp, const ASN1_GENERALIZEDTIME *a);
int ASN1_TIME_print(BIO *fp, const ASN1_TIME *a);
int ASN1_STRING_print(BIO *bp, const ASN1_STRING *v);
int ASN1_STRING_print_ex(BIO *out, ASN1_STRING *str, unsigned long flags);
int ASN1_bn_print(BIO *bp, const char *number, const BIGNUM *num,
                  unsigned char *buf, int off);
int ASN1_parse(BIO *bp, const unsigned char *pp, long len, int indent);
int ASN1_parse_dump(BIO *bp, const unsigned char *pp, long len, int indent,
                    int dump);

const char *ASN1_tag2str(int tag);



NETSCAPE_X509 *NETSCAPE_X509_new(void); void NETSCAPE_X509_free(NETSCAPE_X509 *a); NETSCAPE_X509 *d2i_NETSCAPE_X509(NETSCAPE_X509 **a, const unsigned char **in, long len); int i2d_NETSCAPE_X509(NETSCAPE_X509 *a, unsigned char **out); extern const ASN1_ITEM NETSCAPE_X509_it;

int ASN1_UNIVERSALSTRING_to_string(ASN1_UNIVERSALSTRING *s);

int ASN1_TYPE_set_octetstring(ASN1_TYPE *a, unsigned char *data, int len);
int ASN1_TYPE_get_octetstring(ASN1_TYPE *a, unsigned char *data, int max_len);
int ASN1_TYPE_set_int_octetstring(ASN1_TYPE *a, long num,
                                  unsigned char *data, int len);
int ASN1_TYPE_get_int_octetstring(ASN1_TYPE *a, long *num,
                                  unsigned char *data, int max_len);

struct stack_st_OPENSSL_BLOCK *ASN1_seq_unpack(const unsigned char *buf, int len,
                                         d2i_of_void *d2i,
                                         void (*free_func) (OPENSSL_BLOCK));
unsigned char *ASN1_seq_pack(struct stack_st_OPENSSL_BLOCK *safes, i2d_of_void *i2d,
                             unsigned char **buf, int *len);
void *ASN1_unpack_string(ASN1_STRING *oct, d2i_of_void *d2i);
void *ASN1_item_unpack(ASN1_STRING *oct, const ASN1_ITEM *it);
ASN1_STRING *ASN1_pack_string(void *obj, i2d_of_void *i2d,
                              ASN1_OCTET_STRING **oct);






ASN1_STRING *ASN1_item_pack(void *obj, const ASN1_ITEM *it,
                            ASN1_OCTET_STRING **oct);

void ASN1_STRING_set_default_mask(unsigned long mask);
int ASN1_STRING_set_default_mask_asc(const char *p);
unsigned long ASN1_STRING_get_default_mask(void);
int ASN1_mbstring_copy(ASN1_STRING **out, const unsigned char *in, int len,
                       int inform, unsigned long mask);
int ASN1_mbstring_ncopy(ASN1_STRING **out, const unsigned char *in, int len,
                        int inform, unsigned long mask,
                        long minsize, long maxsize);

ASN1_STRING *ASN1_STRING_set_by_NID(ASN1_STRING **out,
                                    const unsigned char *in, int inlen,
                                    int inform, int nid);
ASN1_STRING_TABLE *ASN1_STRING_TABLE_get(int nid);
int ASN1_STRING_TABLE_add(int, long, long, unsigned long, unsigned long);
void ASN1_STRING_TABLE_cleanup(void);




ASN1_VALUE *ASN1_item_new(const ASN1_ITEM *it);
void ASN1_item_free(ASN1_VALUE *val, const ASN1_ITEM *it);
ASN1_VALUE *ASN1_item_d2i(ASN1_VALUE **val, const unsigned char **in,
                          long len, const ASN1_ITEM *it);
int ASN1_item_i2d(ASN1_VALUE *val, unsigned char **out, const ASN1_ITEM *it);
int ASN1_item_ndef_i2d(ASN1_VALUE *val, unsigned char **out,
                       const ASN1_ITEM *it);

void ASN1_add_oid_module(void);

ASN1_TYPE *ASN1_generate_nconf(char *str, CONF *nconf);
ASN1_TYPE *ASN1_generate_v3(char *str, X509V3_CTX *cnf);
# 1140 "/usr/include/openssl/asn1.h" 3 4
int ASN1_item_print(BIO *out, ASN1_VALUE *ifld, int indent,
                    const ASN1_ITEM *it, const ASN1_PCTX *pctx);
ASN1_PCTX *ASN1_PCTX_new(void);
void ASN1_PCTX_free(ASN1_PCTX *p);
unsigned long ASN1_PCTX_get_flags(ASN1_PCTX *p);
void ASN1_PCTX_set_flags(ASN1_PCTX *p, unsigned long flags);
unsigned long ASN1_PCTX_get_nm_flags(ASN1_PCTX *p);
void ASN1_PCTX_set_nm_flags(ASN1_PCTX *p, unsigned long flags);
unsigned long ASN1_PCTX_get_cert_flags(ASN1_PCTX *p);
void ASN1_PCTX_set_cert_flags(ASN1_PCTX *p, unsigned long flags);
unsigned long ASN1_PCTX_get_oid_flags(ASN1_PCTX *p);
void ASN1_PCTX_set_oid_flags(ASN1_PCTX *p, unsigned long flags);
unsigned long ASN1_PCTX_get_str_flags(ASN1_PCTX *p);
void ASN1_PCTX_set_str_flags(ASN1_PCTX *p, unsigned long flags);

BIO_METHOD *BIO_f_asn1(void);

BIO *BIO_new_NDEF(BIO *out, ASN1_VALUE *val, const ASN1_ITEM *it);

int i2d_ASN1_bio_stream(BIO *out, ASN1_VALUE *val, BIO *in, int flags,
                        const ASN1_ITEM *it);
int PEM_write_bio_ASN1_stream(BIO *out, ASN1_VALUE *val, BIO *in, int flags,
                              const char *hdr, const ASN1_ITEM *it);
int SMIME_write_ASN1(BIO *bio, ASN1_VALUE *val, BIO *data, int flags,
                     int ctype_nid, int econt_nid,
                     struct stack_st_X509_ALGOR *mdalgs, const ASN1_ITEM *it);
ASN1_VALUE *SMIME_read_ASN1(BIO *bio, BIO **bcont, const ASN1_ITEM *it);
int SMIME_crlf_copy(BIO *in, BIO *out, int flags);
int SMIME_text(BIO *in, BIO *out);






void ERR_load_ASN1_strings(void);
# 966 "/usr/include/openssl/objects.h" 2 3 4
# 984 "/usr/include/openssl/objects.h" 3 4
typedef struct obj_name_st {
    int type;
    int alias;
    const char *name;
    const char *data;
} OBJ_NAME;



int OBJ_NAME_init(void);
int OBJ_NAME_new_index(unsigned long (*hash_func) (const char *),
                       int (*cmp_func) (const char *, const char *),
                       void (*free_func) (const char *, int, const char *));
const char *OBJ_NAME_get(const char *name, int type);
int OBJ_NAME_add(const char *name, int type, const char *data);
int OBJ_NAME_remove(const char *name, int type);
void OBJ_NAME_cleanup(int type);
void OBJ_NAME_do_all(int type, void (*fn) (const OBJ_NAME *, void *arg),
                     void *arg);
void OBJ_NAME_do_all_sorted(int type,
                            void (*fn) (const OBJ_NAME *, void *arg),
                            void *arg);

ASN1_OBJECT *OBJ_dup(const ASN1_OBJECT *o);
ASN1_OBJECT *OBJ_nid2obj(int n);
const char *OBJ_nid2ln(int n);
const char *OBJ_nid2sn(int n);
int OBJ_obj2nid(const ASN1_OBJECT *o);
ASN1_OBJECT *OBJ_txt2obj(const char *s, int no_name);
int OBJ_obj2txt(char *buf, int buf_len, const ASN1_OBJECT *a, int no_name);
int OBJ_txt2nid(const char *s);
int OBJ_ln2nid(const char *s);
int OBJ_sn2nid(const char *s);
int OBJ_cmp(const ASN1_OBJECT *a, const ASN1_OBJECT *b);
const void *OBJ_bsearch_(const void *key, const void *base, int num, int size,
                         int (*cmp) (const void *, const void *));
const void *OBJ_bsearch_ex_(const void *key, const void *base, int num,
                            int size,
                            int (*cmp) (const void *, const void *),
                            int flags);
# 1104 "/usr/include/openssl/objects.h" 3 4
int OBJ_new_nid(int num);
int OBJ_add_object(const ASN1_OBJECT *obj);
int OBJ_create(const char *oid, const char *sn, const char *ln);
void OBJ_cleanup(void);
int OBJ_create_objects(BIO *in);

int OBJ_find_sigid_algs(int signid, int *pdig_nid, int *ppkey_nid);
int OBJ_find_sigid_by_algs(int *psignid, int dig_nid, int pkey_nid);
int OBJ_add_sigid(int signid, int dig_id, int pkey_id);
void OBJ_sigid_free(void);

extern int obj_cleanup_defer;
void check_defer(int nid);






void ERR_load_OBJ_strings(void);
# 95 "/usr/include/openssl/evp.h" 2 3 4
# 129 "/usr/include/openssl/evp.h" 3 4
struct evp_pkey_st {
    int type;
    int save_type;
    int references;
    const EVP_PKEY_ASN1_METHOD *ameth;
    ENGINE *engine;
    union {
        char *ptr;

        struct rsa_st *rsa;


        struct dsa_st *dsa;


        struct dh_st *dh;


        struct ec_key_st *ec;

    } pkey;
    int save_parameters;
    struct stack_st_X509_ATTRIBUTE *attributes;
} ;







struct env_md_st {
    int type;
    int pkey_type;
    int md_size;
    unsigned long flags;
    int (*init) (EVP_MD_CTX *ctx);
    int (*update) (EVP_MD_CTX *ctx, const void *data, size_t count);
    int (*final) (EVP_MD_CTX *ctx, unsigned char *md);
    int (*copy) (EVP_MD_CTX *to, const EVP_MD_CTX *from);
    int (*cleanup) (EVP_MD_CTX *ctx);

    int (*sign) (int type, const unsigned char *m, unsigned int m_length,
                 unsigned char *sigret, unsigned int *siglen, void *key);
    int (*verify) (int type, const unsigned char *m, unsigned int m_length,
                   const unsigned char *sigbuf, unsigned int siglen,
                   void *key);
    int required_pkey_type[5];
    int block_size;
    int ctx_size;

    int (*md_ctrl) (EVP_MD_CTX *ctx, int cmd, int p1, void *p2);
} ;

typedef int evp_sign_method(int type, const unsigned char *m,
                            unsigned int m_length, unsigned char *sigret,
                            unsigned int *siglen, void *key);
typedef int evp_verify_method(int type, const unsigned char *m,
                              unsigned int m_length,
                              const unsigned char *sigbuf,
                              unsigned int siglen, void *key);
# 268 "/usr/include/openssl/evp.h" 3 4
struct env_md_ctx_st {
    const EVP_MD *digest;
    ENGINE *engine;

    unsigned long flags;
    void *md_data;

    EVP_PKEY_CTX *pctx;

    int (*update) (EVP_MD_CTX *ctx, const void *data, size_t count);
} ;
# 308 "/usr/include/openssl/evp.h" 3 4
struct evp_cipher_st {
    int nid;
    int block_size;

    int key_len;
    int iv_len;

    unsigned long flags;

    int (*init) (EVP_CIPHER_CTX *ctx, const unsigned char *key,
                 const unsigned char *iv, int enc);

    int (*do_cipher) (EVP_CIPHER_CTX *ctx, unsigned char *out,
                      const unsigned char *in, size_t inl);

    int (*cleanup) (EVP_CIPHER_CTX *);

    int ctx_size;

    int (*set_asn1_parameters) (EVP_CIPHER_CTX *, ASN1_TYPE *);

    int (*get_asn1_parameters) (EVP_CIPHER_CTX *, ASN1_TYPE *);

    int (*ctrl) (EVP_CIPHER_CTX *, int type, int arg, void *ptr);

    void *app_data;
} ;
# 429 "/usr/include/openssl/evp.h" 3 4
typedef struct {
    unsigned char *out;
    const unsigned char *inp;
    size_t len;
    unsigned int interleave;
} EVP_CTRL_TLS1_1_MULTIBLOCK_PARAM;
# 444 "/usr/include/openssl/evp.h" 3 4
typedef struct evp_cipher_info_st {
    const EVP_CIPHER *cipher;
    unsigned char iv[16];
} EVP_CIPHER_INFO;

struct evp_cipher_ctx_st {
    const EVP_CIPHER *cipher;
    ENGINE *engine;

    int encrypt;
    int buf_len;
    unsigned char oiv[16];
    unsigned char iv[16];
    unsigned char buf[32];
    int num;
    void *app_data;
    int key_len;
    unsigned long flags;
    void *cipher_data;
    int final_used;
    int block_mask;
    unsigned char final[32];
} ;

typedef struct evp_Encode_Ctx_st {

    int num;





    int length;

    unsigned char enc_data[80];

    int line_num;
    int expect_nl;
} EVP_ENCODE_CTX;


typedef int (EVP_PBE_KEYGEN) (EVP_CIPHER_CTX *ctx, const char *pass,
                              int passlen, ASN1_TYPE *param,
                              const EVP_CIPHER *cipher, const EVP_MD *md,
                              int en_de);
# 516 "/usr/include/openssl/evp.h" 3 4
int EVP_MD_type(const EVP_MD *md);


int EVP_MD_pkey_type(const EVP_MD *md);
int EVP_MD_size(const EVP_MD *md);
int EVP_MD_block_size(const EVP_MD *md);
unsigned long EVP_MD_flags(const EVP_MD *md);

const EVP_MD *EVP_MD_CTX_md(const EVP_MD_CTX *ctx);




int EVP_CIPHER_nid(const EVP_CIPHER *cipher);

int EVP_CIPHER_block_size(const EVP_CIPHER *cipher);
int EVP_CIPHER_key_length(const EVP_CIPHER *cipher);
int EVP_CIPHER_iv_length(const EVP_CIPHER *cipher);
unsigned long EVP_CIPHER_flags(const EVP_CIPHER *cipher);


const EVP_CIPHER *EVP_CIPHER_CTX_cipher(const EVP_CIPHER_CTX *ctx);
int EVP_CIPHER_CTX_nid(const EVP_CIPHER_CTX *ctx);
int EVP_CIPHER_CTX_block_size(const EVP_CIPHER_CTX *ctx);
int EVP_CIPHER_CTX_key_length(const EVP_CIPHER_CTX *ctx);
int EVP_CIPHER_CTX_iv_length(const EVP_CIPHER_CTX *ctx);
int EVP_CIPHER_CTX_copy(EVP_CIPHER_CTX *out, const EVP_CIPHER_CTX *in);
void *EVP_CIPHER_CTX_get_app_data(const EVP_CIPHER_CTX *ctx);
void EVP_CIPHER_CTX_set_app_data(EVP_CIPHER_CTX *ctx, void *data);

unsigned long EVP_CIPHER_CTX_flags(const EVP_CIPHER_CTX *ctx);
# 574 "/usr/include/openssl/evp.h" 3 4
int EVP_Cipher(EVP_CIPHER_CTX *c,
               unsigned char *out, const unsigned char *in, unsigned int inl);
# 586 "/usr/include/openssl/evp.h" 3 4
void EVP_MD_CTX_init(EVP_MD_CTX *ctx);
int EVP_MD_CTX_cleanup(EVP_MD_CTX *ctx);
EVP_MD_CTX *EVP_MD_CTX_create(void);
void EVP_MD_CTX_destroy(EVP_MD_CTX *ctx);
int EVP_MD_CTX_copy_ex(EVP_MD_CTX *out, const EVP_MD_CTX *in);
void EVP_MD_CTX_set_flags(EVP_MD_CTX *ctx, int flags);
void EVP_MD_CTX_clear_flags(EVP_MD_CTX *ctx, int flags);
int EVP_MD_CTX_test_flags(const EVP_MD_CTX *ctx, int flags);
int EVP_DigestInit_ex(EVP_MD_CTX *ctx, const EVP_MD *type, ENGINE *impl);
int EVP_DigestUpdate(EVP_MD_CTX *ctx, const void *d, size_t cnt);
int EVP_DigestFinal_ex(EVP_MD_CTX *ctx, unsigned char *md, unsigned int *s);
int EVP_Digest(const void *data, size_t count,
               unsigned char *md, unsigned int *size, const EVP_MD *type,
               ENGINE *impl);

int EVP_MD_CTX_copy(EVP_MD_CTX *out, const EVP_MD_CTX *in);
int EVP_DigestInit(EVP_MD_CTX *ctx, const EVP_MD *type);
int EVP_DigestFinal(EVP_MD_CTX *ctx, unsigned char *md, unsigned int *s);

int EVP_read_pw_string(char *buf, int length, const char *prompt, int verify);
int EVP_read_pw_string_min(char *buf, int minlen, int maxlen,
                           const char *prompt, int verify);
void EVP_set_pw_prompt(const char *prompt);
char *EVP_get_pw_prompt(void);

int EVP_BytesToKey(const EVP_CIPHER *type, const EVP_MD *md,
                   const unsigned char *salt, const unsigned char *data,
                   int datal, int count, unsigned char *key,
                   unsigned char *iv);

void EVP_CIPHER_CTX_set_flags(EVP_CIPHER_CTX *ctx, int flags);
void EVP_CIPHER_CTX_clear_flags(EVP_CIPHER_CTX *ctx, int flags);
int EVP_CIPHER_CTX_test_flags(const EVP_CIPHER_CTX *ctx, int flags);

int EVP_EncryptInit(EVP_CIPHER_CTX *ctx, const EVP_CIPHER *cipher,
                    const unsigned char *key, const unsigned char *iv);
int EVP_EncryptInit_ex(EVP_CIPHER_CTX *ctx, const EVP_CIPHER *cipher,
                       ENGINE *impl, const unsigned char *key,
                       const unsigned char *iv);
int EVP_EncryptUpdate(EVP_CIPHER_CTX *ctx, unsigned char *out, int *outl,
                      const unsigned char *in, int inl);
int EVP_EncryptFinal_ex(EVP_CIPHER_CTX *ctx, unsigned char *out, int *outl);
int EVP_EncryptFinal(EVP_CIPHER_CTX *ctx, unsigned char *out, int *outl);

int EVP_DecryptInit(EVP_CIPHER_CTX *ctx, const EVP_CIPHER *cipher,
                    const unsigned char *key, const unsigned char *iv);
int EVP_DecryptInit_ex(EVP_CIPHER_CTX *ctx, const EVP_CIPHER *cipher,
                       ENGINE *impl, const unsigned char *key,
                       const unsigned char *iv);
int EVP_DecryptUpdate(EVP_CIPHER_CTX *ctx, unsigned char *out, int *outl,
                      const unsigned char *in, int inl);
int EVP_DecryptFinal(EVP_CIPHER_CTX *ctx, unsigned char *outm, int *outl);
int EVP_DecryptFinal_ex(EVP_CIPHER_CTX *ctx, unsigned char *outm, int *outl);

int EVP_CipherInit(EVP_CIPHER_CTX *ctx, const EVP_CIPHER *cipher,
                   const unsigned char *key, const unsigned char *iv,
                   int enc);
int EVP_CipherInit_ex(EVP_CIPHER_CTX *ctx, const EVP_CIPHER *cipher,
                      ENGINE *impl, const unsigned char *key,
                      const unsigned char *iv, int enc);
int EVP_CipherUpdate(EVP_CIPHER_CTX *ctx, unsigned char *out, int *outl,
                     const unsigned char *in, int inl);
int EVP_CipherFinal(EVP_CIPHER_CTX *ctx, unsigned char *outm, int *outl);
int EVP_CipherFinal_ex(EVP_CIPHER_CTX *ctx, unsigned char *outm, int *outl);

int EVP_SignFinal(EVP_MD_CTX *ctx, unsigned char *md, unsigned int *s,
                  EVP_PKEY *pkey);

int EVP_VerifyFinal(EVP_MD_CTX *ctx, const unsigned char *sigbuf,
                    unsigned int siglen, EVP_PKEY *pkey);

int EVP_DigestSignInit(EVP_MD_CTX *ctx, EVP_PKEY_CTX **pctx,
                       const EVP_MD *type, ENGINE *e, EVP_PKEY *pkey);
int EVP_DigestSignFinal(EVP_MD_CTX *ctx,
                        unsigned char *sigret, size_t *siglen);

int EVP_DigestVerifyInit(EVP_MD_CTX *ctx, EVP_PKEY_CTX **pctx,
                         const EVP_MD *type, ENGINE *e, EVP_PKEY *pkey);
int EVP_DigestVerifyFinal(EVP_MD_CTX *ctx,
                          const unsigned char *sig, size_t siglen);

int EVP_OpenInit(EVP_CIPHER_CTX *ctx, const EVP_CIPHER *type,
                 const unsigned char *ek, int ekl, const unsigned char *iv,
                 EVP_PKEY *priv);
int EVP_OpenFinal(EVP_CIPHER_CTX *ctx, unsigned char *out, int *outl);

int EVP_SealInit(EVP_CIPHER_CTX *ctx, const EVP_CIPHER *type,
                 unsigned char **ek, int *ekl, unsigned char *iv,
                 EVP_PKEY **pubk, int npubk);
int EVP_SealFinal(EVP_CIPHER_CTX *ctx, unsigned char *out, int *outl);

void EVP_EncodeInit(EVP_ENCODE_CTX *ctx);
void EVP_EncodeUpdate(EVP_ENCODE_CTX *ctx, unsigned char *out, int *outl,
                      const unsigned char *in, int inl);
void EVP_EncodeFinal(EVP_ENCODE_CTX *ctx, unsigned char *out, int *outl);
int EVP_EncodeBlock(unsigned char *t, const unsigned char *f, int n);

void EVP_DecodeInit(EVP_ENCODE_CTX *ctx);
int EVP_DecodeUpdate(EVP_ENCODE_CTX *ctx, unsigned char *out, int *outl,
                     const unsigned char *in, int inl);
int EVP_DecodeFinal(EVP_ENCODE_CTX *ctx, unsigned
                    char *out, int *outl);
int EVP_DecodeBlock(unsigned char *t, const unsigned char *f, int n);

void EVP_CIPHER_CTX_init(EVP_CIPHER_CTX *a);
int EVP_CIPHER_CTX_cleanup(EVP_CIPHER_CTX *a);
EVP_CIPHER_CTX *EVP_CIPHER_CTX_new(void);
void EVP_CIPHER_CTX_free(EVP_CIPHER_CTX *a);
int EVP_CIPHER_CTX_set_key_length(EVP_CIPHER_CTX *x, int keylen);
int EVP_CIPHER_CTX_set_padding(EVP_CIPHER_CTX *c, int pad);
int EVP_CIPHER_CTX_ctrl(EVP_CIPHER_CTX *ctx, int type, int arg, void *ptr);
int EVP_CIPHER_CTX_rand_key(EVP_CIPHER_CTX *ctx, unsigned char *key);


BIO_METHOD *BIO_f_md(void);
BIO_METHOD *BIO_f_base64(void);
BIO_METHOD *BIO_f_cipher(void);
BIO_METHOD *BIO_f_reliable(void);
void BIO_set_cipher(BIO *b, const EVP_CIPHER *c, const unsigned char *k,
                    const unsigned char *i, int enc);


const EVP_MD *EVP_md_null(void);




const EVP_MD *EVP_md4(void);


const EVP_MD *EVP_md5(void);


const EVP_MD *EVP_sha(void);
const EVP_MD *EVP_sha1(void);
const EVP_MD *EVP_dss(void);
const EVP_MD *EVP_dss1(void);
const EVP_MD *EVP_ecdsa(void);


const EVP_MD *EVP_sha224(void);
const EVP_MD *EVP_sha256(void);


const EVP_MD *EVP_sha384(void);
const EVP_MD *EVP_sha512(void);





const EVP_MD *EVP_ripemd160(void);


const EVP_MD *EVP_whirlpool(void);

const EVP_CIPHER *EVP_enc_null(void);

const EVP_CIPHER *EVP_des_ecb(void);
const EVP_CIPHER *EVP_des_ede(void);
const EVP_CIPHER *EVP_des_ede3(void);
const EVP_CIPHER *EVP_des_ede_ecb(void);
const EVP_CIPHER *EVP_des_ede3_ecb(void);
const EVP_CIPHER *EVP_des_cfb64(void);

const EVP_CIPHER *EVP_des_cfb1(void);
const EVP_CIPHER *EVP_des_cfb8(void);
const EVP_CIPHER *EVP_des_ede_cfb64(void);





const EVP_CIPHER *EVP_des_ede3_cfb64(void);

const EVP_CIPHER *EVP_des_ede3_cfb1(void);
const EVP_CIPHER *EVP_des_ede3_cfb8(void);
const EVP_CIPHER *EVP_des_ofb(void);
const EVP_CIPHER *EVP_des_ede_ofb(void);
const EVP_CIPHER *EVP_des_ede3_ofb(void);
const EVP_CIPHER *EVP_des_cbc(void);
const EVP_CIPHER *EVP_des_ede_cbc(void);
const EVP_CIPHER *EVP_des_ede3_cbc(void);
const EVP_CIPHER *EVP_desx_cbc(void);
const EVP_CIPHER *EVP_des_ede3_wrap(void);
# 785 "/usr/include/openssl/evp.h" 3 4
const EVP_CIPHER *EVP_rc4(void);
const EVP_CIPHER *EVP_rc4_40(void);

const EVP_CIPHER *EVP_rc4_hmac_md5(void);
# 799 "/usr/include/openssl/evp.h" 3 4
const EVP_CIPHER *EVP_rc2_ecb(void);
const EVP_CIPHER *EVP_rc2_cbc(void);
const EVP_CIPHER *EVP_rc2_40_cbc(void);
const EVP_CIPHER *EVP_rc2_64_cbc(void);
const EVP_CIPHER *EVP_rc2_cfb64(void);

const EVP_CIPHER *EVP_rc2_ofb(void);


const EVP_CIPHER *EVP_bf_ecb(void);
const EVP_CIPHER *EVP_bf_cbc(void);
const EVP_CIPHER *EVP_bf_cfb64(void);

const EVP_CIPHER *EVP_bf_ofb(void);


const EVP_CIPHER *EVP_cast5_ecb(void);
const EVP_CIPHER *EVP_cast5_cbc(void);
const EVP_CIPHER *EVP_cast5_cfb64(void);

const EVP_CIPHER *EVP_cast5_ofb(void);
# 829 "/usr/include/openssl/evp.h" 3 4
const EVP_CIPHER *EVP_aes_128_ecb(void);
const EVP_CIPHER *EVP_aes_128_cbc(void);
const EVP_CIPHER *EVP_aes_128_cfb1(void);
const EVP_CIPHER *EVP_aes_128_cfb8(void);
const EVP_CIPHER *EVP_aes_128_cfb128(void);

const EVP_CIPHER *EVP_aes_128_ofb(void);
const EVP_CIPHER *EVP_aes_128_ctr(void);
const EVP_CIPHER *EVP_aes_128_ccm(void);
const EVP_CIPHER *EVP_aes_128_gcm(void);
const EVP_CIPHER *EVP_aes_128_xts(void);
const EVP_CIPHER *EVP_aes_128_wrap(void);
const EVP_CIPHER *EVP_aes_192_ecb(void);
const EVP_CIPHER *EVP_aes_192_cbc(void);
const EVP_CIPHER *EVP_aes_192_cfb1(void);
const EVP_CIPHER *EVP_aes_192_cfb8(void);
const EVP_CIPHER *EVP_aes_192_cfb128(void);

const EVP_CIPHER *EVP_aes_192_ofb(void);
const EVP_CIPHER *EVP_aes_192_ctr(void);
const EVP_CIPHER *EVP_aes_192_ccm(void);
const EVP_CIPHER *EVP_aes_192_gcm(void);
const EVP_CIPHER *EVP_aes_192_wrap(void);
const EVP_CIPHER *EVP_aes_256_ecb(void);
const EVP_CIPHER *EVP_aes_256_cbc(void);
const EVP_CIPHER *EVP_aes_256_cfb1(void);
const EVP_CIPHER *EVP_aes_256_cfb8(void);
const EVP_CIPHER *EVP_aes_256_cfb128(void);

const EVP_CIPHER *EVP_aes_256_ofb(void);
const EVP_CIPHER *EVP_aes_256_ctr(void);
const EVP_CIPHER *EVP_aes_256_ccm(void);
const EVP_CIPHER *EVP_aes_256_gcm(void);
const EVP_CIPHER *EVP_aes_256_xts(void);
const EVP_CIPHER *EVP_aes_256_wrap(void);

const EVP_CIPHER *EVP_aes_128_cbc_hmac_sha1(void);
const EVP_CIPHER *EVP_aes_256_cbc_hmac_sha1(void);


const EVP_CIPHER *EVP_aes_128_cbc_hmac_sha256(void);
const EVP_CIPHER *EVP_aes_256_cbc_hmac_sha256(void);



const EVP_CIPHER *EVP_camellia_128_ecb(void);
const EVP_CIPHER *EVP_camellia_128_cbc(void);
const EVP_CIPHER *EVP_camellia_128_cfb1(void);
const EVP_CIPHER *EVP_camellia_128_cfb8(void);
const EVP_CIPHER *EVP_camellia_128_cfb128(void);

const EVP_CIPHER *EVP_camellia_128_ofb(void);
const EVP_CIPHER *EVP_camellia_192_ecb(void);
const EVP_CIPHER *EVP_camellia_192_cbc(void);
const EVP_CIPHER *EVP_camellia_192_cfb1(void);
const EVP_CIPHER *EVP_camellia_192_cfb8(void);
const EVP_CIPHER *EVP_camellia_192_cfb128(void);

const EVP_CIPHER *EVP_camellia_192_ofb(void);
const EVP_CIPHER *EVP_camellia_256_ecb(void);
const EVP_CIPHER *EVP_camellia_256_cbc(void);
const EVP_CIPHER *EVP_camellia_256_cfb1(void);
const EVP_CIPHER *EVP_camellia_256_cfb8(void);
const EVP_CIPHER *EVP_camellia_256_cfb128(void);

const EVP_CIPHER *EVP_camellia_256_ofb(void);



const EVP_CIPHER *EVP_seed_ecb(void);
const EVP_CIPHER *EVP_seed_cbc(void);
const EVP_CIPHER *EVP_seed_cfb128(void);

const EVP_CIPHER *EVP_seed_ofb(void);


void OPENSSL_add_all_algorithms_noconf(void);
void OPENSSL_add_all_algorithms_conf(void);
# 916 "/usr/include/openssl/evp.h" 3 4
void OpenSSL_add_all_ciphers(void);
void OpenSSL_add_all_digests(void);




int EVP_add_cipher(const EVP_CIPHER *cipher);
int EVP_add_digest(const EVP_MD *digest);

const EVP_CIPHER *EVP_get_cipherbyname(const char *name);
const EVP_MD *EVP_get_digestbyname(const char *name);
void EVP_cleanup(void);

void EVP_CIPHER_do_all(void (*fn) (const EVP_CIPHER *ciph,
                                   const char *from, const char *to, void *x),
                       void *arg);
void EVP_CIPHER_do_all_sorted(void (*fn)
                               (const EVP_CIPHER *ciph, const char *from,
                                const char *to, void *x), void *arg);

void EVP_MD_do_all(void (*fn) (const EVP_MD *ciph,
                               const char *from, const char *to, void *x),
                   void *arg);
void EVP_MD_do_all_sorted(void (*fn)
                           (const EVP_MD *ciph, const char *from,
                            const char *to, void *x), void *arg);

int EVP_PKEY_decrypt_old(unsigned char *dec_key,
                         const unsigned char *enc_key, int enc_key_len,
                         EVP_PKEY *private_key);
int EVP_PKEY_encrypt_old(unsigned char *enc_key,
                         const unsigned char *key, int key_len,
                         EVP_PKEY *pub_key);
int EVP_PKEY_type(int type);
int EVP_PKEY_id(const EVP_PKEY *pkey);
int EVP_PKEY_base_id(const EVP_PKEY *pkey);
int EVP_PKEY_bits(EVP_PKEY *pkey);
int EVP_PKEY_size(EVP_PKEY *pkey);
int EVP_PKEY_set_type(EVP_PKEY *pkey, int type);
int EVP_PKEY_set_type_str(EVP_PKEY *pkey, const char *str, int len);
int EVP_PKEY_assign(EVP_PKEY *pkey, int type, void *key);
void *EVP_PKEY_get0(EVP_PKEY *pkey);


struct rsa_st;
int EVP_PKEY_set1_RSA(EVP_PKEY *pkey, struct rsa_st *key);
struct rsa_st *EVP_PKEY_get1_RSA(EVP_PKEY *pkey);


struct dsa_st;
int EVP_PKEY_set1_DSA(EVP_PKEY *pkey, struct dsa_st *key);
struct dsa_st *EVP_PKEY_get1_DSA(EVP_PKEY *pkey);


struct dh_st;
int EVP_PKEY_set1_DH(EVP_PKEY *pkey, struct dh_st *key);
struct dh_st *EVP_PKEY_get1_DH(EVP_PKEY *pkey);


struct ec_key_st;
int EVP_PKEY_set1_EC_KEY(EVP_PKEY *pkey, struct ec_key_st *key);
struct ec_key_st *EVP_PKEY_get1_EC_KEY(EVP_PKEY *pkey);


EVP_PKEY *EVP_PKEY_new(void);
void EVP_PKEY_free(EVP_PKEY *pkey);

EVP_PKEY *d2i_PublicKey(int type, EVP_PKEY **a, const unsigned char **pp,
                        long length);
int i2d_PublicKey(EVP_PKEY *a, unsigned char **pp);

EVP_PKEY *d2i_PrivateKey(int type, EVP_PKEY **a, const unsigned char **pp,
                         long length);
EVP_PKEY *d2i_AutoPrivateKey(EVP_PKEY **a, const unsigned char **pp,
                             long length);
int i2d_PrivateKey(EVP_PKEY *a, unsigned char **pp);

int EVP_PKEY_copy_parameters(EVP_PKEY *to, const EVP_PKEY *from);
int EVP_PKEY_missing_parameters(const EVP_PKEY *pkey);
int EVP_PKEY_save_parameters(EVP_PKEY *pkey, int mode);
int EVP_PKEY_cmp_parameters(const EVP_PKEY *a, const EVP_PKEY *b);

int EVP_PKEY_cmp(const EVP_PKEY *a, const EVP_PKEY *b);

int EVP_PKEY_print_public(BIO *out, const EVP_PKEY *pkey,
                          int indent, ASN1_PCTX *pctx);
int EVP_PKEY_print_private(BIO *out, const EVP_PKEY *pkey,
                           int indent, ASN1_PCTX *pctx);
int EVP_PKEY_print_params(BIO *out, const EVP_PKEY *pkey,
                          int indent, ASN1_PCTX *pctx);

int EVP_PKEY_get_default_digest_nid(EVP_PKEY *pkey, int *pnid);

int EVP_CIPHER_type(const EVP_CIPHER *ctx);


int EVP_CIPHER_param_to_asn1(EVP_CIPHER_CTX *c, ASN1_TYPE *type);
int EVP_CIPHER_asn1_to_param(EVP_CIPHER_CTX *c, ASN1_TYPE *type);


int EVP_CIPHER_set_asn1_iv(EVP_CIPHER_CTX *c, ASN1_TYPE *type);
int EVP_CIPHER_get_asn1_iv(EVP_CIPHER_CTX *c, ASN1_TYPE *type);


int PKCS5_PBE_keyivgen(EVP_CIPHER_CTX *ctx, const char *pass, int passlen,
                       ASN1_TYPE *param, const EVP_CIPHER *cipher,
                       const EVP_MD *md, int en_de);
int PKCS5_PBKDF2_HMAC_SHA1(const char *pass, int passlen,
                           const unsigned char *salt, int saltlen, int iter,
                           int keylen, unsigned char *out);
int PKCS5_PBKDF2_HMAC(const char *pass, int passlen,
                      const unsigned char *salt, int saltlen, int iter,
                      const EVP_MD *digest, int keylen, unsigned char *out);
int PKCS5_v2_PBE_keyivgen(EVP_CIPHER_CTX *ctx, const char *pass, int passlen,
                          ASN1_TYPE *param, const EVP_CIPHER *cipher,
                          const EVP_MD *md, int en_de);

void PKCS5_PBE_add(void);

int EVP_PBE_CipherInit(ASN1_OBJECT *pbe_obj, const char *pass, int passlen,
                       ASN1_TYPE *param, EVP_CIPHER_CTX *ctx, int en_de);
# 1045 "/usr/include/openssl/evp.h" 3 4
int EVP_PBE_alg_add_type(int pbe_type, int pbe_nid, int cipher_nid,
                         int md_nid, EVP_PBE_KEYGEN *keygen);
int EVP_PBE_alg_add(int nid, const EVP_CIPHER *cipher, const EVP_MD *md,
                    EVP_PBE_KEYGEN *keygen);
int EVP_PBE_find(int type, int pbe_nid, int *pcnid, int *pmnid,
                 EVP_PBE_KEYGEN **pkeygen);
void EVP_PBE_cleanup(void);
# 1064 "/usr/include/openssl/evp.h" 3 4
int EVP_PKEY_asn1_get_count(void);
const EVP_PKEY_ASN1_METHOD *EVP_PKEY_asn1_get0(int idx);
const EVP_PKEY_ASN1_METHOD *EVP_PKEY_asn1_find(ENGINE **pe, int type);
const EVP_PKEY_ASN1_METHOD *EVP_PKEY_asn1_find_str(ENGINE **pe,
                                                   const char *str, int len);
int EVP_PKEY_asn1_add0(const EVP_PKEY_ASN1_METHOD *ameth);
int EVP_PKEY_asn1_add_alias(int to, int from);
int EVP_PKEY_asn1_get0_info(int *ppkey_id, int *pkey_base_id,
                            int *ppkey_flags, const char **pinfo,
                            const char **ppem_str,
                            const EVP_PKEY_ASN1_METHOD *ameth);

const EVP_PKEY_ASN1_METHOD *EVP_PKEY_get0_asn1(EVP_PKEY *pkey);
EVP_PKEY_ASN1_METHOD *EVP_PKEY_asn1_new(int id, int flags,
                                        const char *pem_str,
                                        const char *info);
void EVP_PKEY_asn1_copy(EVP_PKEY_ASN1_METHOD *dst,
                        const EVP_PKEY_ASN1_METHOD *src);
void EVP_PKEY_asn1_free(EVP_PKEY_ASN1_METHOD *ameth);
void EVP_PKEY_asn1_set_public(EVP_PKEY_ASN1_METHOD *ameth,
                              int (*pub_decode) (EVP_PKEY *pk,
                                                 X509_PUBKEY *pub),
                              int (*pub_encode) (X509_PUBKEY *pub,
                                                 const EVP_PKEY *pk),
                              int (*pub_cmp) (const EVP_PKEY *a,
                                              const EVP_PKEY *b),
                              int (*pub_print) (BIO *out,
                                                const EVP_PKEY *pkey,
                                                int indent, ASN1_PCTX *pctx),
                              int (*pkey_size) (const EVP_PKEY *pk),
                              int (*pkey_bits) (const EVP_PKEY *pk));
void EVP_PKEY_asn1_set_private(EVP_PKEY_ASN1_METHOD *ameth,
                               int (*priv_decode) (EVP_PKEY *pk,
                                                   PKCS8_PRIV_KEY_INFO
                                                   *p8inf),
                               int (*priv_encode) (PKCS8_PRIV_KEY_INFO *p8,
                                                   const EVP_PKEY *pk),
                               int (*priv_print) (BIO *out,
                                                  const EVP_PKEY *pkey,
                                                  int indent,
                                                  ASN1_PCTX *pctx));
void EVP_PKEY_asn1_set_param(EVP_PKEY_ASN1_METHOD *ameth,
                             int (*param_decode) (EVP_PKEY *pkey,
                                                  const unsigned char **pder,
                                                  int derlen),
                             int (*param_encode) (const EVP_PKEY *pkey,
                                                  unsigned char **pder),
                             int (*param_missing) (const EVP_PKEY *pk),
                             int (*param_copy) (EVP_PKEY *to,
                                                const EVP_PKEY *from),
                             int (*param_cmp) (const EVP_PKEY *a,
                                               const EVP_PKEY *b),
                             int (*param_print) (BIO *out,
                                                 const EVP_PKEY *pkey,
                                                 int indent,
                                                 ASN1_PCTX *pctx));

void EVP_PKEY_asn1_set_free(EVP_PKEY_ASN1_METHOD *ameth,
                            void (*pkey_free) (EVP_PKEY *pkey));
void EVP_PKEY_asn1_set_ctrl(EVP_PKEY_ASN1_METHOD *ameth,
                            int (*pkey_ctrl) (EVP_PKEY *pkey, int op,
                                              long arg1, void *arg2));
void EVP_PKEY_asn1_set_item(EVP_PKEY_ASN1_METHOD *ameth,
                            int (*item_verify) (EVP_MD_CTX *ctx,
                                                const ASN1_ITEM *it,
                                                void *asn,
                                                X509_ALGOR *a,
                                                ASN1_BIT_STRING *sig,
                                                EVP_PKEY *pkey),
                            int (*item_sign) (EVP_MD_CTX *ctx,
                                              const ASN1_ITEM *it,
                                              void *asn,
                                              X509_ALGOR *alg1,
                                              X509_ALGOR *alg2,
                                              ASN1_BIT_STRING *sig));
# 1204 "/usr/include/openssl/evp.h" 3 4
const EVP_PKEY_METHOD *EVP_PKEY_meth_find(int type);
EVP_PKEY_METHOD *EVP_PKEY_meth_new(int id, int flags);
void EVP_PKEY_meth_get0_info(int *ppkey_id, int *pflags,
                             const EVP_PKEY_METHOD *meth);
void EVP_PKEY_meth_copy(EVP_PKEY_METHOD *dst, const EVP_PKEY_METHOD *src);
void EVP_PKEY_meth_free(EVP_PKEY_METHOD *pmeth);
int EVP_PKEY_meth_add0(const EVP_PKEY_METHOD *pmeth);

EVP_PKEY_CTX *EVP_PKEY_CTX_new(EVP_PKEY *pkey, ENGINE *e);
EVP_PKEY_CTX *EVP_PKEY_CTX_new_id(int id, ENGINE *e);
EVP_PKEY_CTX *EVP_PKEY_CTX_dup(EVP_PKEY_CTX *ctx);
void EVP_PKEY_CTX_free(EVP_PKEY_CTX *ctx);

int EVP_PKEY_CTX_ctrl(EVP_PKEY_CTX *ctx, int keytype, int optype,
                      int cmd, int p1, void *p2);
int EVP_PKEY_CTX_ctrl_str(EVP_PKEY_CTX *ctx, const char *type,
                          const char *value);

int EVP_PKEY_CTX_get_operation(EVP_PKEY_CTX *ctx);
void EVP_PKEY_CTX_set0_keygen_info(EVP_PKEY_CTX *ctx, int *dat, int datlen);

EVP_PKEY *EVP_PKEY_new_mac_key(int type, ENGINE *e,
                               const unsigned char *key, int keylen);

void EVP_PKEY_CTX_set_data(EVP_PKEY_CTX *ctx, void *data);
void *EVP_PKEY_CTX_get_data(EVP_PKEY_CTX *ctx);
EVP_PKEY *EVP_PKEY_CTX_get0_pkey(EVP_PKEY_CTX *ctx);

EVP_PKEY *EVP_PKEY_CTX_get0_peerkey(EVP_PKEY_CTX *ctx);

void EVP_PKEY_CTX_set_app_data(EVP_PKEY_CTX *ctx, void *data);
void *EVP_PKEY_CTX_get_app_data(EVP_PKEY_CTX *ctx);

int EVP_PKEY_sign_init(EVP_PKEY_CTX *ctx);
int EVP_PKEY_sign(EVP_PKEY_CTX *ctx,
                  unsigned char *sig, size_t *siglen,
                  const unsigned char *tbs, size_t tbslen);
int EVP_PKEY_verify_init(EVP_PKEY_CTX *ctx);
int EVP_PKEY_verify(EVP_PKEY_CTX *ctx,
                    const unsigned char *sig, size_t siglen,
                    const unsigned char *tbs, size_t tbslen);
int EVP_PKEY_verify_recover_init(EVP_PKEY_CTX *ctx);
int EVP_PKEY_verify_recover(EVP_PKEY_CTX *ctx,
                            unsigned char *rout, size_t *routlen,
                            const unsigned char *sig, size_t siglen);
int EVP_PKEY_encrypt_init(EVP_PKEY_CTX *ctx);
int EVP_PKEY_encrypt(EVP_PKEY_CTX *ctx,
                     unsigned char *out, size_t *outlen,
                     const unsigned char *in, size_t inlen);
int EVP_PKEY_decrypt_init(EVP_PKEY_CTX *ctx);
int EVP_PKEY_decrypt(EVP_PKEY_CTX *ctx,
                     unsigned char *out, size_t *outlen,
                     const unsigned char *in, size_t inlen);

int EVP_PKEY_derive_init(EVP_PKEY_CTX *ctx);
int EVP_PKEY_derive_set_peer(EVP_PKEY_CTX *ctx, EVP_PKEY *peer);
int EVP_PKEY_derive(EVP_PKEY_CTX *ctx, unsigned char *key, size_t *keylen);

typedef int EVP_PKEY_gen_cb (EVP_PKEY_CTX *ctx);

int EVP_PKEY_paramgen_init(EVP_PKEY_CTX *ctx);
int EVP_PKEY_paramgen(EVP_PKEY_CTX *ctx, EVP_PKEY **ppkey);
int EVP_PKEY_keygen_init(EVP_PKEY_CTX *ctx);
int EVP_PKEY_keygen(EVP_PKEY_CTX *ctx, EVP_PKEY **ppkey);

void EVP_PKEY_CTX_set_cb(EVP_PKEY_CTX *ctx, EVP_PKEY_gen_cb *cb);
EVP_PKEY_gen_cb *EVP_PKEY_CTX_get_cb(EVP_PKEY_CTX *ctx);

int EVP_PKEY_CTX_get_keygen_info(EVP_PKEY_CTX *ctx, int idx);

void EVP_PKEY_meth_set_init(EVP_PKEY_METHOD *pmeth,
                            int (*init) (EVP_PKEY_CTX *ctx));

void EVP_PKEY_meth_set_copy(EVP_PKEY_METHOD *pmeth,
                            int (*copy) (EVP_PKEY_CTX *dst,
                                         EVP_PKEY_CTX *src));

void EVP_PKEY_meth_set_cleanup(EVP_PKEY_METHOD *pmeth,
                               void (*cleanup) (EVP_PKEY_CTX *ctx));

void EVP_PKEY_meth_set_paramgen(EVP_PKEY_METHOD *pmeth,
                                int (*paramgen_init) (EVP_PKEY_CTX *ctx),
                                int (*paramgen) (EVP_PKEY_CTX *ctx,
                                                 EVP_PKEY *pkey));

void EVP_PKEY_meth_set_keygen(EVP_PKEY_METHOD *pmeth,
                              int (*keygen_init) (EVP_PKEY_CTX *ctx),
                              int (*keygen) (EVP_PKEY_CTX *ctx,
                                             EVP_PKEY *pkey));

void EVP_PKEY_meth_set_sign(EVP_PKEY_METHOD *pmeth,
                            int (*sign_init) (EVP_PKEY_CTX *ctx),
                            int (*sign) (EVP_PKEY_CTX *ctx,
                                         unsigned char *sig, size_t *siglen,
                                         const unsigned char *tbs,
                                         size_t tbslen));

void EVP_PKEY_meth_set_verify(EVP_PKEY_METHOD *pmeth,
                              int (*verify_init) (EVP_PKEY_CTX *ctx),
                              int (*verify) (EVP_PKEY_CTX *ctx,
                                             const unsigned char *sig,
                                             size_t siglen,
                                             const unsigned char *tbs,
                                             size_t tbslen));

void EVP_PKEY_meth_set_verify_recover(EVP_PKEY_METHOD *pmeth,
                                      int (*verify_recover_init) (EVP_PKEY_CTX
                                                                  *ctx),
                                      int (*verify_recover) (EVP_PKEY_CTX
                                                             *ctx,
                                                             unsigned char
                                                             *sig,
                                                             size_t *siglen,
                                                             const unsigned
                                                             char *tbs,
                                                             size_t tbslen));

void EVP_PKEY_meth_set_signctx(EVP_PKEY_METHOD *pmeth,
                               int (*signctx_init) (EVP_PKEY_CTX *ctx,
                                                    EVP_MD_CTX *mctx),
                               int (*signctx) (EVP_PKEY_CTX *ctx,
                                               unsigned char *sig,
                                               size_t *siglen,
                                               EVP_MD_CTX *mctx));

void EVP_PKEY_meth_set_verifyctx(EVP_PKEY_METHOD *pmeth,
                                 int (*verifyctx_init) (EVP_PKEY_CTX *ctx,
                                                        EVP_MD_CTX *mctx),
                                 int (*verifyctx) (EVP_PKEY_CTX *ctx,
                                                   const unsigned char *sig,
                                                   int siglen,
                                                   EVP_MD_CTX *mctx));

void EVP_PKEY_meth_set_encrypt(EVP_PKEY_METHOD *pmeth,
                               int (*encrypt_init) (EVP_PKEY_CTX *ctx),
                               int (*encryptfn) (EVP_PKEY_CTX *ctx,
                                                 unsigned char *out,
                                                 size_t *outlen,
                                                 const unsigned char *in,
                                                 size_t inlen));

void EVP_PKEY_meth_set_decrypt(EVP_PKEY_METHOD *pmeth,
                               int (*decrypt_init) (EVP_PKEY_CTX *ctx),
                               int (*decrypt) (EVP_PKEY_CTX *ctx,
                                               unsigned char *out,
                                               size_t *outlen,
                                               const unsigned char *in,
                                               size_t inlen));

void EVP_PKEY_meth_set_derive(EVP_PKEY_METHOD *pmeth,
                              int (*derive_init) (EVP_PKEY_CTX *ctx),
                              int (*derive) (EVP_PKEY_CTX *ctx,
                                             unsigned char *key,
                                             size_t *keylen));

void EVP_PKEY_meth_set_ctrl(EVP_PKEY_METHOD *pmeth,
                            int (*ctrl) (EVP_PKEY_CTX *ctx, int type, int p1,
                                         void *p2),
                            int (*ctrl_str) (EVP_PKEY_CTX *ctx,
                                             const char *type,
                                             const char *value));

void EVP_add_alg_module(void);






void ERR_load_EVP_strings(void);
# 74 "/usr/include/openssl/x509.h" 2 3 4
# 83 "/usr/include/openssl/x509.h" 3 4
# 1 "/usr/include/openssl/ec.h" 1 3 4
# 79 "/usr/include/openssl/ec.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/openssl/opensslconf.h" 1 3 4
# 80 "/usr/include/openssl/ec.h" 2 3 4
# 105 "/usr/include/openssl/ec.h" 3 4
typedef enum {


    POINT_CONVERSION_COMPRESSED = 2,

    POINT_CONVERSION_UNCOMPRESSED = 4,


    POINT_CONVERSION_HYBRID = 6
} point_conversion_form_t;

typedef struct ec_method_st EC_METHOD;

typedef struct ec_group_st
# 127 "/usr/include/openssl/ec.h" 3 4
    EC_GROUP;

typedef struct ec_point_st EC_POINT;
# 139 "/usr/include/openssl/ec.h" 3 4
const EC_METHOD *EC_GFp_simple_method(void);




const EC_METHOD *EC_GFp_mont_method(void);




const EC_METHOD *EC_GFp_nist_method(void);





const EC_METHOD *EC_GFp_nistp224_method(void);




const EC_METHOD *EC_GFp_nistp256_method(void);




const EC_METHOD *EC_GFp_nistp521_method(void);
# 176 "/usr/include/openssl/ec.h" 3 4
const EC_METHOD *EC_GF2m_simple_method(void);
# 188 "/usr/include/openssl/ec.h" 3 4
EC_GROUP *EC_GROUP_new(const EC_METHOD *meth);




void EC_GROUP_free(EC_GROUP *group);




void EC_GROUP_clear_free(EC_GROUP *group);






int EC_GROUP_copy(EC_GROUP *dst, const EC_GROUP *src);






EC_GROUP *EC_GROUP_dup(const EC_GROUP *src);





const EC_METHOD *EC_GROUP_method_of(const EC_GROUP *group);





int EC_METHOD_get_field_type(const EC_METHOD *meth);
# 234 "/usr/include/openssl/ec.h" 3 4
int EC_GROUP_set_generator(EC_GROUP *group, const EC_POINT *generator,
                           const BIGNUM *order, const BIGNUM *cofactor);





const EC_POINT *EC_GROUP_get0_generator(const EC_GROUP *group);





BN_MONT_CTX *EC_GROUP_get_mont_data(const EC_GROUP *group);







int EC_GROUP_get_order(const EC_GROUP *group, BIGNUM *order, BN_CTX *ctx);







int EC_GROUP_get_cofactor(const EC_GROUP *group, BIGNUM *cofactor,
                          BN_CTX *ctx);





void EC_GROUP_set_curve_name(EC_GROUP *group, int nid);





int EC_GROUP_get_curve_name(const EC_GROUP *group);

void EC_GROUP_set_asn1_flag(EC_GROUP *group, int flag);
int EC_GROUP_get_asn1_flag(const EC_GROUP *group);

void EC_GROUP_set_point_conversion_form(EC_GROUP *group,
                                        point_conversion_form_t form);
point_conversion_form_t EC_GROUP_get_point_conversion_form(const EC_GROUP *);

unsigned char *EC_GROUP_get0_seed(const EC_GROUP *x);
size_t EC_GROUP_get_seed_len(const EC_GROUP *);
size_t EC_GROUP_set_seed(EC_GROUP *, const unsigned char *, size_t len);
# 297 "/usr/include/openssl/ec.h" 3 4
int EC_GROUP_set_curve_GFp(EC_GROUP *group, const BIGNUM *p, const BIGNUM *a,
                           const BIGNUM *b, BN_CTX *ctx);
# 308 "/usr/include/openssl/ec.h" 3 4
int EC_GROUP_get_curve_GFp(const EC_GROUP *group, BIGNUM *p, BIGNUM *a,
                           BIGNUM *b, BN_CTX *ctx);
# 320 "/usr/include/openssl/ec.h" 3 4
int EC_GROUP_set_curve_GF2m(EC_GROUP *group, const BIGNUM *p, const BIGNUM *a,
                            const BIGNUM *b, BN_CTX *ctx);
# 331 "/usr/include/openssl/ec.h" 3 4
int EC_GROUP_get_curve_GF2m(const EC_GROUP *group, BIGNUM *p, BIGNUM *a,
                            BIGNUM *b, BN_CTX *ctx);





int EC_GROUP_get_degree(const EC_GROUP *group);






int EC_GROUP_check(const EC_GROUP *group, BN_CTX *ctx);






int EC_GROUP_check_discriminant(const EC_GROUP *group, BN_CTX *ctx);







int EC_GROUP_cmp(const EC_GROUP *a, const EC_GROUP *b, BN_CTX *ctx);
# 375 "/usr/include/openssl/ec.h" 3 4
EC_GROUP *EC_GROUP_new_curve_GFp(const BIGNUM *p, const BIGNUM *a,
                                 const BIGNUM *b, BN_CTX *ctx);
# 386 "/usr/include/openssl/ec.h" 3 4
EC_GROUP *EC_GROUP_new_curve_GF2m(const BIGNUM *p, const BIGNUM *a,
                                  const BIGNUM *b, BN_CTX *ctx);






EC_GROUP *EC_GROUP_new_by_curve_name(int nid);





typedef struct {
    int nid;
    const char *comment;
} EC_builtin_curve;







size_t EC_get_builtin_curves(EC_builtin_curve *r, size_t nitems);

const char *EC_curve_nid2nist(int nid);
int EC_curve_nist2nid(const char *name);
# 424 "/usr/include/openssl/ec.h" 3 4
EC_POINT *EC_POINT_new(const EC_GROUP *group);




void EC_POINT_free(EC_POINT *point);




void EC_POINT_clear_free(EC_POINT *point);






int EC_POINT_copy(EC_POINT *dst, const EC_POINT *src);







EC_POINT *EC_POINT_dup(const EC_POINT *src, const EC_GROUP *group);





const EC_METHOD *EC_POINT_method_of(const EC_POINT *point);






int EC_POINT_set_to_infinity(const EC_GROUP *group, EC_POINT *point);
# 473 "/usr/include/openssl/ec.h" 3 4
int EC_POINT_set_Jprojective_coordinates_GFp(const EC_GROUP *group,
                                             EC_POINT *p, const BIGNUM *x,
                                             const BIGNUM *y, const BIGNUM *z,
                                             BN_CTX *ctx);
# 487 "/usr/include/openssl/ec.h" 3 4
int EC_POINT_get_Jprojective_coordinates_GFp(const EC_GROUP *group,
                                             const EC_POINT *p, BIGNUM *x,
                                             BIGNUM *y, BIGNUM *z,
                                             BN_CTX *ctx);
# 500 "/usr/include/openssl/ec.h" 3 4
int EC_POINT_set_affine_coordinates_GFp(const EC_GROUP *group, EC_POINT *p,
                                        const BIGNUM *x, const BIGNUM *y,
                                        BN_CTX *ctx);
# 512 "/usr/include/openssl/ec.h" 3 4
int EC_POINT_get_affine_coordinates_GFp(const EC_GROUP *group,
                                        const EC_POINT *p, BIGNUM *x,
                                        BIGNUM *y, BN_CTX *ctx);
# 524 "/usr/include/openssl/ec.h" 3 4
int EC_POINT_set_compressed_coordinates_GFp(const EC_GROUP *group,
                                            EC_POINT *p, const BIGNUM *x,
                                            int y_bit, BN_CTX *ctx);
# 536 "/usr/include/openssl/ec.h" 3 4
int EC_POINT_set_affine_coordinates_GF2m(const EC_GROUP *group, EC_POINT *p,
                                         const BIGNUM *x, const BIGNUM *y,
                                         BN_CTX *ctx);
# 548 "/usr/include/openssl/ec.h" 3 4
int EC_POINT_get_affine_coordinates_GF2m(const EC_GROUP *group,
                                         const EC_POINT *p, BIGNUM *x,
                                         BIGNUM *y, BN_CTX *ctx);
# 560 "/usr/include/openssl/ec.h" 3 4
int EC_POINT_set_compressed_coordinates_GF2m(const EC_GROUP *group,
                                             EC_POINT *p, const BIGNUM *x,
                                             int y_bit, BN_CTX *ctx);
# 574 "/usr/include/openssl/ec.h" 3 4
size_t EC_POINT_point2oct(const EC_GROUP *group, const EC_POINT *p,
                          point_conversion_form_t form,
                          unsigned char *buf, size_t len, BN_CTX *ctx);
# 586 "/usr/include/openssl/ec.h" 3 4
int EC_POINT_oct2point(const EC_GROUP *group, EC_POINT *p,
                       const unsigned char *buf, size_t len, BN_CTX *ctx);


BIGNUM *EC_POINT_point2bn(const EC_GROUP *, const EC_POINT *,
                          point_conversion_form_t form, BIGNUM *, BN_CTX *);
EC_POINT *EC_POINT_bn2point(const EC_GROUP *, const BIGNUM *,
                            EC_POINT *, BN_CTX *);
char *EC_POINT_point2hex(const EC_GROUP *, const EC_POINT *,
                         point_conversion_form_t form, BN_CTX *);
EC_POINT *EC_POINT_hex2point(const EC_GROUP *, const char *,
                             EC_POINT *, BN_CTX *);
# 611 "/usr/include/openssl/ec.h" 3 4
int EC_POINT_add(const EC_GROUP *group, EC_POINT *r, const EC_POINT *a,
                 const EC_POINT *b, BN_CTX *ctx);
# 621 "/usr/include/openssl/ec.h" 3 4
int EC_POINT_dbl(const EC_GROUP *group, EC_POINT *r, const EC_POINT *a,
                 BN_CTX *ctx);







int EC_POINT_invert(const EC_GROUP *group, EC_POINT *a, BN_CTX *ctx);






int EC_POINT_is_at_infinity(const EC_GROUP *group, const EC_POINT *p);







int EC_POINT_is_on_curve(const EC_GROUP *group, const EC_POINT *point,
                         BN_CTX *ctx);
# 655 "/usr/include/openssl/ec.h" 3 4
int EC_POINT_cmp(const EC_GROUP *group, const EC_POINT *a, const EC_POINT *b,
                 BN_CTX *ctx);

int EC_POINT_make_affine(const EC_GROUP *group, EC_POINT *point, BN_CTX *ctx);
int EC_POINTs_make_affine(const EC_GROUP *group, size_t num,
                          EC_POINT *points[], BN_CTX *ctx);
# 672 "/usr/include/openssl/ec.h" 3 4
int EC_POINTs_mul(const EC_GROUP *group, EC_POINT *r, const BIGNUM *n,
                  size_t num, const EC_POINT *p[], const BIGNUM *m[],
                  BN_CTX *ctx);
# 685 "/usr/include/openssl/ec.h" 3 4
int EC_POINT_mul(const EC_GROUP *group, EC_POINT *r, const BIGNUM *n,
                 const EC_POINT *q, const BIGNUM *m, BN_CTX *ctx);






int EC_GROUP_precompute_mult(EC_GROUP *group, BN_CTX *ctx);





int EC_GROUP_have_precompute_mult(const EC_GROUP *group);
# 709 "/usr/include/openssl/ec.h" 3 4
int EC_GROUP_get_basis_type(const EC_GROUP *);

int EC_GROUP_get_trinomial_basis(const EC_GROUP *, unsigned int *k);
int EC_GROUP_get_pentanomial_basis(const EC_GROUP *, unsigned int *k1,
                                   unsigned int *k2, unsigned int *k3);




typedef struct ecpk_parameters_st ECPKPARAMETERS;

EC_GROUP *d2i_ECPKParameters(EC_GROUP **, const unsigned char **in, long len);
int i2d_ECPKParameters(const EC_GROUP *, unsigned char **out);
# 731 "/usr/include/openssl/ec.h" 3 4
int ECPKParameters_print(BIO *bp, const EC_GROUP *x, int off);


int ECPKParameters_print_fp(FILE *fp, const EC_GROUP *x, int off);






typedef struct ec_key_st EC_KEY;
# 754 "/usr/include/openssl/ec.h" 3 4
EC_KEY *EC_KEY_new(void);

int EC_KEY_get_flags(const EC_KEY *key);

void EC_KEY_set_flags(EC_KEY *key, int flags);

void EC_KEY_clear_flags(EC_KEY *key, int flags);






EC_KEY *EC_KEY_new_by_curve_name(int nid);




void EC_KEY_free(EC_KEY *key);






EC_KEY *EC_KEY_copy(EC_KEY *dst, const EC_KEY *src);





EC_KEY *EC_KEY_dup(const EC_KEY *src);





int EC_KEY_up_ref(EC_KEY *key);





const EC_GROUP *EC_KEY_get0_group(const EC_KEY *key);







int EC_KEY_set_group(EC_KEY *key, const EC_GROUP *group);





const BIGNUM *EC_KEY_get0_private_key(const EC_KEY *key);







int EC_KEY_set_private_key(EC_KEY *key, const BIGNUM *prv);





const EC_POINT *EC_KEY_get0_public_key(const EC_KEY *key);







int EC_KEY_set_public_key(EC_KEY *key, const EC_POINT *pub);

unsigned EC_KEY_get_enc_flags(const EC_KEY *key);
void EC_KEY_set_enc_flags(EC_KEY *eckey, unsigned int flags);
point_conversion_form_t EC_KEY_get_conv_form(const EC_KEY *key);
void EC_KEY_set_conv_form(EC_KEY *eckey, point_conversion_form_t cform);

void *EC_KEY_get_key_method_data(EC_KEY *key,
                                 void *(*dup_func) (void *),
                                 void (*free_func) (void *),
                                 void (*clear_free_func) (void *));
# 852 "/usr/include/openssl/ec.h" 3 4
void *EC_KEY_insert_key_method_data(EC_KEY *key, void *data,
                                    void *(*dup_func) (void *),
                                    void (*free_func) (void *),
                                    void (*clear_free_func) (void *));

void EC_KEY_set_asn1_flag(EC_KEY *eckey, int asn1_flag);







int EC_KEY_precompute_mult(EC_KEY *key, BN_CTX *ctx);





int EC_KEY_generate_key(EC_KEY *key);





int EC_KEY_check_key(const EC_KEY *key);
# 886 "/usr/include/openssl/ec.h" 3 4
int EC_KEY_set_public_key_affine_coordinates(EC_KEY *key, BIGNUM *x,
                                             BIGNUM *y);
# 899 "/usr/include/openssl/ec.h" 3 4
EC_KEY *d2i_ECPrivateKey(EC_KEY **key, const unsigned char **in, long len);







int i2d_ECPrivateKey(EC_KEY *key, unsigned char **out);
# 920 "/usr/include/openssl/ec.h" 3 4
EC_KEY *d2i_ECParameters(EC_KEY **key, const unsigned char **in, long len);







int i2d_ECParameters(EC_KEY *key, unsigned char **out);
# 942 "/usr/include/openssl/ec.h" 3 4
EC_KEY *o2i_ECPublicKey(EC_KEY **key, const unsigned char **in, long len);







int i2o_ECPublicKey(EC_KEY *key, unsigned char **out);







int ECParameters_print(BIO *bp, const EC_KEY *key);







int EC_KEY_print(BIO *bp, const EC_KEY *key, int off);
# 975 "/usr/include/openssl/ec.h" 3 4
int ECParameters_print_fp(FILE *fp, const EC_KEY *key);







int EC_KEY_print_fp(FILE *fp, const EC_KEY *key, int off);
# 1076 "/usr/include/openssl/ec.h" 3 4
void ERR_load_EC_strings(void);
# 84 "/usr/include/openssl/x509.h" 2 3 4



# 1 "/usr/include/openssl/ecdsa.h" 1 3 4
# 62 "/usr/include/openssl/ecdsa.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/openssl/opensslconf.h" 1 3 4
# 63 "/usr/include/openssl/ecdsa.h" 2 3 4
# 78 "/usr/include/openssl/ecdsa.h" 3 4
typedef struct ECDSA_SIG_st {
    BIGNUM *r;
    BIGNUM *s;
} ECDSA_SIG;




ECDSA_SIG *ECDSA_SIG_new(void);




void ECDSA_SIG_free(ECDSA_SIG *sig);







int i2d_ECDSA_SIG(const ECDSA_SIG *sig, unsigned char **pp);
# 108 "/usr/include/openssl/ecdsa.h" 3 4
ECDSA_SIG *d2i_ECDSA_SIG(ECDSA_SIG **sig, const unsigned char **pp, long len);
# 117 "/usr/include/openssl/ecdsa.h" 3 4
ECDSA_SIG *ECDSA_do_sign(const unsigned char *dgst, int dgst_len,
                         EC_KEY *eckey);
# 130 "/usr/include/openssl/ecdsa.h" 3 4
ECDSA_SIG *ECDSA_do_sign_ex(const unsigned char *dgst, int dgstlen,
                            const BIGNUM *kinv, const BIGNUM *rp,
                            EC_KEY *eckey);
# 143 "/usr/include/openssl/ecdsa.h" 3 4
int ECDSA_do_verify(const unsigned char *dgst, int dgst_len,
                    const ECDSA_SIG *sig, EC_KEY *eckey);

const ECDSA_METHOD *ECDSA_OpenSSL(void);




void ECDSA_set_default_method(const ECDSA_METHOD *meth);




const ECDSA_METHOD *ECDSA_get_default_method(void);






int ECDSA_set_method(EC_KEY *eckey, const ECDSA_METHOD *meth);





int ECDSA_size(const EC_KEY *eckey);
# 178 "/usr/include/openssl/ecdsa.h" 3 4
int ECDSA_sign_setup(EC_KEY *eckey, BN_CTX *ctx, BIGNUM **kinv, BIGNUM **rp);
# 190 "/usr/include/openssl/ecdsa.h" 3 4
int ECDSA_sign(int type, const unsigned char *dgst, int dgstlen,
               unsigned char *sig, unsigned int *siglen, EC_KEY *eckey);
# 206 "/usr/include/openssl/ecdsa.h" 3 4
int ECDSA_sign_ex(int type, const unsigned char *dgst, int dgstlen,
                  unsigned char *sig, unsigned int *siglen,
                  const BIGNUM *kinv, const BIGNUM *rp, EC_KEY *eckey);
# 221 "/usr/include/openssl/ecdsa.h" 3 4
int ECDSA_verify(int type, const unsigned char *dgst, int dgstlen,
                 const unsigned char *sig, int siglen, EC_KEY *eckey);


int ECDSA_get_ex_new_index(long argl, void *argp, CRYPTO_EX_new
                           *new_func, CRYPTO_EX_dup *dup_func,
                           CRYPTO_EX_free *free_func);
int ECDSA_set_ex_data(EC_KEY *d, int idx, void *arg);
void *ECDSA_get_ex_data(EC_KEY *d, int idx);






ECDSA_METHOD *ECDSA_METHOD_new(const ECDSA_METHOD *ecdsa_method);




void ECDSA_METHOD_free(ECDSA_METHOD *ecdsa_method);






void ECDSA_METHOD_set_app_data(ECDSA_METHOD *ecdsa_method, void *app);






void *ECDSA_METHOD_get_app_data(ECDSA_METHOD *ecdsa_method);






void ECDSA_METHOD_set_sign(ECDSA_METHOD *ecdsa_method,
                           ECDSA_SIG *(*ecdsa_do_sign) (const unsigned char
                                                        *dgst, int dgst_len,
                                                        const BIGNUM *inv,
                                                        const BIGNUM *rp,
                                                        EC_KEY *eckey));






void ECDSA_METHOD_set_sign_setup(ECDSA_METHOD *ecdsa_method,
                                 int (*ecdsa_sign_setup) (EC_KEY *eckey,
                                                          BN_CTX *ctx,
                                                          BIGNUM **kinv,
                                                          BIGNUM **r));






void ECDSA_METHOD_set_verify(ECDSA_METHOD *ecdsa_method,
                             int (*ecdsa_do_verify) (const unsigned char
                                                     *dgst, int dgst_len,
                                                     const ECDSA_SIG *sig,
                                                     EC_KEY *eckey));

void ECDSA_METHOD_set_flags(ECDSA_METHOD *ecdsa_method, int flags);






void ECDSA_METHOD_set_name(ECDSA_METHOD *ecdsa_method, char *name);
# 310 "/usr/include/openssl/ecdsa.h" 3 4
void ERR_load_ECDSA_strings(void);
# 88 "/usr/include/openssl/x509.h" 2 3 4



# 1 "/usr/include/openssl/ecdh.h" 1 3 4
# 72 "/usr/include/openssl/ecdh.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/openssl/opensslconf.h" 1 3 4
# 73 "/usr/include/openssl/ecdh.h" 2 3 4
# 90 "/usr/include/openssl/ecdh.h" 3 4
const ECDH_METHOD *ECDH_OpenSSL(void);

void ECDH_set_default_method(const ECDH_METHOD *);
const ECDH_METHOD *ECDH_get_default_method(void);
int ECDH_set_method(EC_KEY *, const ECDH_METHOD *);

int ECDH_compute_key(void *out, size_t outlen, const EC_POINT *pub_key,
                     EC_KEY *ecdh, void *(*KDF) (const void *in, size_t inlen,
                                                 void *out, size_t *outlen));

int ECDH_get_ex_new_index(long argl, void *argp, CRYPTO_EX_new
                          *new_func, CRYPTO_EX_dup *dup_func,
                          CRYPTO_EX_free *free_func);
int ECDH_set_ex_data(EC_KEY *d, int idx, void *arg);
void *ECDH_get_ex_data(EC_KEY *d, int idx);

int ECDH_KDF_X9_62(unsigned char *out, size_t outlen,
                   const unsigned char *Z, size_t Zlen,
                   const unsigned char *sinfo, size_t sinfolen,
                   const EVP_MD *md);






void ERR_load_ECDH_strings(void);
# 92 "/usr/include/openssl/x509.h" 2 3 4




# 1 "/usr/include/openssl/rsa.h" 1 3 4
# 85 "/usr/include/openssl/rsa.h" 3 4
struct rsa_meth_st {
    const char *name;
    int (*rsa_pub_enc) (int flen, const unsigned char *from,
                        unsigned char *to, RSA *rsa, int padding);
    int (*rsa_pub_dec) (int flen, const unsigned char *from,
                        unsigned char *to, RSA *rsa, int padding);
    int (*rsa_priv_enc) (int flen, const unsigned char *from,
                         unsigned char *to, RSA *rsa, int padding);
    int (*rsa_priv_dec) (int flen, const unsigned char *from,
                         unsigned char *to, RSA *rsa, int padding);

    int (*rsa_mod_exp) (BIGNUM *r0, const BIGNUM *I, RSA *rsa, BN_CTX *ctx);

    int (*bn_mod_exp) (BIGNUM *r, const BIGNUM *a, const BIGNUM *p,
                       const BIGNUM *m, BN_CTX *ctx, BN_MONT_CTX *m_ctx);

    int (*init) (RSA *rsa);

    int (*finish) (RSA *rsa);

    int flags;

    char *app_data;
# 116 "/usr/include/openssl/rsa.h" 3 4
    int (*rsa_sign) (int type,
                     const unsigned char *m, unsigned int m_length,
                     unsigned char *sigret, unsigned int *siglen,
                     const RSA *rsa);
    int (*rsa_verify) (int dtype, const unsigned char *m,
                       unsigned int m_length, const unsigned char *sigbuf,
                       unsigned int siglen, const RSA *rsa);






    int (*rsa_keygen) (RSA *rsa, int bits, BIGNUM *e, BN_GENCB *cb);
};

struct rsa_st {




    int pad;
    long version;
    const RSA_METHOD *meth;

    ENGINE *engine;
    BIGNUM *n;
    BIGNUM *e;
    BIGNUM *d;
    BIGNUM *p;
    BIGNUM *q;
    BIGNUM *dmp1;
    BIGNUM *dmq1;
    BIGNUM *iqmp;

    CRYPTO_EX_DATA ex_data;
    int references;
    int flags;

    BN_MONT_CTX *_method_mod_n;
    BN_MONT_CTX *_method_mod_p;
    BN_MONT_CTX *_method_mod_q;




    char *bignum_data;
    BN_BLINDING *blinding;
    BN_BLINDING *mt_blinding;
};
# 320 "/usr/include/openssl/rsa.h" 3 4
RSA *RSA_new(void);
RSA *RSA_new_method(ENGINE *engine);
int RSA_size(const RSA *rsa);



RSA *RSA_generate_key(int bits, unsigned long e, void
                       (*callback) (int, int, void *), void *cb_arg);



int RSA_generate_key_ex(RSA *rsa, int bits, BIGNUM *e, BN_GENCB *cb);

int RSA_check_key(const RSA *);

int RSA_public_encrypt(int flen, const unsigned char *from,
                       unsigned char *to, RSA *rsa, int padding);
int RSA_private_encrypt(int flen, const unsigned char *from,
                        unsigned char *to, RSA *rsa, int padding);
int RSA_public_decrypt(int flen, const unsigned char *from,
                       unsigned char *to, RSA *rsa, int padding);
int RSA_private_decrypt(int flen, const unsigned char *from,
                        unsigned char *to, RSA *rsa, int padding);
void RSA_free(RSA *r);

int RSA_up_ref(RSA *r);

int RSA_flags(const RSA *r);

void RSA_set_default_method(const RSA_METHOD *meth);
const RSA_METHOD *RSA_get_default_method(void);
const RSA_METHOD *RSA_get_method(const RSA *rsa);
int RSA_set_method(RSA *rsa, const RSA_METHOD *meth);


int RSA_memory_lock(RSA *r);


const RSA_METHOD *RSA_PKCS1_SSLeay(void);

const RSA_METHOD *RSA_null_method(void);

RSA *d2i_RSAPublicKey(RSA **a, const unsigned char **in, long len); int i2d_RSAPublicKey(const RSA *a, unsigned char **out); extern const ASN1_ITEM RSAPublicKey_it;
RSA *d2i_RSAPrivateKey(RSA **a, const unsigned char **in, long len); int i2d_RSAPrivateKey(const RSA *a, unsigned char **out); extern const ASN1_ITEM RSAPrivateKey_it;

typedef struct rsa_pss_params_st {
    X509_ALGOR *hashAlgorithm;
    X509_ALGOR *maskGenAlgorithm;
    ASN1_INTEGER *saltLength;
    ASN1_INTEGER *trailerField;
} RSA_PSS_PARAMS;

RSA_PSS_PARAMS *RSA_PSS_PARAMS_new(void); void RSA_PSS_PARAMS_free(RSA_PSS_PARAMS *a); RSA_PSS_PARAMS *d2i_RSA_PSS_PARAMS(RSA_PSS_PARAMS **a, const unsigned char **in, long len); int i2d_RSA_PSS_PARAMS(RSA_PSS_PARAMS *a, unsigned char **out); extern const ASN1_ITEM RSA_PSS_PARAMS_it;

typedef struct rsa_oaep_params_st {
    X509_ALGOR *hashFunc;
    X509_ALGOR *maskGenFunc;
    X509_ALGOR *pSourceFunc;
} RSA_OAEP_PARAMS;

RSA_OAEP_PARAMS *RSA_OAEP_PARAMS_new(void); void RSA_OAEP_PARAMS_free(RSA_OAEP_PARAMS *a); RSA_OAEP_PARAMS *d2i_RSA_OAEP_PARAMS(RSA_OAEP_PARAMS **a, const unsigned char **in, long len); int i2d_RSA_OAEP_PARAMS(RSA_OAEP_PARAMS *a, unsigned char **out); extern const ASN1_ITEM RSA_OAEP_PARAMS_it;


int RSA_print_fp(FILE *fp, const RSA *r, int offset);



int RSA_print(BIO *bp, const RSA *r, int offset);



int i2d_RSA_NET(const RSA *a, unsigned char **pp,
                int (*cb) (char *buf, int len, const char *prompt,
                           int verify), int sgckey);
RSA *d2i_RSA_NET(RSA **a, const unsigned char **pp, long length,
                 int (*cb) (char *buf, int len, const char *prompt,
                            int verify), int sgckey);

int i2d_Netscape_RSA(const RSA *a, unsigned char **pp,
                     int (*cb) (char *buf, int len, const char *prompt,
                                int verify));
RSA *d2i_Netscape_RSA(RSA **a, const unsigned char **pp, long length,
                      int (*cb) (char *buf, int len, const char *prompt,
                                 int verify));






int RSA_sign(int type, const unsigned char *m, unsigned int m_length,
             unsigned char *sigret, unsigned int *siglen, RSA *rsa);
int RSA_verify(int type, const unsigned char *m, unsigned int m_length,
               const unsigned char *sigbuf, unsigned int siglen, RSA *rsa);





int RSA_sign_ASN1_OCTET_STRING(int type,
                               const unsigned char *m, unsigned int m_length,
                               unsigned char *sigret, unsigned int *siglen,
                               RSA *rsa);
int RSA_verify_ASN1_OCTET_STRING(int type, const unsigned char *m,
                                 unsigned int m_length, unsigned char *sigbuf,
                                 unsigned int siglen, RSA *rsa);

int RSA_blinding_on(RSA *rsa, BN_CTX *ctx);
void RSA_blinding_off(RSA *rsa);
BN_BLINDING *RSA_setup_blinding(RSA *rsa, BN_CTX *ctx);

int RSA_padding_add_PKCS1_type_1(unsigned char *to, int tlen,
                                 const unsigned char *f, int fl);
int RSA_padding_check_PKCS1_type_1(unsigned char *to, int tlen,
                                   const unsigned char *f, int fl,
                                   int rsa_len);
int RSA_padding_add_PKCS1_type_2(unsigned char *to, int tlen,
                                 const unsigned char *f, int fl);
int RSA_padding_check_PKCS1_type_2(unsigned char *to, int tlen,
                                   const unsigned char *f, int fl,
                                   int rsa_len);
int PKCS1_MGF1(unsigned char *mask, long len, const unsigned char *seed,
               long seedlen, const EVP_MD *dgst);
int RSA_padding_add_PKCS1_OAEP(unsigned char *to, int tlen,
                               const unsigned char *f, int fl,
                               const unsigned char *p, int pl);
int RSA_padding_check_PKCS1_OAEP(unsigned char *to, int tlen,
                                 const unsigned char *f, int fl, int rsa_len,
                                 const unsigned char *p, int pl);
int RSA_padding_add_PKCS1_OAEP_mgf1(unsigned char *to, int tlen,
                                    const unsigned char *from, int flen,
                                    const unsigned char *param, int plen,
                                    const EVP_MD *md, const EVP_MD *mgf1md);
int RSA_padding_check_PKCS1_OAEP_mgf1(unsigned char *to, int tlen,
                                      const unsigned char *from, int flen,
                                      int num, const unsigned char *param,
                                      int plen, const EVP_MD *md,
                                      const EVP_MD *mgf1md);
int RSA_padding_add_SSLv23(unsigned char *to, int tlen,
                           const unsigned char *f, int fl);
int RSA_padding_check_SSLv23(unsigned char *to, int tlen,
                             const unsigned char *f, int fl, int rsa_len);
int RSA_padding_add_none(unsigned char *to, int tlen, const unsigned char *f,
                         int fl);
int RSA_padding_check_none(unsigned char *to, int tlen,
                           const unsigned char *f, int fl, int rsa_len);
int RSA_padding_add_X931(unsigned char *to, int tlen, const unsigned char *f,
                         int fl);
int RSA_padding_check_X931(unsigned char *to, int tlen,
                           const unsigned char *f, int fl, int rsa_len);
int RSA_X931_hash_id(int nid);

int RSA_verify_PKCS1_PSS(RSA *rsa, const unsigned char *mHash,
                         const EVP_MD *Hash, const unsigned char *EM,
                         int sLen);
int RSA_padding_add_PKCS1_PSS(RSA *rsa, unsigned char *EM,
                              const unsigned char *mHash, const EVP_MD *Hash,
                              int sLen);

int RSA_verify_PKCS1_PSS_mgf1(RSA *rsa, const unsigned char *mHash,
                              const EVP_MD *Hash, const EVP_MD *mgf1Hash,
                              const unsigned char *EM, int sLen);

int RSA_padding_add_PKCS1_PSS_mgf1(RSA *rsa, unsigned char *EM,
                                   const unsigned char *mHash,
                                   const EVP_MD *Hash, const EVP_MD *mgf1Hash,
                                   int sLen);

int RSA_get_ex_new_index(long argl, void *argp, CRYPTO_EX_new *new_func,
                         CRYPTO_EX_dup *dup_func, CRYPTO_EX_free *free_func);
int RSA_set_ex_data(RSA *r, int idx, void *arg);
void *RSA_get_ex_data(const RSA *r, int idx);

RSA *RSAPublicKey_dup(RSA *rsa);
RSA *RSAPrivateKey_dup(RSA *rsa);
# 523 "/usr/include/openssl/rsa.h" 3 4
void ERR_load_RSA_strings(void);
# 97 "/usr/include/openssl/x509.h" 2 3 4


# 1 "/usr/include/openssl/dsa.h" 1 3 4
# 68 "/usr/include/openssl/dsa.h" 3 4
# 1 "/usr/include/openssl/e_os2.h" 1 3 4
# 56 "/usr/include/openssl/e_os2.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/openssl/opensslconf.h" 1 3 4
# 57 "/usr/include/openssl/e_os2.h" 2 3 4
# 69 "/usr/include/openssl/dsa.h" 2 3 4
# 83 "/usr/include/openssl/dsa.h" 3 4
# 1 "/usr/include/openssl/dh.h" 1 3 4
# 62 "/usr/include/openssl/dh.h" 3 4
# 1 "/usr/include/openssl/e_os2.h" 1 3 4
# 56 "/usr/include/openssl/e_os2.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/openssl/opensslconf.h" 1 3 4
# 57 "/usr/include/openssl/e_os2.h" 2 3 4
# 63 "/usr/include/openssl/dh.h" 2 3 4
# 117 "/usr/include/openssl/dh.h" 3 4
struct dh_method {
    const char *name;

    int (*generate_key) (DH *dh);
    int (*compute_key) (unsigned char *key, const BIGNUM *pub_key, DH *dh);

    int (*bn_mod_exp) (const DH *dh, BIGNUM *r, const BIGNUM *a,
                       const BIGNUM *p, const BIGNUM *m, BN_CTX *ctx,
                       BN_MONT_CTX *m_ctx);
    int (*init) (DH *dh);
    int (*finish) (DH *dh);
    int flags;
    char *app_data;

    int (*generate_params) (DH *dh, int prime_len, int generator,
                            BN_GENCB *cb);
};

struct dh_st {




    int pad;
    int version;
    BIGNUM *p;
    BIGNUM *g;
    long length;
    BIGNUM *pub_key;
    BIGNUM *priv_key;
    int flags;
    BN_MONT_CTX *method_mont_p;

    BIGNUM *q;
    BIGNUM *j;
    unsigned char *seed;
    int seedlen;
    BIGNUM *counter;
    int references;
    CRYPTO_EX_DATA ex_data;
    const DH_METHOD *meth;
    ENGINE *engine;
};
# 192 "/usr/include/openssl/dh.h" 3 4
DH *DHparams_dup(DH *);

const DH_METHOD *DH_OpenSSL(void);

void DH_set_default_method(const DH_METHOD *meth);
const DH_METHOD *DH_get_default_method(void);
int DH_set_method(DH *dh, const DH_METHOD *meth);
DH *DH_new_method(ENGINE *engine);

DH *DH_new(void);
void DH_free(DH *dh);
int DH_up_ref(DH *dh);
int DH_size(const DH *dh);
int DH_get_ex_new_index(long argl, void *argp, CRYPTO_EX_new *new_func,
                        CRYPTO_EX_dup *dup_func, CRYPTO_EX_free *free_func);
int DH_set_ex_data(DH *d, int idx, void *arg);
void *DH_get_ex_data(DH *d, int idx);



DH *DH_generate_parameters(int prime_len, int generator,
                           void (*callback) (int, int, void *), void *cb_arg);



int DH_generate_parameters_ex(DH *dh, int prime_len, int generator,
                              BN_GENCB *cb);

int DH_check(const DH *dh, int *codes);
int DH_check_pub_key(const DH *dh, const BIGNUM *pub_key, int *codes);
int DH_generate_key(DH *dh);
int DH_compute_key(unsigned char *key, const BIGNUM *pub_key, DH *dh);
int DH_compute_key_padded(unsigned char *key, const BIGNUM *pub_key, DH *dh);
DH *d2i_DHparams(DH **a, const unsigned char **pp, long length);
int i2d_DHparams(const DH *a, unsigned char **pp);
DH *d2i_DHxparams(DH **a, const unsigned char **pp, long length);
int i2d_DHxparams(const DH *a, unsigned char **pp);

int DHparams_print_fp(FILE *fp, const DH *x);


int DHparams_print(BIO *bp, const DH *x);





DH *DH_get_1024_160(void);
DH *DH_get_2048_224(void);
DH *DH_get_2048_256(void);


int DH_KDF_X9_42(unsigned char *out, size_t outlen,
                 const unsigned char *Z, size_t Zlen,
                 ASN1_OBJECT *key_oid,
                 const unsigned char *ukm, size_t ukmlen, const EVP_MD *md);
# 347 "/usr/include/openssl/dh.h" 3 4
void ERR_load_DH_strings(void);
# 84 "/usr/include/openssl/dsa.h" 2 3 4
# 124 "/usr/include/openssl/dsa.h" 3 4
typedef struct DSA_SIG_st {
    BIGNUM *r;
    BIGNUM *s;
} DSA_SIG;

struct dsa_method {
    const char *name;
    DSA_SIG *(*dsa_do_sign) (const unsigned char *dgst, int dlen, DSA *dsa);
    int (*dsa_sign_setup) (DSA *dsa, BN_CTX *ctx_in, BIGNUM **kinvp,
                           BIGNUM **rp);
    int (*dsa_do_verify) (const unsigned char *dgst, int dgst_len,
                          DSA_SIG *sig, DSA *dsa);
    int (*dsa_mod_exp) (DSA *dsa, BIGNUM *rr, BIGNUM *a1, BIGNUM *p1,
                        BIGNUM *a2, BIGNUM *p2, BIGNUM *m, BN_CTX *ctx,
                        BN_MONT_CTX *in_mont);

    int (*bn_mod_exp) (DSA *dsa, BIGNUM *r, BIGNUM *a, const BIGNUM *p,
                       const BIGNUM *m, BN_CTX *ctx, BN_MONT_CTX *m_ctx);
    int (*init) (DSA *dsa);
    int (*finish) (DSA *dsa);
    int flags;
    char *app_data;

    int (*dsa_paramgen) (DSA *dsa, int bits,
                         const unsigned char *seed, int seed_len,
                         int *counter_ret, unsigned long *h_ret,
                         BN_GENCB *cb);

    int (*dsa_keygen) (DSA *dsa);
};

struct dsa_st {




    int pad;
    long version;
    int write_params;
    BIGNUM *p;
    BIGNUM *q;
    BIGNUM *g;
    BIGNUM *pub_key;
    BIGNUM *priv_key;
    BIGNUM *kinv;
    BIGNUM *r;
    int flags;

    BN_MONT_CTX *method_mont_p;
    int references;
    CRYPTO_EX_DATA ex_data;
    const DSA_METHOD *meth;

    ENGINE *engine;
};
# 187 "/usr/include/openssl/dsa.h" 3 4
DSA *DSAparams_dup(DSA *x);
DSA_SIG *DSA_SIG_new(void);
void DSA_SIG_free(DSA_SIG *a);
int i2d_DSA_SIG(const DSA_SIG *a, unsigned char **pp);
DSA_SIG *d2i_DSA_SIG(DSA_SIG **v, const unsigned char **pp, long length);

DSA_SIG *DSA_do_sign(const unsigned char *dgst, int dlen, DSA *dsa);
int DSA_do_verify(const unsigned char *dgst, int dgst_len,
                  DSA_SIG *sig, DSA *dsa);

const DSA_METHOD *DSA_OpenSSL(void);

void DSA_set_default_method(const DSA_METHOD *);
const DSA_METHOD *DSA_get_default_method(void);
int DSA_set_method(DSA *dsa, const DSA_METHOD *);

DSA *DSA_new(void);
DSA *DSA_new_method(ENGINE *engine);
void DSA_free(DSA *r);

int DSA_up_ref(DSA *r);
int DSA_size(const DSA *);

int DSA_sign_setup(DSA *dsa, BN_CTX *ctx_in, BIGNUM **kinvp, BIGNUM **rp);
int DSA_sign(int type, const unsigned char *dgst, int dlen,
             unsigned char *sig, unsigned int *siglen, DSA *dsa);
int DSA_verify(int type, const unsigned char *dgst, int dgst_len,
               const unsigned char *sigbuf, int siglen, DSA *dsa);
int DSA_get_ex_new_index(long argl, void *argp, CRYPTO_EX_new *new_func,
                         CRYPTO_EX_dup *dup_func, CRYPTO_EX_free *free_func);
int DSA_set_ex_data(DSA *d, int idx, void *arg);
void *DSA_get_ex_data(DSA *d, int idx);

DSA *d2i_DSAPublicKey(DSA **a, const unsigned char **pp, long length);
DSA *d2i_DSAPrivateKey(DSA **a, const unsigned char **pp, long length);
DSA *d2i_DSAparams(DSA **a, const unsigned char **pp, long length);



DSA *DSA_generate_parameters(int bits,
                             unsigned char *seed, int seed_len,
                             int *counter_ret, unsigned long *h_ret, void
                              (*callback) (int, int, void *), void *cb_arg);



int DSA_generate_parameters_ex(DSA *dsa, int bits,
                               const unsigned char *seed, int seed_len,
                               int *counter_ret, unsigned long *h_ret,
                               BN_GENCB *cb);

int DSA_generate_key(DSA *a);
int i2d_DSAPublicKey(const DSA *a, unsigned char **pp);
int i2d_DSAPrivateKey(const DSA *a, unsigned char **pp);
int i2d_DSAparams(const DSA *a, unsigned char **pp);


int DSAparams_print(BIO *bp, const DSA *x);
int DSA_print(BIO *bp, const DSA *x, int off);


int DSAparams_print_fp(FILE *fp, const DSA *x);
int DSA_print_fp(FILE *bp, const DSA *x, int off);
# 265 "/usr/include/openssl/dsa.h" 3 4
DH *DSA_dup_DH(const DSA *r);
# 281 "/usr/include/openssl/dsa.h" 3 4
void ERR_load_DSA_strings(void);
# 100 "/usr/include/openssl/x509.h" 2 3 4







# 1 "/usr/include/openssl/sha.h" 1 3 4
# 62 "/usr/include/openssl/sha.h" 3 4
# 1 "/usr/include/openssl/e_os2.h" 1 3 4
# 56 "/usr/include/openssl/e_os2.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/openssl/opensslconf.h" 1 3 4
# 57 "/usr/include/openssl/e_os2.h" 2 3 4
# 63 "/usr/include/openssl/sha.h" 2 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" 1 3 4
# 64 "/usr/include/openssl/sha.h" 2 3 4
# 100 "/usr/include/openssl/sha.h" 3 4
typedef struct SHAstate_st {
    unsigned int h0, h1, h2, h3, h4;
    unsigned int Nl, Nh;
    unsigned int data[16];
    unsigned int num;
} SHA_CTX;





int SHA_Init(SHA_CTX *c);
int SHA_Update(SHA_CTX *c, const void *data, size_t len);
int SHA_Final(unsigned char *md, SHA_CTX *c);
unsigned char *SHA(const unsigned char *d, size_t n, unsigned char *md);
void SHA_Transform(SHA_CTX *c, const unsigned char *data);





int SHA1_Init(SHA_CTX *c);
int SHA1_Update(SHA_CTX *c, const void *data, size_t len);
int SHA1_Final(unsigned char *md, SHA_CTX *c);
unsigned char *SHA1(const unsigned char *d, size_t n, unsigned char *md);
void SHA1_Transform(SHA_CTX *c, const unsigned char *data);
# 134 "/usr/include/openssl/sha.h" 3 4
typedef struct SHA256state_st {
    unsigned int h[8];
    unsigned int Nl, Nh;
    unsigned int data[16];
    unsigned int num, md_len;
} SHA256_CTX;






int SHA224_Init(SHA256_CTX *c);
int SHA224_Update(SHA256_CTX *c, const void *data, size_t len);
int SHA224_Final(unsigned char *md, SHA256_CTX *c);
unsigned char *SHA224(const unsigned char *d, size_t n, unsigned char *md);
int SHA256_Init(SHA256_CTX *c);
int SHA256_Update(SHA256_CTX *c, const void *data, size_t len);
int SHA256_Final(unsigned char *md, SHA256_CTX *c);
unsigned char *SHA256(const unsigned char *d, size_t n, unsigned char *md);
void SHA256_Transform(SHA256_CTX *c, const unsigned char *data);
# 183 "/usr/include/openssl/sha.h" 3 4
typedef struct SHA512state_st {
    unsigned long long h[8];
    unsigned long long Nl, Nh;
    union {
        unsigned long long d[16];
        unsigned char p[(16*8)];
    } u;
    unsigned int num, md_len;
} SHA512_CTX;







int SHA384_Init(SHA512_CTX *c);
int SHA384_Update(SHA512_CTX *c, const void *data, size_t len);
int SHA384_Final(unsigned char *md, SHA512_CTX *c);
unsigned char *SHA384(const unsigned char *d, size_t n, unsigned char *md);
int SHA512_Init(SHA512_CTX *c);
int SHA512_Update(SHA512_CTX *c, const void *data, size_t len);
int SHA512_Final(unsigned char *md, SHA512_CTX *c);
unsigned char *SHA512(const unsigned char *d, size_t n, unsigned char *md);
void SHA512_Transform(SHA512_CTX *c, const unsigned char *data);
# 108 "/usr/include/openssl/x509.h" 2 3 4
# 137 "/usr/include/openssl/x509.h" 3 4
typedef struct X509_objects_st {
    int nid;
    int (*a2i) (void);
    int (*i2a) (void);
} X509_OBJECTS;

struct X509_algor_st {
    ASN1_OBJECT *algorithm;
    ASN1_TYPE *parameter;
} ;



typedef struct stack_st_X509_ALGOR X509_ALGORS;

typedef struct X509_val_st {
    ASN1_TIME *notBefore;
    ASN1_TIME *notAfter;
} X509_VAL;

struct X509_pubkey_st {
    X509_ALGOR *algor;
    ASN1_BIT_STRING *public_key;
    EVP_PKEY *pkey;
};

typedef struct X509_sig_st {
    X509_ALGOR *algor;
    ASN1_OCTET_STRING *digest;
} X509_SIG;

typedef struct X509_name_entry_st {
    ASN1_OBJECT *object;
    ASN1_STRING *value;
    int set;
    int size;
} X509_NAME_ENTRY;

struct stack_st_X509_NAME_ENTRY { _STACK stack; };



struct X509_name_st {
    struct stack_st_X509_NAME_ENTRY *entries;
    int modified;

    BUF_MEM *bytes;




    unsigned char *canon_enc;
    int canon_enclen;
} ;

struct stack_st_X509_NAME { _STACK stack; };



typedef struct X509_extension_st {
    ASN1_OBJECT *object;
    ASN1_BOOLEAN critical;
    ASN1_OCTET_STRING *value;
} X509_EXTENSION;

typedef struct stack_st_X509_EXTENSION X509_EXTENSIONS;

struct stack_st_X509_EXTENSION { _STACK stack; };



typedef struct x509_attributes_st {
    ASN1_OBJECT *object;
    int single;

    union {
        char *ptr;


            struct stack_st_ASN1_TYPE *set;


            ASN1_TYPE *single;
    } value;
} X509_ATTRIBUTE;

struct stack_st_X509_ATTRIBUTE { _STACK stack; };


typedef struct X509_req_info_st {
    ASN1_ENCODING enc;
    ASN1_INTEGER *version;
    X509_NAME *subject;
    X509_PUBKEY *pubkey;

    struct stack_st_X509_ATTRIBUTE *attributes;
} X509_REQ_INFO;

typedef struct X509_req_st {
    X509_REQ_INFO *req_info;
    X509_ALGOR *sig_alg;
    ASN1_BIT_STRING *signature;
    int references;
} X509_REQ;

typedef struct x509_cinf_st {
    ASN1_INTEGER *version;
    ASN1_INTEGER *serialNumber;
    X509_ALGOR *signature;
    X509_NAME *issuer;
    X509_VAL *validity;
    X509_NAME *subject;
    X509_PUBKEY *key;
    ASN1_BIT_STRING *issuerUID;
    ASN1_BIT_STRING *subjectUID;
    struct stack_st_X509_EXTENSION *extensions;
    ASN1_ENCODING enc;
} X509_CINF;







typedef struct x509_cert_aux_st {
    struct stack_st_ASN1_OBJECT *trust;
    struct stack_st_ASN1_OBJECT *reject;
    ASN1_UTF8STRING *alias;
    ASN1_OCTET_STRING *keyid;
    struct stack_st_X509_ALGOR *other;
} X509_CERT_AUX;

struct x509_st {
    X509_CINF *cert_info;
    X509_ALGOR *sig_alg;
    ASN1_BIT_STRING *signature;
    int valid;
    int references;
    char *name;
    CRYPTO_EX_DATA ex_data;

    long ex_pathlen;
    long ex_pcpathlen;
    unsigned long ex_flags;
    unsigned long ex_kusage;
    unsigned long ex_xkusage;
    unsigned long ex_nscert;
    ASN1_OCTET_STRING *skid;
    AUTHORITY_KEYID *akid;
    X509_POLICY_CACHE *policy_cache;
    struct stack_st_DIST_POINT *crldp;
    struct stack_st_GENERAL_NAME *altname;
    NAME_CONSTRAINTS *nc;





    unsigned char sha1_hash[20];

    X509_CERT_AUX *aux;
} ;

struct stack_st_X509 { _STACK stack; };




typedef struct x509_trust_st {
    int trust;
    int flags;
    int (*check_trust) (struct x509_trust_st *, X509 *, int);
    char *name;
    int arg1;
    void *arg2;
} X509_TRUST;

struct stack_st_X509_TRUST { _STACK stack; };

typedef struct x509_cert_pair_st {
    X509 *forward;
    X509 *reverse;
} X509_CERT_PAIR;
# 427 "/usr/include/openssl/x509.h" 3 4
struct x509_revoked_st {
    ASN1_INTEGER *serialNumber;
    ASN1_TIME *revocationDate;
    struct stack_st_X509_EXTENSION *extensions;

    struct stack_st_GENERAL_NAME *issuer;

    int reason;
    int sequence;
};

struct stack_st_X509_REVOKED { _STACK stack; };


typedef struct X509_crl_info_st {
    ASN1_INTEGER *version;
    X509_ALGOR *sig_alg;
    X509_NAME *issuer;
    ASN1_TIME *lastUpdate;
    ASN1_TIME *nextUpdate;
    struct stack_st_X509_REVOKED *revoked;
    struct stack_st_X509_EXTENSION *extensions;
    ASN1_ENCODING enc;
} X509_CRL_INFO;

struct X509_crl_st {

    X509_CRL_INFO *crl;
    X509_ALGOR *sig_alg;
    ASN1_BIT_STRING *signature;
    int references;
    int flags;

    AUTHORITY_KEYID *akid;
    ISSUING_DIST_POINT *idp;

    int idp_flags;
    int idp_reasons;

    ASN1_INTEGER *crl_number;
    ASN1_INTEGER *base_crl_number;

    unsigned char sha1_hash[20];

    struct stack_st_GENERAL_NAMES *issuers;
    const X509_CRL_METHOD *meth;
    void *meth_data;
} ;

struct stack_st_X509_CRL { _STACK stack; };


typedef struct private_key_st {
    int version;

    X509_ALGOR *enc_algor;
    ASN1_OCTET_STRING *enc_pkey;

    EVP_PKEY *dec_pkey;

    int key_length;
    char *key_data;
    int key_free;

    EVP_CIPHER_INFO cipher;
    int references;
} X509_PKEY;


typedef struct X509_info_st {
    X509 *x509;
    X509_CRL *crl;
    X509_PKEY *x_pkey;
    EVP_CIPHER_INFO enc_cipher;
    int enc_len;
    char *enc_data;
    int references;
} X509_INFO;

struct stack_st_X509_INFO { _STACK stack; };







typedef struct Netscape_spkac_st {
    X509_PUBKEY *pubkey;
    ASN1_IA5STRING *challenge;
} NETSCAPE_SPKAC;

typedef struct Netscape_spki_st {
    NETSCAPE_SPKAC *spkac;
    X509_ALGOR *sig_algor;
    ASN1_BIT_STRING *signature;
} NETSCAPE_SPKI;


typedef struct Netscape_certificate_sequence {
    ASN1_OBJECT *type;
    struct stack_st_X509 *certs;
} NETSCAPE_CERT_SEQUENCE;
# 540 "/usr/include/openssl/x509.h" 3 4
typedef struct PBEPARAM_st {
    ASN1_OCTET_STRING *salt;
    ASN1_INTEGER *iter;
} PBEPARAM;



typedef struct PBE2PARAM_st {
    X509_ALGOR *keyfunc;
    X509_ALGOR *encryption;
} PBE2PARAM;

typedef struct PBKDF2PARAM_st {

    ASN1_TYPE *salt;
    ASN1_INTEGER *iter;
    ASN1_INTEGER *keylength;
    X509_ALGOR *prf;
} PBKDF2PARAM;



struct pkcs8_priv_key_info_st {

    int broken;





    ASN1_INTEGER *version;
    X509_ALGOR *pkeyalg;

    ASN1_TYPE *pkey;
    struct stack_st_X509_ATTRIBUTE *attributes;
};





# 1 "/usr/include/openssl/x509_vfy.h" 1 3 4
# 70 "/usr/include/openssl/x509_vfy.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/openssl/opensslconf.h" 1 3 4
# 71 "/usr/include/openssl/x509_vfy.h" 2 3 4

# 1 "/usr/include/openssl/lhash.h" 1 3 4
# 66 "/usr/include/openssl/lhash.h" 3 4
# 1 "/usr/include/openssl/e_os2.h" 1 3 4
# 56 "/usr/include/openssl/e_os2.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/openssl/opensslconf.h" 1 3 4
# 57 "/usr/include/openssl/e_os2.h" 2 3 4
# 67 "/usr/include/openssl/lhash.h" 2 3 4
# 79 "/usr/include/openssl/lhash.h" 3 4
typedef struct lhash_node_st {
    void *data;
    struct lhash_node_st *next;

    unsigned long hash;

} LHASH_NODE;

typedef int (*LHASH_COMP_FN_TYPE) (const void *, const void *);
typedef unsigned long (*LHASH_HASH_FN_TYPE) (const void *);
typedef void (*LHASH_DOALL_FN_TYPE) (void *);
typedef void (*LHASH_DOALL_ARG_FN_TYPE) (void *, void *);
# 139 "/usr/include/openssl/lhash.h" 3 4
typedef struct lhash_st {
    LHASH_NODE **b;
    LHASH_COMP_FN_TYPE comp;
    LHASH_HASH_FN_TYPE hash;
    unsigned int num_nodes;
    unsigned int num_alloc_nodes;
    unsigned int p;
    unsigned int pmax;
    unsigned long up_load;
    unsigned long down_load;
    unsigned long num_items;
    unsigned long num_expands;
    unsigned long num_expand_reallocs;
    unsigned long num_contracts;
    unsigned long num_contract_reallocs;
    unsigned long num_hash_calls;
    unsigned long num_comp_calls;
    unsigned long num_insert;
    unsigned long num_replace;
    unsigned long num_delete;
    unsigned long num_no_delete;
    unsigned long num_retrieve;
    unsigned long num_retrieve_miss;
    unsigned long num_hash_comps;
    int error;
} _LHASH;
# 175 "/usr/include/openssl/lhash.h" 3 4
_LHASH *lh_new(LHASH_HASH_FN_TYPE h, LHASH_COMP_FN_TYPE c);
void lh_free(_LHASH *lh);
void *lh_insert(_LHASH *lh, void *data);
void *lh_delete(_LHASH *lh, const void *data);
void *lh_retrieve(_LHASH *lh, const void *data);
void lh_doall(_LHASH *lh, LHASH_DOALL_FN_TYPE func);
void lh_doall_arg(_LHASH *lh, LHASH_DOALL_ARG_FN_TYPE func, void *arg);
unsigned long lh_strhash(const char *c);
unsigned long lh_num_items(const _LHASH *lh);


void lh_stats(const _LHASH *lh, FILE *out);
void lh_node_stats(const _LHASH *lh, FILE *out);
void lh_node_usage_stats(const _LHASH *lh, FILE *out);



void lh_stats_bio(const _LHASH *lh, BIO *out);
void lh_node_stats_bio(const _LHASH *lh, BIO *out);
void lh_node_usage_stats_bio(const _LHASH *lh, BIO *out);
# 233 "/usr/include/openssl/lhash.h" 3 4
struct lhash_st_OPENSSL_STRING { int dummy; };
struct lhash_st_OPENSSL_CSTRING { int dummy; };
# 73 "/usr/include/openssl/x509_vfy.h" 2 3 4
# 92 "/usr/include/openssl/x509_vfy.h" 3 4
typedef struct x509_file_st {
    int num_paths;
    int num_alloced;
    char **paths;
    int *path_type;
} X509_CERT_FILE_CTX;
# 123 "/usr/include/openssl/x509_vfy.h" 3 4
typedef struct x509_object_st {

    int type;
    union {
        char *ptr;
        X509 *x509;
        X509_CRL *crl;
        EVP_PKEY *pkey;
    } data;
} X509_OBJECT;

typedef struct x509_lookup_st X509_LOOKUP;

struct stack_st_X509_LOOKUP { _STACK stack; };
struct stack_st_X509_OBJECT { _STACK stack; };


typedef struct x509_lookup_method_st {
    const char *name;
    int (*new_item) (X509_LOOKUP *ctx);
    void (*free) (X509_LOOKUP *ctx);
    int (*init) (X509_LOOKUP *ctx);
    int (*shutdown) (X509_LOOKUP *ctx);
    int (*ctrl) (X509_LOOKUP *ctx, int cmd, const char *argc, long argl,
                 char **ret);
    int (*get_by_subject) (X509_LOOKUP *ctx, int type, X509_NAME *name,
                           X509_OBJECT *ret);
    int (*get_by_issuer_serial) (X509_LOOKUP *ctx, int type, X509_NAME *name,
                                 ASN1_INTEGER *serial, X509_OBJECT *ret);
    int (*get_by_fingerprint) (X509_LOOKUP *ctx, int type,
                               unsigned char *bytes, int len,
                               X509_OBJECT *ret);
    int (*get_by_alias) (X509_LOOKUP *ctx, int type, char *str, int len,
                         X509_OBJECT *ret);
} X509_LOOKUP_METHOD;

typedef struct X509_VERIFY_PARAM_ID_st X509_VERIFY_PARAM_ID;







typedef struct X509_VERIFY_PARAM_st {
    char *name;
    time_t check_time;
    unsigned long inh_flags;
    unsigned long flags;
    int purpose;
    int trust;
    int depth;
    struct stack_st_ASN1_OBJECT *policies;
    X509_VERIFY_PARAM_ID *id;
} X509_VERIFY_PARAM;

struct stack_st_X509_VERIFY_PARAM { _STACK stack; };






struct x509_store_st {

    int cache;
    struct stack_st_X509_OBJECT *objs;

    struct stack_st_X509_LOOKUP *get_cert_methods;
    X509_VERIFY_PARAM *param;


    int (*verify) (X509_STORE_CTX *ctx);

    int (*verify_cb) (int ok, X509_STORE_CTX *ctx);

    int (*get_issuer) (X509 **issuer, X509_STORE_CTX *ctx, X509 *x);

    int (*check_issued) (X509_STORE_CTX *ctx, X509 *x, X509 *issuer);

    int (*check_revocation) (X509_STORE_CTX *ctx);

    int (*get_crl) (X509_STORE_CTX *ctx, X509_CRL **crl, X509 *x);

    int (*check_crl) (X509_STORE_CTX *ctx, X509_CRL *crl);

    int (*cert_crl) (X509_STORE_CTX *ctx, X509_CRL *crl, X509 *x);
    struct stack_st_X509 *(*lookup_certs) (X509_STORE_CTX *ctx, X509_NAME *nm);
    struct stack_st_X509_CRL *(*lookup_crls) (X509_STORE_CTX *ctx, X509_NAME *nm);
    int (*cleanup) (X509_STORE_CTX *ctx);
    CRYPTO_EX_DATA ex_data;
    int references;
} ;

int X509_STORE_set_depth(X509_STORE *store, int depth);





struct x509_lookup_st {
    int init;
    int skip;
    X509_LOOKUP_METHOD *method;
    char *method_data;
    X509_STORE *store_ctx;
} ;






struct x509_store_ctx_st {
    X509_STORE *ctx;

    int current_method;


    X509 *cert;

    struct stack_st_X509 *untrusted;

    struct stack_st_X509_CRL *crls;
    X509_VERIFY_PARAM *param;

    void *other_ctx;


    int (*verify) (X509_STORE_CTX *ctx);

    int (*verify_cb) (int ok, X509_STORE_CTX *ctx);

    int (*get_issuer) (X509 **issuer, X509_STORE_CTX *ctx, X509 *x);

    int (*check_issued) (X509_STORE_CTX *ctx, X509 *x, X509 *issuer);

    int (*check_revocation) (X509_STORE_CTX *ctx);

    int (*get_crl) (X509_STORE_CTX *ctx, X509_CRL **crl, X509 *x);

    int (*check_crl) (X509_STORE_CTX *ctx, X509_CRL *crl);

    int (*cert_crl) (X509_STORE_CTX *ctx, X509_CRL *crl, X509 *x);
    int (*check_policy) (X509_STORE_CTX *ctx);
    struct stack_st_X509 *(*lookup_certs) (X509_STORE_CTX *ctx, X509_NAME *nm);
    struct stack_st_X509_CRL *(*lookup_crls) (X509_STORE_CTX *ctx, X509_NAME *nm);
    int (*cleanup) (X509_STORE_CTX *ctx);


    int valid;

    int last_untrusted;

    struct stack_st_X509 *chain;

    X509_POLICY_TREE *tree;

    int explicit_policy;

    int error_depth;
    int error;
    X509 *current_cert;

    X509 *current_issuer;

    X509_CRL *current_crl;

    int current_crl_score;

    unsigned int current_reasons;

    X509_STORE_CTX *parent;
    CRYPTO_EX_DATA ex_data;
} ;

void X509_STORE_CTX_set_depth(X509_STORE_CTX *ctx, int depth);
# 454 "/usr/include/openssl/x509_vfy.h" 3 4
int X509_OBJECT_idx_by_subject(struct stack_st_X509_OBJECT *h, int type,
                               X509_NAME *name);
X509_OBJECT *X509_OBJECT_retrieve_by_subject(struct stack_st_X509_OBJECT *h,
                                             int type, X509_NAME *name);
X509_OBJECT *X509_OBJECT_retrieve_match(struct stack_st_X509_OBJECT *h,
                                        X509_OBJECT *x);
void X509_OBJECT_up_ref_count(X509_OBJECT *a);
void X509_OBJECT_free_contents(X509_OBJECT *a);
X509_STORE *X509_STORE_new(void);
void X509_STORE_free(X509_STORE *v);

struct stack_st_X509 *X509_STORE_get1_certs(X509_STORE_CTX *st, X509_NAME *nm);
struct stack_st_X509_CRL *X509_STORE_get1_crls(X509_STORE_CTX *st, X509_NAME *nm);
int X509_STORE_set_flags(X509_STORE *ctx, unsigned long flags);
int X509_STORE_set_purpose(X509_STORE *ctx, int purpose);
int X509_STORE_set_trust(X509_STORE *ctx, int trust);
int X509_STORE_set1_param(X509_STORE *ctx, X509_VERIFY_PARAM *pm);

void X509_STORE_set_verify_cb(X509_STORE *ctx,
                              int (*verify_cb) (int, X509_STORE_CTX *));

void X509_STORE_set_lookup_crls_cb(X509_STORE *ctx,
                                   struct stack_st_X509_CRL *(*cb) (X509_STORE_CTX
                                                              *ctx,
                                                              X509_NAME *nm));

X509_STORE_CTX *X509_STORE_CTX_new(void);

int X509_STORE_CTX_get1_issuer(X509 **issuer, X509_STORE_CTX *ctx, X509 *x);

void X509_STORE_CTX_free(X509_STORE_CTX *ctx);
int X509_STORE_CTX_init(X509_STORE_CTX *ctx, X509_STORE *store,
                        X509 *x509, struct stack_st_X509 *chain);
void X509_STORE_CTX_trusted_stack(X509_STORE_CTX *ctx, struct stack_st_X509 *sk);
void X509_STORE_CTX_cleanup(X509_STORE_CTX *ctx);

X509_STORE *X509_STORE_CTX_get0_store(X509_STORE_CTX *ctx);

X509_LOOKUP *X509_STORE_add_lookup(X509_STORE *v, X509_LOOKUP_METHOD *m);

X509_LOOKUP_METHOD *X509_LOOKUP_hash_dir(void);
X509_LOOKUP_METHOD *X509_LOOKUP_file(void);

int X509_STORE_add_cert(X509_STORE *ctx, X509 *x);
int X509_STORE_add_crl(X509_STORE *ctx, X509_CRL *x);

int X509_STORE_get_by_subject(X509_STORE_CTX *vs, int type, X509_NAME *name,
                              X509_OBJECT *ret);

int X509_LOOKUP_ctrl(X509_LOOKUP *ctx, int cmd, const char *argc,
                     long argl, char **ret);


int X509_load_cert_file(X509_LOOKUP *ctx, const char *file, int type);
int X509_load_crl_file(X509_LOOKUP *ctx, const char *file, int type);
int X509_load_cert_crl_file(X509_LOOKUP *ctx, const char *file, int type);


X509_LOOKUP *X509_LOOKUP_new(X509_LOOKUP_METHOD *method);
void X509_LOOKUP_free(X509_LOOKUP *ctx);
int X509_LOOKUP_init(X509_LOOKUP *ctx);
int X509_LOOKUP_by_subject(X509_LOOKUP *ctx, int type, X509_NAME *name,
                           X509_OBJECT *ret);
int X509_LOOKUP_by_issuer_serial(X509_LOOKUP *ctx, int type, X509_NAME *name,
                                 ASN1_INTEGER *serial, X509_OBJECT *ret);
int X509_LOOKUP_by_fingerprint(X509_LOOKUP *ctx, int type,
                               unsigned char *bytes, int len,
                               X509_OBJECT *ret);
int X509_LOOKUP_by_alias(X509_LOOKUP *ctx, int type, char *str, int len,
                         X509_OBJECT *ret);
int X509_LOOKUP_shutdown(X509_LOOKUP *ctx);


int X509_STORE_load_locations(X509_STORE *ctx,
                              const char *file, const char *dir);
int X509_STORE_set_default_paths(X509_STORE *ctx);


int X509_STORE_CTX_get_ex_new_index(long argl, void *argp,
                                    CRYPTO_EX_new *new_func,
                                    CRYPTO_EX_dup *dup_func,
                                    CRYPTO_EX_free *free_func);
int X509_STORE_CTX_set_ex_data(X509_STORE_CTX *ctx, int idx, void *data);
void *X509_STORE_CTX_get_ex_data(X509_STORE_CTX *ctx, int idx);
int X509_STORE_CTX_get_error(X509_STORE_CTX *ctx);
void X509_STORE_CTX_set_error(X509_STORE_CTX *ctx, int s);
int X509_STORE_CTX_get_error_depth(X509_STORE_CTX *ctx);
X509 *X509_STORE_CTX_get_current_cert(X509_STORE_CTX *ctx);
X509 *X509_STORE_CTX_get0_current_issuer(X509_STORE_CTX *ctx);
X509_CRL *X509_STORE_CTX_get0_current_crl(X509_STORE_CTX *ctx);
X509_STORE_CTX *X509_STORE_CTX_get0_parent_ctx(X509_STORE_CTX *ctx);
struct stack_st_X509 *X509_STORE_CTX_get_chain(X509_STORE_CTX *ctx);
struct stack_st_X509 *X509_STORE_CTX_get1_chain(X509_STORE_CTX *ctx);
void X509_STORE_CTX_set_cert(X509_STORE_CTX *c, X509 *x);
void X509_STORE_CTX_set_chain(X509_STORE_CTX *c, struct stack_st_X509 *sk);
void X509_STORE_CTX_set0_crls(X509_STORE_CTX *c, struct stack_st_X509_CRL *sk);
int X509_STORE_CTX_set_purpose(X509_STORE_CTX *ctx, int purpose);
int X509_STORE_CTX_set_trust(X509_STORE_CTX *ctx, int trust);
int X509_STORE_CTX_purpose_inherit(X509_STORE_CTX *ctx, int def_purpose,
                                   int purpose, int trust);
void X509_STORE_CTX_set_flags(X509_STORE_CTX *ctx, unsigned long flags);
void X509_STORE_CTX_set_time(X509_STORE_CTX *ctx, unsigned long flags,
                             time_t t);
void X509_STORE_CTX_set_verify_cb(X509_STORE_CTX *ctx,
                                  int (*verify_cb) (int, X509_STORE_CTX *));

X509_POLICY_TREE *X509_STORE_CTX_get0_policy_tree(X509_STORE_CTX *ctx);
int X509_STORE_CTX_get_explicit_policy(X509_STORE_CTX *ctx);

X509_VERIFY_PARAM *X509_STORE_CTX_get0_param(X509_STORE_CTX *ctx);
void X509_STORE_CTX_set0_param(X509_STORE_CTX *ctx, X509_VERIFY_PARAM *param);
int X509_STORE_CTX_set_default(X509_STORE_CTX *ctx, const char *name);



X509_VERIFY_PARAM *X509_VERIFY_PARAM_new(void);
void X509_VERIFY_PARAM_free(X509_VERIFY_PARAM *param);
int X509_VERIFY_PARAM_inherit(X509_VERIFY_PARAM *to,
                              const X509_VERIFY_PARAM *from);
int X509_VERIFY_PARAM_set1(X509_VERIFY_PARAM *to,
                           const X509_VERIFY_PARAM *from);
int X509_VERIFY_PARAM_set1_name(X509_VERIFY_PARAM *param, const char *name);
int X509_VERIFY_PARAM_set_flags(X509_VERIFY_PARAM *param,
                                unsigned long flags);
int X509_VERIFY_PARAM_clear_flags(X509_VERIFY_PARAM *param,
                                  unsigned long flags);
unsigned long X509_VERIFY_PARAM_get_flags(X509_VERIFY_PARAM *param);
int X509_VERIFY_PARAM_set_purpose(X509_VERIFY_PARAM *param, int purpose);
int X509_VERIFY_PARAM_set_trust(X509_VERIFY_PARAM *param, int trust);
void X509_VERIFY_PARAM_set_depth(X509_VERIFY_PARAM *param, int depth);
void X509_VERIFY_PARAM_set_time(X509_VERIFY_PARAM *param, time_t t);
int X509_VERIFY_PARAM_add0_policy(X509_VERIFY_PARAM *param,
                                  ASN1_OBJECT *policy);
int X509_VERIFY_PARAM_set1_policies(X509_VERIFY_PARAM *param,
                                    struct stack_st_ASN1_OBJECT *policies);

int X509_VERIFY_PARAM_set1_host(X509_VERIFY_PARAM *param,
                                const char *name, size_t namelen);
int X509_VERIFY_PARAM_add1_host(X509_VERIFY_PARAM *param,
                                const char *name, size_t namelen);
void X509_VERIFY_PARAM_set_hostflags(X509_VERIFY_PARAM *param,
                                     unsigned int flags);
char *X509_VERIFY_PARAM_get0_peername(X509_VERIFY_PARAM *);
int X509_VERIFY_PARAM_set1_email(X509_VERIFY_PARAM *param,
                                 const char *email, size_t emaillen);
int X509_VERIFY_PARAM_set1_ip(X509_VERIFY_PARAM *param,
                              const unsigned char *ip, size_t iplen);
int X509_VERIFY_PARAM_set1_ip_asc(X509_VERIFY_PARAM *param,
                                  const char *ipasc);

int X509_VERIFY_PARAM_get_depth(const X509_VERIFY_PARAM *param);
const char *X509_VERIFY_PARAM_get0_name(const X509_VERIFY_PARAM *param);

int X509_VERIFY_PARAM_add0_table(X509_VERIFY_PARAM *param);
int X509_VERIFY_PARAM_get_count(void);
const X509_VERIFY_PARAM *X509_VERIFY_PARAM_get0(int id);
const X509_VERIFY_PARAM *X509_VERIFY_PARAM_lookup(const char *name);
void X509_VERIFY_PARAM_table_cleanup(void);

int X509_policy_check(X509_POLICY_TREE **ptree, int *pexplicit_policy,
                      struct stack_st_X509 *certs,
                      struct stack_st_ASN1_OBJECT *policy_oids, unsigned int flags);

void X509_policy_tree_free(X509_POLICY_TREE *tree);

int X509_policy_tree_level_count(const X509_POLICY_TREE *tree);
X509_POLICY_LEVEL *X509_policy_tree_get0_level(const X509_POLICY_TREE *tree,
                                               int i);

struct stack_st_X509_POLICY_NODE *X509_policy_tree_get0_policies(const
                                                           X509_POLICY_TREE
                                                           *tree);

struct stack_st_X509_POLICY_NODE *X509_policy_tree_get0_user_policies(const
                                                                X509_POLICY_TREE
                                                                *tree);

int X509_policy_level_node_count(X509_POLICY_LEVEL *level);

X509_POLICY_NODE *X509_policy_level_get0_node(X509_POLICY_LEVEL *level,
                                              int i);

const ASN1_OBJECT *X509_policy_node_get0_policy(const X509_POLICY_NODE *node);

struct stack_st_POLICYQUALINFO *X509_policy_node_get0_qualifiers(const
                                                           X509_POLICY_NODE
                                                           *node);
const X509_POLICY_NODE *X509_policy_node_get0_parent(const X509_POLICY_NODE
                                                     *node);
# 582 "/usr/include/openssl/x509.h" 2 3 4
# 1 "/usr/include/openssl/pkcs7.h" 1 3 4
# 64 "/usr/include/openssl/pkcs7.h" 3 4
# 1 "/usr/include/openssl/e_os2.h" 1 3 4
# 56 "/usr/include/openssl/e_os2.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/openssl/opensslconf.h" 1 3 4
# 57 "/usr/include/openssl/e_os2.h" 2 3 4
# 65 "/usr/include/openssl/pkcs7.h" 2 3 4
# 86 "/usr/include/openssl/pkcs7.h" 3 4
typedef struct pkcs7_issuer_and_serial_st {
    X509_NAME *issuer;
    ASN1_INTEGER *serial;
} PKCS7_ISSUER_AND_SERIAL;

typedef struct pkcs7_signer_info_st {
    ASN1_INTEGER *version;
    PKCS7_ISSUER_AND_SERIAL *issuer_and_serial;
    X509_ALGOR *digest_alg;
    struct stack_st_X509_ATTRIBUTE *auth_attr;
    X509_ALGOR *digest_enc_alg;
    ASN1_OCTET_STRING *enc_digest;
    struct stack_st_X509_ATTRIBUTE *unauth_attr;

    EVP_PKEY *pkey;
} PKCS7_SIGNER_INFO;

struct stack_st_PKCS7_SIGNER_INFO { _STACK stack; };


typedef struct pkcs7_recip_info_st {
    ASN1_INTEGER *version;
    PKCS7_ISSUER_AND_SERIAL *issuer_and_serial;
    X509_ALGOR *key_enc_algor;
    ASN1_OCTET_STRING *enc_key;
    X509 *cert;
} PKCS7_RECIP_INFO;

struct stack_st_PKCS7_RECIP_INFO { _STACK stack; };


typedef struct pkcs7_signed_st {
    ASN1_INTEGER *version;
    struct stack_st_X509_ALGOR *md_algs;
    struct stack_st_X509 *cert;
    struct stack_st_X509_CRL *crl;
    struct stack_st_PKCS7_SIGNER_INFO *signer_info;
    struct pkcs7_st *contents;
} PKCS7_SIGNED;





typedef struct pkcs7_enc_content_st {
    ASN1_OBJECT *content_type;
    X509_ALGOR *algorithm;
    ASN1_OCTET_STRING *enc_data;
    const EVP_CIPHER *cipher;
} PKCS7_ENC_CONTENT;

typedef struct pkcs7_enveloped_st {
    ASN1_INTEGER *version;
    struct stack_st_PKCS7_RECIP_INFO *recipientinfo;
    PKCS7_ENC_CONTENT *enc_data;
} PKCS7_ENVELOPE;

typedef struct pkcs7_signedandenveloped_st {
    ASN1_INTEGER *version;
    struct stack_st_X509_ALGOR *md_algs;
    struct stack_st_X509 *cert;
    struct stack_st_X509_CRL *crl;
    struct stack_st_PKCS7_SIGNER_INFO *signer_info;
    PKCS7_ENC_CONTENT *enc_data;
    struct stack_st_PKCS7_RECIP_INFO *recipientinfo;
} PKCS7_SIGN_ENVELOPE;

typedef struct pkcs7_digest_st {
    ASN1_INTEGER *version;
    X509_ALGOR *md;
    struct pkcs7_st *contents;
    ASN1_OCTET_STRING *digest;
} PKCS7_DIGEST;

typedef struct pkcs7_encrypted_st {
    ASN1_INTEGER *version;
    PKCS7_ENC_CONTENT *enc_data;
} PKCS7_ENCRYPT;

typedef struct pkcs7_st {




    unsigned char *asn1;
    long length;



    int state;
    int detached;
    ASN1_OBJECT *type;





    union {
        char *ptr;

        ASN1_OCTET_STRING *data;

        PKCS7_SIGNED *sign;

        PKCS7_ENVELOPE *enveloped;

        PKCS7_SIGN_ENVELOPE *signed_and_enveloped;

        PKCS7_DIGEST *digest;

        PKCS7_ENCRYPT *encrypted;

        ASN1_TYPE *other;
    } d;
} PKCS7;

struct stack_st_PKCS7 { _STACK stack; };


# 258 "/usr/include/openssl/pkcs7.h" 3 4
PKCS7_ISSUER_AND_SERIAL *PKCS7_ISSUER_AND_SERIAL_new(void); void PKCS7_ISSUER_AND_SERIAL_free(PKCS7_ISSUER_AND_SERIAL *a); PKCS7_ISSUER_AND_SERIAL *d2i_PKCS7_ISSUER_AND_SERIAL(PKCS7_ISSUER_AND_SERIAL **a, const unsigned char **in, long len); int i2d_PKCS7_ISSUER_AND_SERIAL(PKCS7_ISSUER_AND_SERIAL *a, unsigned char **out); extern const ASN1_ITEM PKCS7_ISSUER_AND_SERIAL_it;

int PKCS7_ISSUER_AND_SERIAL_digest(PKCS7_ISSUER_AND_SERIAL *data,
                                   const EVP_MD *type, unsigned char *md,
                                   unsigned int *len);

PKCS7 *d2i_PKCS7_fp(FILE *fp, PKCS7 **p7);
int i2d_PKCS7_fp(FILE *fp, PKCS7 *p7);

PKCS7 *PKCS7_dup(PKCS7 *p7);
PKCS7 *d2i_PKCS7_bio(BIO *bp, PKCS7 **p7);
int i2d_PKCS7_bio(BIO *bp, PKCS7 *p7);
int i2d_PKCS7_bio_stream(BIO *out, PKCS7 *p7, BIO *in, int flags);
int PEM_write_bio_PKCS7_stream(BIO *out, PKCS7 *p7, BIO *in, int flags);

PKCS7_SIGNER_INFO *PKCS7_SIGNER_INFO_new(void); void PKCS7_SIGNER_INFO_free(PKCS7_SIGNER_INFO *a); PKCS7_SIGNER_INFO *d2i_PKCS7_SIGNER_INFO(PKCS7_SIGNER_INFO **a, const unsigned char **in, long len); int i2d_PKCS7_SIGNER_INFO(PKCS7_SIGNER_INFO *a, unsigned char **out); extern const ASN1_ITEM PKCS7_SIGNER_INFO_it;
PKCS7_RECIP_INFO *PKCS7_RECIP_INFO_new(void); void PKCS7_RECIP_INFO_free(PKCS7_RECIP_INFO *a); PKCS7_RECIP_INFO *d2i_PKCS7_RECIP_INFO(PKCS7_RECIP_INFO **a, const unsigned char **in, long len); int i2d_PKCS7_RECIP_INFO(PKCS7_RECIP_INFO *a, unsigned char **out); extern const ASN1_ITEM PKCS7_RECIP_INFO_it;
PKCS7_SIGNED *PKCS7_SIGNED_new(void); void PKCS7_SIGNED_free(PKCS7_SIGNED *a); PKCS7_SIGNED *d2i_PKCS7_SIGNED(PKCS7_SIGNED **a, const unsigned char **in, long len); int i2d_PKCS7_SIGNED(PKCS7_SIGNED *a, unsigned char **out); extern const ASN1_ITEM PKCS7_SIGNED_it;
PKCS7_ENC_CONTENT *PKCS7_ENC_CONTENT_new(void); void PKCS7_ENC_CONTENT_free(PKCS7_ENC_CONTENT *a); PKCS7_ENC_CONTENT *d2i_PKCS7_ENC_CONTENT(PKCS7_ENC_CONTENT **a, const unsigned char **in, long len); int i2d_PKCS7_ENC_CONTENT(PKCS7_ENC_CONTENT *a, unsigned char **out); extern const ASN1_ITEM PKCS7_ENC_CONTENT_it;
PKCS7_ENVELOPE *PKCS7_ENVELOPE_new(void); void PKCS7_ENVELOPE_free(PKCS7_ENVELOPE *a); PKCS7_ENVELOPE *d2i_PKCS7_ENVELOPE(PKCS7_ENVELOPE **a, const unsigned char **in, long len); int i2d_PKCS7_ENVELOPE(PKCS7_ENVELOPE *a, unsigned char **out); extern const ASN1_ITEM PKCS7_ENVELOPE_it;
PKCS7_SIGN_ENVELOPE *PKCS7_SIGN_ENVELOPE_new(void); void PKCS7_SIGN_ENVELOPE_free(PKCS7_SIGN_ENVELOPE *a); PKCS7_SIGN_ENVELOPE *d2i_PKCS7_SIGN_ENVELOPE(PKCS7_SIGN_ENVELOPE **a, const unsigned char **in, long len); int i2d_PKCS7_SIGN_ENVELOPE(PKCS7_SIGN_ENVELOPE *a, unsigned char **out); extern const ASN1_ITEM PKCS7_SIGN_ENVELOPE_it;
PKCS7_DIGEST *PKCS7_DIGEST_new(void); void PKCS7_DIGEST_free(PKCS7_DIGEST *a); PKCS7_DIGEST *d2i_PKCS7_DIGEST(PKCS7_DIGEST **a, const unsigned char **in, long len); int i2d_PKCS7_DIGEST(PKCS7_DIGEST *a, unsigned char **out); extern const ASN1_ITEM PKCS7_DIGEST_it;
PKCS7_ENCRYPT *PKCS7_ENCRYPT_new(void); void PKCS7_ENCRYPT_free(PKCS7_ENCRYPT *a); PKCS7_ENCRYPT *d2i_PKCS7_ENCRYPT(PKCS7_ENCRYPT **a, const unsigned char **in, long len); int i2d_PKCS7_ENCRYPT(PKCS7_ENCRYPT *a, unsigned char **out); extern const ASN1_ITEM PKCS7_ENCRYPT_it;
PKCS7 *PKCS7_new(void); void PKCS7_free(PKCS7 *a); PKCS7 *d2i_PKCS7(PKCS7 **a, const unsigned char **in, long len); int i2d_PKCS7(PKCS7 *a, unsigned char **out); extern const ASN1_ITEM PKCS7_it;

extern const ASN1_ITEM PKCS7_ATTR_SIGN_it;
extern const ASN1_ITEM PKCS7_ATTR_VERIFY_it;

int i2d_PKCS7_NDEF(PKCS7 *a, unsigned char **out);
int PKCS7_print_ctx(BIO *out, PKCS7 *x, int indent, const ASN1_PCTX *pctx);

long PKCS7_ctrl(PKCS7 *p7, int cmd, long larg, char *parg);

int PKCS7_set_type(PKCS7 *p7, int type);
int PKCS7_set0_type_other(PKCS7 *p7, int type, ASN1_TYPE *other);
int PKCS7_set_content(PKCS7 *p7, PKCS7 *p7_data);
int PKCS7_SIGNER_INFO_set(PKCS7_SIGNER_INFO *p7i, X509 *x509, EVP_PKEY *pkey,
                          const EVP_MD *dgst);
int PKCS7_SIGNER_INFO_sign(PKCS7_SIGNER_INFO *si);
int PKCS7_add_signer(PKCS7 *p7, PKCS7_SIGNER_INFO *p7i);
int PKCS7_add_certificate(PKCS7 *p7, X509 *x509);
int PKCS7_add_crl(PKCS7 *p7, X509_CRL *x509);
int PKCS7_content_new(PKCS7 *p7, int nid);
int PKCS7_dataVerify(X509_STORE *cert_store, X509_STORE_CTX *ctx,
                     BIO *bio, PKCS7 *p7, PKCS7_SIGNER_INFO *si);
int PKCS7_signatureVerify(BIO *bio, PKCS7 *p7, PKCS7_SIGNER_INFO *si,
                          X509 *x509);

BIO *PKCS7_dataInit(PKCS7 *p7, BIO *bio);
int PKCS7_dataFinal(PKCS7 *p7, BIO *bio);
BIO *PKCS7_dataDecode(PKCS7 *p7, EVP_PKEY *pkey, BIO *in_bio, X509 *pcert);

PKCS7_SIGNER_INFO *PKCS7_add_signature(PKCS7 *p7, X509 *x509,
                                       EVP_PKEY *pkey, const EVP_MD *dgst);
X509 *PKCS7_cert_from_signer_info(PKCS7 *p7, PKCS7_SIGNER_INFO *si);
int PKCS7_set_digest(PKCS7 *p7, const EVP_MD *md);
struct stack_st_PKCS7_SIGNER_INFO *PKCS7_get_signer_info(PKCS7 *p7);

PKCS7_RECIP_INFO *PKCS7_add_recipient(PKCS7 *p7, X509 *x509);
void PKCS7_SIGNER_INFO_get0_algs(PKCS7_SIGNER_INFO *si, EVP_PKEY **pk,
                                 X509_ALGOR **pdig, X509_ALGOR **psig);
void PKCS7_RECIP_INFO_get0_alg(PKCS7_RECIP_INFO *ri, X509_ALGOR **penc);
int PKCS7_add_recipient_info(PKCS7 *p7, PKCS7_RECIP_INFO *ri);
int PKCS7_RECIP_INFO_set(PKCS7_RECIP_INFO *p7i, X509 *x509);
int PKCS7_set_cipher(PKCS7 *p7, const EVP_CIPHER *cipher);
int PKCS7_stream(unsigned char ***boundary, PKCS7 *p7);

PKCS7_ISSUER_AND_SERIAL *PKCS7_get_issuer_and_serial(PKCS7 *p7, int idx);
ASN1_OCTET_STRING *PKCS7_digest_from_attributes(struct stack_st_X509_ATTRIBUTE *sk);
int PKCS7_add_signed_attribute(PKCS7_SIGNER_INFO *p7si, int nid, int type,
                               void *data);
int PKCS7_add_attribute(PKCS7_SIGNER_INFO *p7si, int nid, int atrtype,
                        void *value);
ASN1_TYPE *PKCS7_get_attribute(PKCS7_SIGNER_INFO *si, int nid);
ASN1_TYPE *PKCS7_get_signed_attribute(PKCS7_SIGNER_INFO *si, int nid);
int PKCS7_set_signed_attributes(PKCS7_SIGNER_INFO *p7si,
                                struct stack_st_X509_ATTRIBUTE *sk);
int PKCS7_set_attributes(PKCS7_SIGNER_INFO *p7si,
                         struct stack_st_X509_ATTRIBUTE *sk);

PKCS7 *PKCS7_sign(X509 *signcert, EVP_PKEY *pkey, struct stack_st_X509 *certs,
                  BIO *data, int flags);

PKCS7_SIGNER_INFO *PKCS7_sign_add_signer(PKCS7 *p7,
                                         X509 *signcert, EVP_PKEY *pkey,
                                         const EVP_MD *md, int flags);

int PKCS7_final(PKCS7 *p7, BIO *data, int flags);
int PKCS7_verify(PKCS7 *p7, struct stack_st_X509 *certs, X509_STORE *store,
                 BIO *indata, BIO *out, int flags);
struct stack_st_X509 *PKCS7_get0_signers(PKCS7 *p7, struct stack_st_X509 *certs,
                                   int flags);
PKCS7 *PKCS7_encrypt(struct stack_st_X509 *certs, BIO *in, const EVP_CIPHER *cipher,
                     int flags);
int PKCS7_decrypt(PKCS7 *p7, EVP_PKEY *pkey, X509 *cert, BIO *data,
                  int flags);

int PKCS7_add_attrib_smimecap(PKCS7_SIGNER_INFO *si,
                              struct stack_st_X509_ALGOR *cap);
struct stack_st_X509_ALGOR *PKCS7_get_smimecap(PKCS7_SIGNER_INFO *si);
int PKCS7_simple_smimecap(struct stack_st_X509_ALGOR *sk, int nid, int arg);

int PKCS7_add_attrib_content_type(PKCS7_SIGNER_INFO *si, ASN1_OBJECT *coid);
int PKCS7_add0_attrib_signing_time(PKCS7_SIGNER_INFO *si, ASN1_TIME *t);
int PKCS7_add1_attrib_digest(PKCS7_SIGNER_INFO *si,
                             const unsigned char *md, int mdlen);

int SMIME_write_PKCS7(BIO *bio, PKCS7 *p7, BIO *data, int flags);
PKCS7 *SMIME_read_PKCS7(BIO *bio, BIO **bcont);

BIO *BIO_new_PKCS7(BIO *out, PKCS7 *p7);






void ERR_load_PKCS7_strings(void);
# 583 "/usr/include/openssl/x509.h" 2 3 4
# 608 "/usr/include/openssl/x509.h" 3 4
void X509_CRL_set_default_method(const X509_CRL_METHOD *meth);
X509_CRL_METHOD *X509_CRL_METHOD_new(int (*crl_init) (X509_CRL *crl),
                                     int (*crl_free) (X509_CRL *crl),
                                     int (*crl_lookup) (X509_CRL *crl,
                                                        X509_REVOKED **ret,
                                                        ASN1_INTEGER *ser,
                                                        X509_NAME *issuer),
                                     int (*crl_verify) (X509_CRL *crl,
                                                        EVP_PKEY *pk));
void X509_CRL_METHOD_free(X509_CRL_METHOD *m);

void X509_CRL_set_meth_data(X509_CRL *crl, void *dat);
void *X509_CRL_get_meth_data(X509_CRL *crl);







const char *X509_verify_cert_error_string(long n);


int X509_verify(X509 *a, EVP_PKEY *r);

int X509_REQ_verify(X509_REQ *a, EVP_PKEY *r);
int X509_CRL_verify(X509_CRL *a, EVP_PKEY *r);
int NETSCAPE_SPKI_verify(NETSCAPE_SPKI *a, EVP_PKEY *r);

NETSCAPE_SPKI *NETSCAPE_SPKI_b64_decode(const char *str, int len);
char *NETSCAPE_SPKI_b64_encode(NETSCAPE_SPKI *x);
EVP_PKEY *NETSCAPE_SPKI_get_pubkey(NETSCAPE_SPKI *x);
int NETSCAPE_SPKI_set_pubkey(NETSCAPE_SPKI *x, EVP_PKEY *pkey);

int NETSCAPE_SPKI_print(BIO *out, NETSCAPE_SPKI *spki);

int X509_signature_dump(BIO *bp, const ASN1_STRING *sig, int indent);
int X509_signature_print(BIO *bp, X509_ALGOR *alg, ASN1_STRING *sig);

int X509_sign(X509 *x, EVP_PKEY *pkey, const EVP_MD *md);
int X509_sign_ctx(X509 *x, EVP_MD_CTX *ctx);
int X509_http_nbio(OCSP_REQ_CTX *rctx, X509 **pcert);
int X509_REQ_sign(X509_REQ *x, EVP_PKEY *pkey, const EVP_MD *md);
int X509_REQ_sign_ctx(X509_REQ *x, EVP_MD_CTX *ctx);
int X509_CRL_sign(X509_CRL *x, EVP_PKEY *pkey, const EVP_MD *md);
int X509_CRL_sign_ctx(X509_CRL *x, EVP_MD_CTX *ctx);
int X509_CRL_http_nbio(OCSP_REQ_CTX *rctx, X509_CRL **pcrl);
int NETSCAPE_SPKI_sign(NETSCAPE_SPKI *x, EVP_PKEY *pkey, const EVP_MD *md);

int X509_pubkey_digest(const X509 *data, const EVP_MD *type,
                       unsigned char *md, unsigned int *len);
int X509_digest(const X509 *data, const EVP_MD *type,
                unsigned char *md, unsigned int *len);
int X509_CRL_digest(const X509_CRL *data, const EVP_MD *type,
                    unsigned char *md, unsigned int *len);
int X509_REQ_digest(const X509_REQ *data, const EVP_MD *type,
                    unsigned char *md, unsigned int *len);
int X509_NAME_digest(const X509_NAME *data, const EVP_MD *type,
                     unsigned char *md, unsigned int *len);



X509 *d2i_X509_fp(FILE *fp, X509 **x509);
int i2d_X509_fp(FILE *fp, X509 *x509);
X509_CRL *d2i_X509_CRL_fp(FILE *fp, X509_CRL **crl);
int i2d_X509_CRL_fp(FILE *fp, X509_CRL *crl);
X509_REQ *d2i_X509_REQ_fp(FILE *fp, X509_REQ **req);
int i2d_X509_REQ_fp(FILE *fp, X509_REQ *req);

RSA *d2i_RSAPrivateKey_fp(FILE *fp, RSA **rsa);
int i2d_RSAPrivateKey_fp(FILE *fp, RSA *rsa);
RSA *d2i_RSAPublicKey_fp(FILE *fp, RSA **rsa);
int i2d_RSAPublicKey_fp(FILE *fp, RSA *rsa);
RSA *d2i_RSA_PUBKEY_fp(FILE *fp, RSA **rsa);
int i2d_RSA_PUBKEY_fp(FILE *fp, RSA *rsa);


DSA *d2i_DSA_PUBKEY_fp(FILE *fp, DSA **dsa);
int i2d_DSA_PUBKEY_fp(FILE *fp, DSA *dsa);
DSA *d2i_DSAPrivateKey_fp(FILE *fp, DSA **dsa);
int i2d_DSAPrivateKey_fp(FILE *fp, DSA *dsa);


EC_KEY *d2i_EC_PUBKEY_fp(FILE *fp, EC_KEY **eckey);
int i2d_EC_PUBKEY_fp(FILE *fp, EC_KEY *eckey);
EC_KEY *d2i_ECPrivateKey_fp(FILE *fp, EC_KEY **eckey);
int i2d_ECPrivateKey_fp(FILE *fp, EC_KEY *eckey);

X509_SIG *d2i_PKCS8_fp(FILE *fp, X509_SIG **p8);
int i2d_PKCS8_fp(FILE *fp, X509_SIG *p8);
PKCS8_PRIV_KEY_INFO *d2i_PKCS8_PRIV_KEY_INFO_fp(FILE *fp,
                                                PKCS8_PRIV_KEY_INFO **p8inf);
int i2d_PKCS8_PRIV_KEY_INFO_fp(FILE *fp, PKCS8_PRIV_KEY_INFO *p8inf);
int i2d_PKCS8PrivateKeyInfo_fp(FILE *fp, EVP_PKEY *key);
int i2d_PrivateKey_fp(FILE *fp, EVP_PKEY *pkey);
EVP_PKEY *d2i_PrivateKey_fp(FILE *fp, EVP_PKEY **a);
int i2d_PUBKEY_fp(FILE *fp, EVP_PKEY *pkey);
EVP_PKEY *d2i_PUBKEY_fp(FILE *fp, EVP_PKEY **a);



X509 *d2i_X509_bio(BIO *bp, X509 **x509);
int i2d_X509_bio(BIO *bp, X509 *x509);
X509_CRL *d2i_X509_CRL_bio(BIO *bp, X509_CRL **crl);
int i2d_X509_CRL_bio(BIO *bp, X509_CRL *crl);
X509_REQ *d2i_X509_REQ_bio(BIO *bp, X509_REQ **req);
int i2d_X509_REQ_bio(BIO *bp, X509_REQ *req);

RSA *d2i_RSAPrivateKey_bio(BIO *bp, RSA **rsa);
int i2d_RSAPrivateKey_bio(BIO *bp, RSA *rsa);
RSA *d2i_RSAPublicKey_bio(BIO *bp, RSA **rsa);
int i2d_RSAPublicKey_bio(BIO *bp, RSA *rsa);
RSA *d2i_RSA_PUBKEY_bio(BIO *bp, RSA **rsa);
int i2d_RSA_PUBKEY_bio(BIO *bp, RSA *rsa);


DSA *d2i_DSA_PUBKEY_bio(BIO *bp, DSA **dsa);
int i2d_DSA_PUBKEY_bio(BIO *bp, DSA *dsa);
DSA *d2i_DSAPrivateKey_bio(BIO *bp, DSA **dsa);
int i2d_DSAPrivateKey_bio(BIO *bp, DSA *dsa);


EC_KEY *d2i_EC_PUBKEY_bio(BIO *bp, EC_KEY **eckey);
int i2d_EC_PUBKEY_bio(BIO *bp, EC_KEY *eckey);
EC_KEY *d2i_ECPrivateKey_bio(BIO *bp, EC_KEY **eckey);
int i2d_ECPrivateKey_bio(BIO *bp, EC_KEY *eckey);

X509_SIG *d2i_PKCS8_bio(BIO *bp, X509_SIG **p8);
int i2d_PKCS8_bio(BIO *bp, X509_SIG *p8);
PKCS8_PRIV_KEY_INFO *d2i_PKCS8_PRIV_KEY_INFO_bio(BIO *bp,
                                                 PKCS8_PRIV_KEY_INFO **p8inf);
int i2d_PKCS8_PRIV_KEY_INFO_bio(BIO *bp, PKCS8_PRIV_KEY_INFO *p8inf);
int i2d_PKCS8PrivateKeyInfo_bio(BIO *bp, EVP_PKEY *key);
int i2d_PrivateKey_bio(BIO *bp, EVP_PKEY *pkey);
EVP_PKEY *d2i_PrivateKey_bio(BIO *bp, EVP_PKEY **a);
int i2d_PUBKEY_bio(BIO *bp, EVP_PKEY *pkey);
EVP_PKEY *d2i_PUBKEY_bio(BIO *bp, EVP_PKEY **a);


X509 *X509_dup(X509 *x509);
X509_ATTRIBUTE *X509_ATTRIBUTE_dup(X509_ATTRIBUTE *xa);
X509_EXTENSION *X509_EXTENSION_dup(X509_EXTENSION *ex);
X509_CRL *X509_CRL_dup(X509_CRL *crl);
X509_REVOKED *X509_REVOKED_dup(X509_REVOKED *rev);
X509_REQ *X509_REQ_dup(X509_REQ *req);
X509_ALGOR *X509_ALGOR_dup(X509_ALGOR *xn);
int X509_ALGOR_set0(X509_ALGOR *alg, ASN1_OBJECT *aobj, int ptype,
                    void *pval);
void X509_ALGOR_get0(ASN1_OBJECT **paobj, int *pptype, void **ppval,
                     X509_ALGOR *algor);
void X509_ALGOR_set_md(X509_ALGOR *alg, const EVP_MD *md);
int X509_ALGOR_cmp(const X509_ALGOR *a, const X509_ALGOR *b);

X509_NAME *X509_NAME_dup(X509_NAME *xn);
X509_NAME_ENTRY *X509_NAME_ENTRY_dup(X509_NAME_ENTRY *ne);

int X509_cmp_time(const ASN1_TIME *s, time_t *t);
int X509_cmp_current_time(const ASN1_TIME *s);
ASN1_TIME *X509_time_adj(ASN1_TIME *s, long adj, time_t *t);
ASN1_TIME *X509_time_adj_ex(ASN1_TIME *s,
                            int offset_day, long offset_sec, time_t *t);
ASN1_TIME *X509_gmtime_adj(ASN1_TIME *s, long adj);

const char *X509_get_default_cert_area(void);
const char *X509_get_default_cert_dir(void);
const char *X509_get_default_cert_file(void);
const char *X509_get_default_cert_dir_env(void);
const char *X509_get_default_cert_file_env(void);
const char *X509_get_default_private_dir(void);

X509_REQ *X509_to_X509_REQ(X509 *x, EVP_PKEY *pkey, const EVP_MD *md);
X509 *X509_REQ_to_X509(X509_REQ *r, int days, EVP_PKEY *pkey);

X509_ALGOR *X509_ALGOR_new(void); void X509_ALGOR_free(X509_ALGOR *a); X509_ALGOR *d2i_X509_ALGOR(X509_ALGOR **a, const unsigned char **in, long len); int i2d_X509_ALGOR(X509_ALGOR *a, unsigned char **out); extern const ASN1_ITEM X509_ALGOR_it;
X509_ALGORS *d2i_X509_ALGORS(X509_ALGORS **a, const unsigned char **in, long len); int i2d_X509_ALGORS(X509_ALGORS *a, unsigned char **out); extern const ASN1_ITEM X509_ALGORS_it;
X509_VAL *X509_VAL_new(void); void X509_VAL_free(X509_VAL *a); X509_VAL *d2i_X509_VAL(X509_VAL **a, const unsigned char **in, long len); int i2d_X509_VAL(X509_VAL *a, unsigned char **out); extern const ASN1_ITEM X509_VAL_it;

X509_PUBKEY *X509_PUBKEY_new(void); void X509_PUBKEY_free(X509_PUBKEY *a); X509_PUBKEY *d2i_X509_PUBKEY(X509_PUBKEY **a, const unsigned char **in, long len); int i2d_X509_PUBKEY(X509_PUBKEY *a, unsigned char **out); extern const ASN1_ITEM X509_PUBKEY_it;

int X509_PUBKEY_set(X509_PUBKEY **x, EVP_PKEY *pkey);
EVP_PKEY *X509_PUBKEY_get(X509_PUBKEY *key);
int X509_get_pubkey_parameters(EVP_PKEY *pkey, struct stack_st_X509 *chain);
int i2d_PUBKEY(EVP_PKEY *a, unsigned char **pp);
EVP_PKEY *d2i_PUBKEY(EVP_PKEY **a, const unsigned char **pp, long length);

int i2d_RSA_PUBKEY(RSA *a, unsigned char **pp);
RSA *d2i_RSA_PUBKEY(RSA **a, const unsigned char **pp, long length);


int i2d_DSA_PUBKEY(DSA *a, unsigned char **pp);
DSA *d2i_DSA_PUBKEY(DSA **a, const unsigned char **pp, long length);


int i2d_EC_PUBKEY(EC_KEY *a, unsigned char **pp);
EC_KEY *d2i_EC_PUBKEY(EC_KEY **a, const unsigned char **pp, long length);


X509_SIG *X509_SIG_new(void); void X509_SIG_free(X509_SIG *a); X509_SIG *d2i_X509_SIG(X509_SIG **a, const unsigned char **in, long len); int i2d_X509_SIG(X509_SIG *a, unsigned char **out); extern const ASN1_ITEM X509_SIG_it;
X509_REQ_INFO *X509_REQ_INFO_new(void); void X509_REQ_INFO_free(X509_REQ_INFO *a); X509_REQ_INFO *d2i_X509_REQ_INFO(X509_REQ_INFO **a, const unsigned char **in, long len); int i2d_X509_REQ_INFO(X509_REQ_INFO *a, unsigned char **out); extern const ASN1_ITEM X509_REQ_INFO_it;
X509_REQ *X509_REQ_new(void); void X509_REQ_free(X509_REQ *a); X509_REQ *d2i_X509_REQ(X509_REQ **a, const unsigned char **in, long len); int i2d_X509_REQ(X509_REQ *a, unsigned char **out); extern const ASN1_ITEM X509_REQ_it;

X509_ATTRIBUTE *X509_ATTRIBUTE_new(void); void X509_ATTRIBUTE_free(X509_ATTRIBUTE *a); X509_ATTRIBUTE *d2i_X509_ATTRIBUTE(X509_ATTRIBUTE **a, const unsigned char **in, long len); int i2d_X509_ATTRIBUTE(X509_ATTRIBUTE *a, unsigned char **out); extern const ASN1_ITEM X509_ATTRIBUTE_it;
X509_ATTRIBUTE *X509_ATTRIBUTE_create(int nid, int atrtype, void *value);

X509_EXTENSION *X509_EXTENSION_new(void); void X509_EXTENSION_free(X509_EXTENSION *a); X509_EXTENSION *d2i_X509_EXTENSION(X509_EXTENSION **a, const unsigned char **in, long len); int i2d_X509_EXTENSION(X509_EXTENSION *a, unsigned char **out); extern const ASN1_ITEM X509_EXTENSION_it;
X509_EXTENSIONS *d2i_X509_EXTENSIONS(X509_EXTENSIONS **a, const unsigned char **in, long len); int i2d_X509_EXTENSIONS(X509_EXTENSIONS *a, unsigned char **out); extern const ASN1_ITEM X509_EXTENSIONS_it;

X509_NAME_ENTRY *X509_NAME_ENTRY_new(void); void X509_NAME_ENTRY_free(X509_NAME_ENTRY *a); X509_NAME_ENTRY *d2i_X509_NAME_ENTRY(X509_NAME_ENTRY **a, const unsigned char **in, long len); int i2d_X509_NAME_ENTRY(X509_NAME_ENTRY *a, unsigned char **out); extern const ASN1_ITEM X509_NAME_ENTRY_it;

X509_NAME *X509_NAME_new(void); void X509_NAME_free(X509_NAME *a); X509_NAME *d2i_X509_NAME(X509_NAME **a, const unsigned char **in, long len); int i2d_X509_NAME(X509_NAME *a, unsigned char **out); extern const ASN1_ITEM X509_NAME_it;

int X509_NAME_set(X509_NAME **xn, X509_NAME *name);

X509_CINF *X509_CINF_new(void); void X509_CINF_free(X509_CINF *a); X509_CINF *d2i_X509_CINF(X509_CINF **a, const unsigned char **in, long len); int i2d_X509_CINF(X509_CINF *a, unsigned char **out); extern const ASN1_ITEM X509_CINF_it;

X509 *X509_new(void); void X509_free(X509 *a); X509 *d2i_X509(X509 **a, const unsigned char **in, long len); int i2d_X509(X509 *a, unsigned char **out); extern const ASN1_ITEM X509_it;
X509_CERT_AUX *X509_CERT_AUX_new(void); void X509_CERT_AUX_free(X509_CERT_AUX *a); X509_CERT_AUX *d2i_X509_CERT_AUX(X509_CERT_AUX **a, const unsigned char **in, long len); int i2d_X509_CERT_AUX(X509_CERT_AUX *a, unsigned char **out); extern const ASN1_ITEM X509_CERT_AUX_it;

X509_CERT_PAIR *X509_CERT_PAIR_new(void); void X509_CERT_PAIR_free(X509_CERT_PAIR *a); X509_CERT_PAIR *d2i_X509_CERT_PAIR(X509_CERT_PAIR **a, const unsigned char **in, long len); int i2d_X509_CERT_PAIR(X509_CERT_PAIR *a, unsigned char **out); extern const ASN1_ITEM X509_CERT_PAIR_it;

int X509_get_ex_new_index(long argl, void *argp, CRYPTO_EX_new *new_func,
                          CRYPTO_EX_dup *dup_func, CRYPTO_EX_free *free_func);
int X509_set_ex_data(X509 *r, int idx, void *arg);
void *X509_get_ex_data(X509 *r, int idx);
int i2d_X509_AUX(X509 *a, unsigned char **pp);
X509 *d2i_X509_AUX(X509 **a, const unsigned char **pp, long length);

int i2d_re_X509_tbs(X509 *x, unsigned char **pp);

void X509_get0_signature(ASN1_BIT_STRING **psig, X509_ALGOR **palg,
                         const X509 *x);
int X509_get_signature_nid(const X509 *x);

int X509_alias_set1(X509 *x, unsigned char *name, int len);
int X509_keyid_set1(X509 *x, unsigned char *id, int len);
unsigned char *X509_alias_get0(X509 *x, int *len);
unsigned char *X509_keyid_get0(X509 *x, int *len);
int (*X509_TRUST_set_default(int (*trust) (int, X509 *, int))) (int, X509 *,
                                                                int);
int X509_TRUST_set(int *t, int trust);
int X509_add1_trust_object(X509 *x, ASN1_OBJECT *obj);
int X509_add1_reject_object(X509 *x, ASN1_OBJECT *obj);
void X509_trust_clear(X509 *x);
void X509_reject_clear(X509 *x);

X509_REVOKED *X509_REVOKED_new(void); void X509_REVOKED_free(X509_REVOKED *a); X509_REVOKED *d2i_X509_REVOKED(X509_REVOKED **a, const unsigned char **in, long len); int i2d_X509_REVOKED(X509_REVOKED *a, unsigned char **out); extern const ASN1_ITEM X509_REVOKED_it;
X509_CRL_INFO *X509_CRL_INFO_new(void); void X509_CRL_INFO_free(X509_CRL_INFO *a); X509_CRL_INFO *d2i_X509_CRL_INFO(X509_CRL_INFO **a, const unsigned char **in, long len); int i2d_X509_CRL_INFO(X509_CRL_INFO *a, unsigned char **out); extern const ASN1_ITEM X509_CRL_INFO_it;
X509_CRL *X509_CRL_new(void); void X509_CRL_free(X509_CRL *a); X509_CRL *d2i_X509_CRL(X509_CRL **a, const unsigned char **in, long len); int i2d_X509_CRL(X509_CRL *a, unsigned char **out); extern const ASN1_ITEM X509_CRL_it;

int X509_CRL_add0_revoked(X509_CRL *crl, X509_REVOKED *rev);
int X509_CRL_get0_by_serial(X509_CRL *crl,
                            X509_REVOKED **ret, ASN1_INTEGER *serial);
int X509_CRL_get0_by_cert(X509_CRL *crl, X509_REVOKED **ret, X509 *x);

X509_PKEY *X509_PKEY_new(void);
void X509_PKEY_free(X509_PKEY *a);
int i2d_X509_PKEY(X509_PKEY *a, unsigned char **pp);
X509_PKEY *d2i_X509_PKEY(X509_PKEY **a, const unsigned char **pp,
                         long length);

NETSCAPE_SPKI *NETSCAPE_SPKI_new(void); void NETSCAPE_SPKI_free(NETSCAPE_SPKI *a); NETSCAPE_SPKI *d2i_NETSCAPE_SPKI(NETSCAPE_SPKI **a, const unsigned char **in, long len); int i2d_NETSCAPE_SPKI(NETSCAPE_SPKI *a, unsigned char **out); extern const ASN1_ITEM NETSCAPE_SPKI_it;
NETSCAPE_SPKAC *NETSCAPE_SPKAC_new(void); void NETSCAPE_SPKAC_free(NETSCAPE_SPKAC *a); NETSCAPE_SPKAC *d2i_NETSCAPE_SPKAC(NETSCAPE_SPKAC **a, const unsigned char **in, long len); int i2d_NETSCAPE_SPKAC(NETSCAPE_SPKAC *a, unsigned char **out); extern const ASN1_ITEM NETSCAPE_SPKAC_it;
NETSCAPE_CERT_SEQUENCE *NETSCAPE_CERT_SEQUENCE_new(void); void NETSCAPE_CERT_SEQUENCE_free(NETSCAPE_CERT_SEQUENCE *a); NETSCAPE_CERT_SEQUENCE *d2i_NETSCAPE_CERT_SEQUENCE(NETSCAPE_CERT_SEQUENCE **a, const unsigned char **in, long len); int i2d_NETSCAPE_CERT_SEQUENCE(NETSCAPE_CERT_SEQUENCE *a, unsigned char **out); extern const ASN1_ITEM NETSCAPE_CERT_SEQUENCE_it;


X509_INFO *X509_INFO_new(void);
void X509_INFO_free(X509_INFO *a);
char *X509_NAME_oneline(X509_NAME *a, char *buf, int size);

int ASN1_verify(i2d_of_void *i2d, X509_ALGOR *algor1,
                ASN1_BIT_STRING *signature, char *data, EVP_PKEY *pkey);

int ASN1_digest(i2d_of_void *i2d, const EVP_MD *type, char *data,
                unsigned char *md, unsigned int *len);

int ASN1_sign(i2d_of_void *i2d, X509_ALGOR *algor1,
              X509_ALGOR *algor2, ASN1_BIT_STRING *signature,
              char *data, EVP_PKEY *pkey, const EVP_MD *type);

int ASN1_item_digest(const ASN1_ITEM *it, const EVP_MD *type, void *data,
                     unsigned char *md, unsigned int *len);

int ASN1_item_verify(const ASN1_ITEM *it, X509_ALGOR *algor1,
                     ASN1_BIT_STRING *signature, void *data, EVP_PKEY *pkey);

int ASN1_item_sign(const ASN1_ITEM *it, X509_ALGOR *algor1,
                   X509_ALGOR *algor2, ASN1_BIT_STRING *signature, void *data,
                   EVP_PKEY *pkey, const EVP_MD *type);
int ASN1_item_sign_ctx(const ASN1_ITEM *it, X509_ALGOR *algor1,
                       X509_ALGOR *algor2, ASN1_BIT_STRING *signature,
                       void *asn, EVP_MD_CTX *ctx);


int X509_set_version(X509 *x, long version);
int X509_set_serialNumber(X509 *x, ASN1_INTEGER *serial);
ASN1_INTEGER *X509_get_serialNumber(X509 *x);
int X509_set_issuer_name(X509 *x, X509_NAME *name);
X509_NAME *X509_get_issuer_name(X509 *a);
int X509_set_subject_name(X509 *x, X509_NAME *name);
X509_NAME *X509_get_subject_name(X509 *a);
int X509_set_notBefore(X509 *x, const ASN1_TIME *tm);
int X509_set_notAfter(X509 *x, const ASN1_TIME *tm);
int X509_set_pubkey(X509 *x, EVP_PKEY *pkey);
EVP_PKEY *X509_get_pubkey(X509 *x);
ASN1_BIT_STRING *X509_get0_pubkey_bitstr(const X509 *x);
int X509_certificate_type(X509 *x, EVP_PKEY *pubkey );

int X509_REQ_set_version(X509_REQ *x, long version);
int X509_REQ_set_subject_name(X509_REQ *req, X509_NAME *name);
int X509_REQ_set_pubkey(X509_REQ *x, EVP_PKEY *pkey);
EVP_PKEY *X509_REQ_get_pubkey(X509_REQ *req);
int X509_REQ_extension_nid(int nid);
int *X509_REQ_get_extension_nids(void);
void X509_REQ_set_extension_nids(int *nids);
struct stack_st_X509_EXTENSION *X509_REQ_get_extensions(X509_REQ *req);
int X509_REQ_add_extensions_nid(X509_REQ *req, struct stack_st_X509_EXTENSION *exts,
                                int nid);
int X509_REQ_add_extensions(X509_REQ *req, struct stack_st_X509_EXTENSION *exts);
int X509_REQ_get_attr_count(const X509_REQ *req);
int X509_REQ_get_attr_by_NID(const X509_REQ *req, int nid, int lastpos);
int X509_REQ_get_attr_by_OBJ(const X509_REQ *req, ASN1_OBJECT *obj,
                             int lastpos);
X509_ATTRIBUTE *X509_REQ_get_attr(const X509_REQ *req, int loc);
X509_ATTRIBUTE *X509_REQ_delete_attr(X509_REQ *req, int loc);
int X509_REQ_add1_attr(X509_REQ *req, X509_ATTRIBUTE *attr);
int X509_REQ_add1_attr_by_OBJ(X509_REQ *req,
                              const ASN1_OBJECT *obj, int type,
                              const unsigned char *bytes, int len);
int X509_REQ_add1_attr_by_NID(X509_REQ *req,
                              int nid, int type,
                              const unsigned char *bytes, int len);
int X509_REQ_add1_attr_by_txt(X509_REQ *req,
                              const char *attrname, int type,
                              const unsigned char *bytes, int len);

int X509_CRL_set_version(X509_CRL *x, long version);
int X509_CRL_set_issuer_name(X509_CRL *x, X509_NAME *name);
int X509_CRL_set_lastUpdate(X509_CRL *x, const ASN1_TIME *tm);
int X509_CRL_set_nextUpdate(X509_CRL *x, const ASN1_TIME *tm);
int X509_CRL_sort(X509_CRL *crl);

int X509_REVOKED_set_serialNumber(X509_REVOKED *x, ASN1_INTEGER *serial);
int X509_REVOKED_set_revocationDate(X509_REVOKED *r, ASN1_TIME *tm);

X509_CRL *X509_CRL_diff(X509_CRL *base, X509_CRL *newer,
                        EVP_PKEY *skey, const EVP_MD *md, unsigned int flags);

int X509_REQ_check_private_key(X509_REQ *x509, EVP_PKEY *pkey);

int X509_check_private_key(X509 *x509, EVP_PKEY *pkey);
int X509_chain_check_suiteb(int *perror_depth,
                            X509 *x, struct stack_st_X509 *chain,
                            unsigned long flags);
int X509_CRL_check_suiteb(X509_CRL *crl, EVP_PKEY *pk, unsigned long flags);
struct stack_st_X509 *X509_chain_up_ref(struct stack_st_X509 *chain);

int X509_issuer_and_serial_cmp(const X509 *a, const X509 *b);
unsigned long X509_issuer_and_serial_hash(X509 *a);

int X509_issuer_name_cmp(const X509 *a, const X509 *b);
unsigned long X509_issuer_name_hash(X509 *a);

int X509_subject_name_cmp(const X509 *a, const X509 *b);
unsigned long X509_subject_name_hash(X509 *x);


unsigned long X509_issuer_name_hash_old(X509 *a);
unsigned long X509_subject_name_hash_old(X509 *x);


int X509_cmp(const X509 *a, const X509 *b);
int X509_NAME_cmp(const X509_NAME *a, const X509_NAME *b);
unsigned long X509_NAME_hash(X509_NAME *x);
unsigned long X509_NAME_hash_old(X509_NAME *x);

int X509_CRL_cmp(const X509_CRL *a, const X509_CRL *b);
int X509_CRL_match(const X509_CRL *a, const X509_CRL *b);

int X509_print_ex_fp(FILE *bp, X509 *x, unsigned long nmflag,
                     unsigned long cflag);
int X509_print_fp(FILE *bp, X509 *x);
int X509_CRL_print_fp(FILE *bp, X509_CRL *x);
int X509_REQ_print_fp(FILE *bp, X509_REQ *req);
int X509_NAME_print_ex_fp(FILE *fp, X509_NAME *nm, int indent,
                          unsigned long flags);



int X509_NAME_print(BIO *bp, X509_NAME *name, int obase);
int X509_NAME_print_ex(BIO *out, X509_NAME *nm, int indent,
                       unsigned long flags);
int X509_print_ex(BIO *bp, X509 *x, unsigned long nmflag,
                  unsigned long cflag);
int X509_print(BIO *bp, X509 *x);
int X509_ocspid_print(BIO *bp, X509 *x);
int X509_CERT_AUX_print(BIO *bp, X509_CERT_AUX *x, int indent);
int X509_CRL_print(BIO *bp, X509_CRL *x);
int X509_REQ_print_ex(BIO *bp, X509_REQ *x, unsigned long nmflag,
                      unsigned long cflag);
int X509_REQ_print(BIO *bp, X509_REQ *req);


int X509_NAME_entry_count(X509_NAME *name);
int X509_NAME_get_text_by_NID(X509_NAME *name, int nid, char *buf, int len);
int X509_NAME_get_text_by_OBJ(X509_NAME *name, ASN1_OBJECT *obj,
                              char *buf, int len);





int X509_NAME_get_index_by_NID(X509_NAME *name, int nid, int lastpos);
int X509_NAME_get_index_by_OBJ(X509_NAME *name, ASN1_OBJECT *obj,
                               int lastpos);
X509_NAME_ENTRY *X509_NAME_get_entry(X509_NAME *name, int loc);
X509_NAME_ENTRY *X509_NAME_delete_entry(X509_NAME *name, int loc);
int X509_NAME_add_entry(X509_NAME *name, X509_NAME_ENTRY *ne,
                        int loc, int set);
int X509_NAME_add_entry_by_OBJ(X509_NAME *name, ASN1_OBJECT *obj, int type,
                               unsigned char *bytes, int len, int loc,
                               int set);
int X509_NAME_add_entry_by_NID(X509_NAME *name, int nid, int type,
                               unsigned char *bytes, int len, int loc,
                               int set);
X509_NAME_ENTRY *X509_NAME_ENTRY_create_by_txt(X509_NAME_ENTRY **ne,
                                               const char *field, int type,
                                               const unsigned char *bytes,
                                               int len);
X509_NAME_ENTRY *X509_NAME_ENTRY_create_by_NID(X509_NAME_ENTRY **ne, int nid,
                                               int type, unsigned char *bytes,
                                               int len);
int X509_NAME_add_entry_by_txt(X509_NAME *name, const char *field, int type,
                               const unsigned char *bytes, int len, int loc,
                               int set);
X509_NAME_ENTRY *X509_NAME_ENTRY_create_by_OBJ(X509_NAME_ENTRY **ne,
                                               ASN1_OBJECT *obj, int type,
                                               const unsigned char *bytes,
                                               int len);
int X509_NAME_ENTRY_set_object(X509_NAME_ENTRY *ne, ASN1_OBJECT *obj);
int X509_NAME_ENTRY_set_data(X509_NAME_ENTRY *ne, int type,
                             const unsigned char *bytes, int len);
ASN1_OBJECT *X509_NAME_ENTRY_get_object(X509_NAME_ENTRY *ne);
ASN1_STRING *X509_NAME_ENTRY_get_data(X509_NAME_ENTRY *ne);

int X509v3_get_ext_count(const struct stack_st_X509_EXTENSION *x);
int X509v3_get_ext_by_NID(const struct stack_st_X509_EXTENSION *x,
                          int nid, int lastpos);
int X509v3_get_ext_by_OBJ(const struct stack_st_X509_EXTENSION *x,
                          ASN1_OBJECT *obj, int lastpos);
int X509v3_get_ext_by_critical(const struct stack_st_X509_EXTENSION *x,
                               int crit, int lastpos);
X509_EXTENSION *X509v3_get_ext(const struct stack_st_X509_EXTENSION *x, int loc);
X509_EXTENSION *X509v3_delete_ext(struct stack_st_X509_EXTENSION *x, int loc);
struct stack_st_X509_EXTENSION *X509v3_add_ext(struct stack_st_X509_EXTENSION **x,
                                         X509_EXTENSION *ex, int loc);

int X509_get_ext_count(X509 *x);
int X509_get_ext_by_NID(X509 *x, int nid, int lastpos);
int X509_get_ext_by_OBJ(X509 *x, ASN1_OBJECT *obj, int lastpos);
int X509_get_ext_by_critical(X509 *x, int crit, int lastpos);
X509_EXTENSION *X509_get_ext(X509 *x, int loc);
X509_EXTENSION *X509_delete_ext(X509 *x, int loc);
int X509_add_ext(X509 *x, X509_EXTENSION *ex, int loc);
void *X509_get_ext_d2i(X509 *x, int nid, int *crit, int *idx);
int X509_add1_ext_i2d(X509 *x, int nid, void *value, int crit,
                      unsigned long flags);

int X509_CRL_get_ext_count(X509_CRL *x);
int X509_CRL_get_ext_by_NID(X509_CRL *x, int nid, int lastpos);
int X509_CRL_get_ext_by_OBJ(X509_CRL *x, ASN1_OBJECT *obj, int lastpos);
int X509_CRL_get_ext_by_critical(X509_CRL *x, int crit, int lastpos);
X509_EXTENSION *X509_CRL_get_ext(X509_CRL *x, int loc);
X509_EXTENSION *X509_CRL_delete_ext(X509_CRL *x, int loc);
int X509_CRL_add_ext(X509_CRL *x, X509_EXTENSION *ex, int loc);
void *X509_CRL_get_ext_d2i(X509_CRL *x, int nid, int *crit, int *idx);
int X509_CRL_add1_ext_i2d(X509_CRL *x, int nid, void *value, int crit,
                          unsigned long flags);

int X509_REVOKED_get_ext_count(X509_REVOKED *x);
int X509_REVOKED_get_ext_by_NID(X509_REVOKED *x, int nid, int lastpos);
int X509_REVOKED_get_ext_by_OBJ(X509_REVOKED *x, ASN1_OBJECT *obj,
                                int lastpos);
int X509_REVOKED_get_ext_by_critical(X509_REVOKED *x, int crit, int lastpos);
X509_EXTENSION *X509_REVOKED_get_ext(X509_REVOKED *x, int loc);
X509_EXTENSION *X509_REVOKED_delete_ext(X509_REVOKED *x, int loc);
int X509_REVOKED_add_ext(X509_REVOKED *x, X509_EXTENSION *ex, int loc);
void *X509_REVOKED_get_ext_d2i(X509_REVOKED *x, int nid, int *crit, int *idx);
int X509_REVOKED_add1_ext_i2d(X509_REVOKED *x, int nid, void *value, int crit,
                              unsigned long flags);

X509_EXTENSION *X509_EXTENSION_create_by_NID(X509_EXTENSION **ex,
                                             int nid, int crit,
                                             ASN1_OCTET_STRING *data);
X509_EXTENSION *X509_EXTENSION_create_by_OBJ(X509_EXTENSION **ex,
                                             ASN1_OBJECT *obj, int crit,
                                             ASN1_OCTET_STRING *data);
int X509_EXTENSION_set_object(X509_EXTENSION *ex, ASN1_OBJECT *obj);
int X509_EXTENSION_set_critical(X509_EXTENSION *ex, int crit);
int X509_EXTENSION_set_data(X509_EXTENSION *ex, ASN1_OCTET_STRING *data);
ASN1_OBJECT *X509_EXTENSION_get_object(X509_EXTENSION *ex);
ASN1_OCTET_STRING *X509_EXTENSION_get_data(X509_EXTENSION *ne);
int X509_EXTENSION_get_critical(X509_EXTENSION *ex);

int X509at_get_attr_count(const struct stack_st_X509_ATTRIBUTE *x);
int X509at_get_attr_by_NID(const struct stack_st_X509_ATTRIBUTE *x, int nid,
                           int lastpos);
int X509at_get_attr_by_OBJ(const struct stack_st_X509_ATTRIBUTE *sk,
                           ASN1_OBJECT *obj, int lastpos);
X509_ATTRIBUTE *X509at_get_attr(const struct stack_st_X509_ATTRIBUTE *x, int loc);
X509_ATTRIBUTE *X509at_delete_attr(struct stack_st_X509_ATTRIBUTE *x, int loc);
struct stack_st_X509_ATTRIBUTE *X509at_add1_attr(struct stack_st_X509_ATTRIBUTE **x,
                                           X509_ATTRIBUTE *attr);
struct stack_st_X509_ATTRIBUTE *X509at_add1_attr_by_OBJ(struct stack_st_X509_ATTRIBUTE
                                                  **x, const ASN1_OBJECT *obj,
                                                  int type,
                                                  const unsigned char *bytes,
                                                  int len);
struct stack_st_X509_ATTRIBUTE *X509at_add1_attr_by_NID(struct stack_st_X509_ATTRIBUTE
                                                  **x, int nid, int type,
                                                  const unsigned char *bytes,
                                                  int len);
struct stack_st_X509_ATTRIBUTE *X509at_add1_attr_by_txt(struct stack_st_X509_ATTRIBUTE
                                                  **x, const char *attrname,
                                                  int type,
                                                  const unsigned char *bytes,
                                                  int len);
void *X509at_get0_data_by_OBJ(struct stack_st_X509_ATTRIBUTE *x, ASN1_OBJECT *obj,
                              int lastpos, int type);
X509_ATTRIBUTE *X509_ATTRIBUTE_create_by_NID(X509_ATTRIBUTE **attr, int nid,
                                             int atrtype, const void *data,
                                             int len);
X509_ATTRIBUTE *X509_ATTRIBUTE_create_by_OBJ(X509_ATTRIBUTE **attr,
                                             const ASN1_OBJECT *obj,
                                             int atrtype, const void *data,
                                             int len);
X509_ATTRIBUTE *X509_ATTRIBUTE_create_by_txt(X509_ATTRIBUTE **attr,
                                             const char *atrname, int type,
                                             const unsigned char *bytes,
                                             int len);
int X509_ATTRIBUTE_set1_object(X509_ATTRIBUTE *attr, const ASN1_OBJECT *obj);
int X509_ATTRIBUTE_set1_data(X509_ATTRIBUTE *attr, int attrtype,
                             const void *data, int len);
void *X509_ATTRIBUTE_get0_data(X509_ATTRIBUTE *attr, int idx, int atrtype,
                               void *data);
int X509_ATTRIBUTE_count(X509_ATTRIBUTE *attr);
ASN1_OBJECT *X509_ATTRIBUTE_get0_object(X509_ATTRIBUTE *attr);
ASN1_TYPE *X509_ATTRIBUTE_get0_type(X509_ATTRIBUTE *attr, int idx);

int EVP_PKEY_get_attr_count(const EVP_PKEY *key);
int EVP_PKEY_get_attr_by_NID(const EVP_PKEY *key, int nid, int lastpos);
int EVP_PKEY_get_attr_by_OBJ(const EVP_PKEY *key, ASN1_OBJECT *obj,
                             int lastpos);
X509_ATTRIBUTE *EVP_PKEY_get_attr(const EVP_PKEY *key, int loc);
X509_ATTRIBUTE *EVP_PKEY_delete_attr(EVP_PKEY *key, int loc);
int EVP_PKEY_add1_attr(EVP_PKEY *key, X509_ATTRIBUTE *attr);
int EVP_PKEY_add1_attr_by_OBJ(EVP_PKEY *key,
                              const ASN1_OBJECT *obj, int type,
                              const unsigned char *bytes, int len);
int EVP_PKEY_add1_attr_by_NID(EVP_PKEY *key,
                              int nid, int type,
                              const unsigned char *bytes, int len);
int EVP_PKEY_add1_attr_by_txt(EVP_PKEY *key,
                              const char *attrname, int type,
                              const unsigned char *bytes, int len);

int X509_verify_cert(X509_STORE_CTX *ctx);


X509 *X509_find_by_issuer_and_serial(struct stack_st_X509 *sk, X509_NAME *name,
                                     ASN1_INTEGER *serial);
X509 *X509_find_by_subject(struct stack_st_X509 *sk, X509_NAME *name);

PBEPARAM *PBEPARAM_new(void); void PBEPARAM_free(PBEPARAM *a); PBEPARAM *d2i_PBEPARAM(PBEPARAM **a, const unsigned char **in, long len); int i2d_PBEPARAM(PBEPARAM *a, unsigned char **out); extern const ASN1_ITEM PBEPARAM_it;
PBE2PARAM *PBE2PARAM_new(void); void PBE2PARAM_free(PBE2PARAM *a); PBE2PARAM *d2i_PBE2PARAM(PBE2PARAM **a, const unsigned char **in, long len); int i2d_PBE2PARAM(PBE2PARAM *a, unsigned char **out); extern const ASN1_ITEM PBE2PARAM_it;
PBKDF2PARAM *PBKDF2PARAM_new(void); void PBKDF2PARAM_free(PBKDF2PARAM *a); PBKDF2PARAM *d2i_PBKDF2PARAM(PBKDF2PARAM **a, const unsigned char **in, long len); int i2d_PBKDF2PARAM(PBKDF2PARAM *a, unsigned char **out); extern const ASN1_ITEM PBKDF2PARAM_it;

int PKCS5_pbe_set0_algor(X509_ALGOR *algor, int alg, int iter,
                         const unsigned char *salt, int saltlen);

X509_ALGOR *PKCS5_pbe_set(int alg, int iter,
                          const unsigned char *salt, int saltlen);
X509_ALGOR *PKCS5_pbe2_set(const EVP_CIPHER *cipher, int iter,
                           unsigned char *salt, int saltlen);
X509_ALGOR *PKCS5_pbe2_set_iv(const EVP_CIPHER *cipher, int iter,
                              unsigned char *salt, int saltlen,
                              unsigned char *aiv, int prf_nid);

X509_ALGOR *PKCS5_pbkdf2_set(int iter, unsigned char *salt, int saltlen,
                             int prf_nid, int keylen);



PKCS8_PRIV_KEY_INFO *PKCS8_PRIV_KEY_INFO_new(void); void PKCS8_PRIV_KEY_INFO_free(PKCS8_PRIV_KEY_INFO *a); PKCS8_PRIV_KEY_INFO *d2i_PKCS8_PRIV_KEY_INFO(PKCS8_PRIV_KEY_INFO **a, const unsigned char **in, long len); int i2d_PKCS8_PRIV_KEY_INFO(PKCS8_PRIV_KEY_INFO *a, unsigned char **out); extern const ASN1_ITEM PKCS8_PRIV_KEY_INFO_it;

EVP_PKEY *EVP_PKCS82PKEY(PKCS8_PRIV_KEY_INFO *p8);
PKCS8_PRIV_KEY_INFO *EVP_PKEY2PKCS8(EVP_PKEY *pkey);
PKCS8_PRIV_KEY_INFO *EVP_PKEY2PKCS8_broken(EVP_PKEY *pkey, int broken);
PKCS8_PRIV_KEY_INFO *PKCS8_set_broken(PKCS8_PRIV_KEY_INFO *p8, int broken);

int PKCS8_pkey_set0(PKCS8_PRIV_KEY_INFO *priv, ASN1_OBJECT *aobj,
                    int version, int ptype, void *pval,
                    unsigned char *penc, int penclen);
int PKCS8_pkey_get0(ASN1_OBJECT **ppkalg,
                    const unsigned char **pk, int *ppklen,
                    X509_ALGOR **pa, PKCS8_PRIV_KEY_INFO *p8);

int X509_PUBKEY_set0_param(X509_PUBKEY *pub, ASN1_OBJECT *aobj,
                           int ptype, void *pval,
                           unsigned char *penc, int penclen);
int X509_PUBKEY_get0_param(ASN1_OBJECT **ppkalg,
                           const unsigned char **pk, int *ppklen,
                           X509_ALGOR **pa, X509_PUBKEY *pub);

int X509_check_trust(X509 *x, int id, int flags);
int X509_TRUST_get_count(void);
X509_TRUST *X509_TRUST_get0(int idx);
int X509_TRUST_get_by_id(int id);
int X509_TRUST_add(int id, int flags, int (*ck) (X509_TRUST *, X509 *, int),
                   char *name, int arg1, void *arg2);
void X509_TRUST_cleanup(void);
int X509_TRUST_get_flags(X509_TRUST *xp);
char *X509_TRUST_get0_name(X509_TRUST *xp);
int X509_TRUST_get_trust(X509_TRUST *xp);






void ERR_load_X509_strings(void);
# 157 "/usr/include/openssl/ssl.h" 2 3 4





# 1 "/usr/include/openssl/pem.h" 1 3 4
# 62 "/usr/include/openssl/pem.h" 3 4
# 1 "/usr/include/openssl/e_os2.h" 1 3 4
# 56 "/usr/include/openssl/e_os2.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/openssl/opensslconf.h" 1 3 4
# 57 "/usr/include/openssl/e_os2.h" 2 3 4
# 63 "/usr/include/openssl/pem.h" 2 3 4
# 71 "/usr/include/openssl/pem.h" 3 4
# 1 "/usr/include/openssl/pem2.h" 1 3 4
# 72 "/usr/include/openssl/pem.h" 2 3 4
# 145 "/usr/include/openssl/pem.h" 3 4
typedef struct PEM_Encode_Seal_st {
    EVP_ENCODE_CTX encode;
    EVP_MD_CTX md;
    EVP_CIPHER_CTX cipher;
} PEM_ENCODE_SEAL_CTX;







typedef struct pem_recip_st {
    char *name;
    X509_NAME *dn;
    int cipher;
    int key_enc;

} PEM_USER;

typedef struct pem_ctx_st {
    int type;
    struct {
        int version;
        int mode;
    } proc_type;

    char *domain;

    struct {
        int cipher;



    } DEK_info;

    PEM_USER *originator;

    int num_recipient;
    PEM_USER **recipient;



    EVP_MD *md;

    int md_enc;
    int md_len;
    char *md_data;

    EVP_CIPHER *dec;
    int key_len;
    unsigned char *key;




    int data_enc;
    int data_len;
    unsigned char *data;
} PEM_CTX;
# 389 "/usr/include/openssl/pem.h" 3 4
typedef int pem_password_cb (char *buf, int size, int rwflag, void *userdata);





int PEM_get_EVP_CIPHER_INFO(char *header, EVP_CIPHER_INFO *cipher);
int PEM_do_header(EVP_CIPHER_INFO *cipher, unsigned char *data, long *len,
                  pem_password_cb *callback, void *u);


int PEM_read_bio(BIO *bp, char **name, char **header,
                 unsigned char **data, long *len);
int PEM_write_bio(BIO *bp, const char *name, const char *hdr,
                  const unsigned char *data, long len);
int PEM_bytes_read_bio(unsigned char **pdata, long *plen, char **pnm,
                       const char *name, BIO *bp, pem_password_cb *cb,
                       void *u);
void *PEM_ASN1_read_bio(d2i_of_void *d2i, const char *name, BIO *bp, void **x,
                        pem_password_cb *cb, void *u);
int PEM_ASN1_write_bio(i2d_of_void *i2d, const char *name, BIO *bp, void *x,
                       const EVP_CIPHER *enc, unsigned char *kstr, int klen,
                       pem_password_cb *cb, void *u);

struct stack_st_X509_INFO *PEM_X509_INFO_read_bio(BIO *bp, struct stack_st_X509_INFO *sk,
                                            pem_password_cb *cb, void *u);
int PEM_X509_INFO_write_bio(BIO *bp, X509_INFO *xi, EVP_CIPHER *enc,
                            unsigned char *kstr, int klen,
                            pem_password_cb *cd, void *u);


int PEM_read(FILE *fp, char **name, char **header,
             unsigned char **data, long *len);
int PEM_write(FILE *fp, const char *name, const char *hdr,
              const unsigned char *data, long len);
void *PEM_ASN1_read(d2i_of_void *d2i, const char *name, FILE *fp, void **x,
                    pem_password_cb *cb, void *u);
int PEM_ASN1_write(i2d_of_void *i2d, const char *name, FILE *fp,
                   void *x, const EVP_CIPHER *enc, unsigned char *kstr,
                   int klen, pem_password_cb *callback, void *u);
struct stack_st_X509_INFO *PEM_X509_INFO_read(FILE *fp, struct stack_st_X509_INFO *sk,
                                        pem_password_cb *cb, void *u);

int PEM_SealInit(PEM_ENCODE_SEAL_CTX *ctx, EVP_CIPHER *type,
                 EVP_MD *md_type, unsigned char **ek, int *ekl,
                 unsigned char *iv, EVP_PKEY **pubk, int npubk);
void PEM_SealUpdate(PEM_ENCODE_SEAL_CTX *ctx, unsigned char *out, int *outl,
                    unsigned char *in, int inl);
int PEM_SealFinal(PEM_ENCODE_SEAL_CTX *ctx, unsigned char *sig, int *sigl,
                  unsigned char *out, int *outl, EVP_PKEY *priv);

void PEM_SignInit(EVP_MD_CTX *ctx, EVP_MD *type);
void PEM_SignUpdate(EVP_MD_CTX *ctx, unsigned char *d, unsigned int cnt);
int PEM_SignFinal(EVP_MD_CTX *ctx, unsigned char *sigret,
                  unsigned int *siglen, EVP_PKEY *pkey);

int PEM_def_callback(char *buf, int num, int w, void *key);
void PEM_proc_type(char *buf, int type);
void PEM_dek_info(char *buf, const char *type, int len, char *str);



X509 *PEM_read_bio_X509(BIO *bp, X509 **x, pem_password_cb *cb, void *u); X509 *PEM_read_X509(FILE *fp, X509 **x, pem_password_cb *cb, void *u); int PEM_write_bio_X509(BIO *bp, X509 *x); int PEM_write_X509(FILE *fp, X509 *x);
X509 *PEM_read_bio_X509_AUX(BIO *bp, X509 **x, pem_password_cb *cb, void *u); X509 *PEM_read_X509_AUX(FILE *fp, X509 **x, pem_password_cb *cb, void *u); int PEM_write_bio_X509_AUX(BIO *bp, X509 *x); int PEM_write_X509_AUX(FILE *fp, X509 *x);
X509_CERT_PAIR *PEM_read_bio_X509_CERT_PAIR(BIO *bp, X509_CERT_PAIR **x, pem_password_cb *cb, void *u); X509_CERT_PAIR *PEM_read_X509_CERT_PAIR(FILE *fp, X509_CERT_PAIR **x, pem_password_cb *cb, void *u); int PEM_write_bio_X509_CERT_PAIR(BIO *bp, X509_CERT_PAIR *x); int PEM_write_X509_CERT_PAIR(FILE *fp, X509_CERT_PAIR *x);
X509_REQ *PEM_read_bio_X509_REQ(BIO *bp, X509_REQ **x, pem_password_cb *cb, void *u); X509_REQ *PEM_read_X509_REQ(FILE *fp, X509_REQ **x, pem_password_cb *cb, void *u); int PEM_write_bio_X509_REQ(BIO *bp, X509_REQ *x); int PEM_write_X509_REQ(FILE *fp, X509_REQ *x);
int PEM_write_bio_X509_REQ_NEW(BIO *bp, X509_REQ *x); int PEM_write_X509_REQ_NEW(FILE *fp, X509_REQ *x);
X509_CRL *PEM_read_bio_X509_CRL(BIO *bp, X509_CRL **x, pem_password_cb *cb, void *u); X509_CRL *PEM_read_X509_CRL(FILE *fp, X509_CRL **x, pem_password_cb *cb, void *u); int PEM_write_bio_X509_CRL(BIO *bp, X509_CRL *x); int PEM_write_X509_CRL(FILE *fp, X509_CRL *x);
PKCS7 *PEM_read_bio_PKCS7(BIO *bp, PKCS7 **x, pem_password_cb *cb, void *u); PKCS7 *PEM_read_PKCS7(FILE *fp, PKCS7 **x, pem_password_cb *cb, void *u); int PEM_write_bio_PKCS7(BIO *bp, PKCS7 *x); int PEM_write_PKCS7(FILE *fp, PKCS7 *x);
NETSCAPE_CERT_SEQUENCE *PEM_read_bio_NETSCAPE_CERT_SEQUENCE(BIO *bp, NETSCAPE_CERT_SEQUENCE **x, pem_password_cb *cb, void *u); NETSCAPE_CERT_SEQUENCE *PEM_read_NETSCAPE_CERT_SEQUENCE(FILE *fp, NETSCAPE_CERT_SEQUENCE **x, pem_password_cb *cb, void *u); int PEM_write_bio_NETSCAPE_CERT_SEQUENCE(BIO *bp, NETSCAPE_CERT_SEQUENCE *x); int PEM_write_NETSCAPE_CERT_SEQUENCE(FILE *fp, NETSCAPE_CERT_SEQUENCE *x);
X509_SIG *PEM_read_bio_PKCS8(BIO *bp, X509_SIG **x, pem_password_cb *cb, void *u); X509_SIG *PEM_read_PKCS8(FILE *fp, X509_SIG **x, pem_password_cb *cb, void *u); int PEM_write_bio_PKCS8(BIO *bp, X509_SIG *x); int PEM_write_PKCS8(FILE *fp, X509_SIG *x);
PKCS8_PRIV_KEY_INFO *PEM_read_bio_PKCS8_PRIV_KEY_INFO(BIO *bp, PKCS8_PRIV_KEY_INFO **x, pem_password_cb *cb, void *u); PKCS8_PRIV_KEY_INFO *PEM_read_PKCS8_PRIV_KEY_INFO(FILE *fp, PKCS8_PRIV_KEY_INFO **x, pem_password_cb *cb, void *u); int PEM_write_bio_PKCS8_PRIV_KEY_INFO(BIO *bp, PKCS8_PRIV_KEY_INFO *x); int PEM_write_PKCS8_PRIV_KEY_INFO(FILE *fp, PKCS8_PRIV_KEY_INFO *x);

RSA *PEM_read_bio_RSAPrivateKey(BIO *bp, RSA **x, pem_password_cb *cb, void *u); RSA *PEM_read_RSAPrivateKey(FILE *fp, RSA **x, pem_password_cb *cb, void *u); int PEM_write_bio_RSAPrivateKey(BIO *bp, RSA *x, const EVP_CIPHER *enc, unsigned char *kstr, int klen, pem_password_cb *cb, void *u); int PEM_write_RSAPrivateKey(FILE *fp, RSA *x, const EVP_CIPHER *enc, unsigned char *kstr, int klen, pem_password_cb *cb, void *u);
RSA *PEM_read_bio_RSAPublicKey(BIO *bp, RSA **x, pem_password_cb *cb, void *u); RSA *PEM_read_RSAPublicKey(FILE *fp, RSA **x, pem_password_cb *cb, void *u); int PEM_write_bio_RSAPublicKey(BIO *bp, const RSA *x); int PEM_write_RSAPublicKey(FILE *fp, const RSA *x);
RSA *PEM_read_bio_RSA_PUBKEY(BIO *bp, RSA **x, pem_password_cb *cb, void *u); RSA *PEM_read_RSA_PUBKEY(FILE *fp, RSA **x, pem_password_cb *cb, void *u); int PEM_write_bio_RSA_PUBKEY(BIO *bp, RSA *x); int PEM_write_RSA_PUBKEY(FILE *fp, RSA *x);


DSA *PEM_read_bio_DSAPrivateKey(BIO *bp, DSA **x, pem_password_cb *cb, void *u); DSA *PEM_read_DSAPrivateKey(FILE *fp, DSA **x, pem_password_cb *cb, void *u); int PEM_write_bio_DSAPrivateKey(BIO *bp, DSA *x, const EVP_CIPHER *enc, unsigned char *kstr, int klen, pem_password_cb *cb, void *u); int PEM_write_DSAPrivateKey(FILE *fp, DSA *x, const EVP_CIPHER *enc, unsigned char *kstr, int klen, pem_password_cb *cb, void *u);
DSA *PEM_read_bio_DSA_PUBKEY(BIO *bp, DSA **x, pem_password_cb *cb, void *u); DSA *PEM_read_DSA_PUBKEY(FILE *fp, DSA **x, pem_password_cb *cb, void *u); int PEM_write_bio_DSA_PUBKEY(BIO *bp, DSA *x); int PEM_write_DSA_PUBKEY(FILE *fp, DSA *x);
DSA *PEM_read_bio_DSAparams(BIO *bp, DSA **x, pem_password_cb *cb, void *u); DSA *PEM_read_DSAparams(FILE *fp, DSA **x, pem_password_cb *cb, void *u); int PEM_write_bio_DSAparams(BIO *bp, const DSA *x); int PEM_write_DSAparams(FILE *fp, const DSA *x);


EC_GROUP *PEM_read_bio_ECPKParameters(BIO *bp, EC_GROUP **x, pem_password_cb *cb, void *u); EC_GROUP *PEM_read_ECPKParameters(FILE *fp, EC_GROUP **x, pem_password_cb *cb, void *u); int PEM_write_bio_ECPKParameters(BIO *bp, const EC_GROUP *x); int PEM_write_ECPKParameters(FILE *fp, const EC_GROUP *x);
EC_KEY *PEM_read_bio_ECPrivateKey(BIO *bp, EC_KEY **x, pem_password_cb *cb, void *u); EC_KEY *PEM_read_ECPrivateKey(FILE *fp, EC_KEY **x, pem_password_cb *cb, void *u); int PEM_write_bio_ECPrivateKey(BIO *bp, EC_KEY *x, const EVP_CIPHER *enc, unsigned char *kstr, int klen, pem_password_cb *cb, void *u); int PEM_write_ECPrivateKey(FILE *fp, EC_KEY *x, const EVP_CIPHER *enc, unsigned char *kstr, int klen, pem_password_cb *cb, void *u);
EC_KEY *PEM_read_bio_EC_PUBKEY(BIO *bp, EC_KEY **x, pem_password_cb *cb, void *u); EC_KEY *PEM_read_EC_PUBKEY(FILE *fp, EC_KEY **x, pem_password_cb *cb, void *u); int PEM_write_bio_EC_PUBKEY(BIO *bp, EC_KEY *x); int PEM_write_EC_PUBKEY(FILE *fp, EC_KEY *x);


DH *PEM_read_bio_DHparams(BIO *bp, DH **x, pem_password_cb *cb, void *u); DH *PEM_read_DHparams(FILE *fp, DH **x, pem_password_cb *cb, void *u); int PEM_write_bio_DHparams(BIO *bp, const DH *x); int PEM_write_DHparams(FILE *fp, const DH *x);
int PEM_write_bio_DHxparams(BIO *bp, const DH *x); int PEM_write_DHxparams(FILE *fp, const DH *x);

EVP_PKEY *PEM_read_bio_PrivateKey(BIO *bp, EVP_PKEY **x, pem_password_cb *cb, void *u); EVP_PKEY *PEM_read_PrivateKey(FILE *fp, EVP_PKEY **x, pem_password_cb *cb, void *u); int PEM_write_bio_PrivateKey(BIO *bp, EVP_PKEY *x, const EVP_CIPHER *enc, unsigned char *kstr, int klen, pem_password_cb *cb, void *u); int PEM_write_PrivateKey(FILE *fp, EVP_PKEY *x, const EVP_CIPHER *enc, unsigned char *kstr, int klen, pem_password_cb *cb, void *u);
EVP_PKEY *PEM_read_bio_PUBKEY(BIO *bp, EVP_PKEY **x, pem_password_cb *cb, void *u); EVP_PKEY *PEM_read_PUBKEY(FILE *fp, EVP_PKEY **x, pem_password_cb *cb, void *u); int PEM_write_bio_PUBKEY(BIO *bp, EVP_PKEY *x); int PEM_write_PUBKEY(FILE *fp, EVP_PKEY *x);

int PEM_write_bio_PKCS8PrivateKey_nid(BIO *bp, EVP_PKEY *x, int nid,
                                      char *kstr, int klen,
                                      pem_password_cb *cb, void *u);
int PEM_write_bio_PKCS8PrivateKey(BIO *, EVP_PKEY *, const EVP_CIPHER *,
                                  char *, int, pem_password_cb *, void *);
int i2d_PKCS8PrivateKey_bio(BIO *bp, EVP_PKEY *x, const EVP_CIPHER *enc,
                            char *kstr, int klen,
                            pem_password_cb *cb, void *u);
int i2d_PKCS8PrivateKey_nid_bio(BIO *bp, EVP_PKEY *x, int nid,
                                char *kstr, int klen,
                                pem_password_cb *cb, void *u);
EVP_PKEY *d2i_PKCS8PrivateKey_bio(BIO *bp, EVP_PKEY **x, pem_password_cb *cb,
                                  void *u);

int i2d_PKCS8PrivateKey_fp(FILE *fp, EVP_PKEY *x, const EVP_CIPHER *enc,
                           char *kstr, int klen,
                           pem_password_cb *cb, void *u);
int i2d_PKCS8PrivateKey_nid_fp(FILE *fp, EVP_PKEY *x, int nid,
                               char *kstr, int klen,
                               pem_password_cb *cb, void *u);
int PEM_write_PKCS8PrivateKey_nid(FILE *fp, EVP_PKEY *x, int nid,
                                  char *kstr, int klen,
                                  pem_password_cb *cb, void *u);

EVP_PKEY *d2i_PKCS8PrivateKey_fp(FILE *fp, EVP_PKEY **x, pem_password_cb *cb,
                                 void *u);

int PEM_write_PKCS8PrivateKey(FILE *fp, EVP_PKEY *x, const EVP_CIPHER *enc,
                              char *kstr, int klen, pem_password_cb *cd,
                              void *u);

EVP_PKEY *PEM_read_bio_Parameters(BIO *bp, EVP_PKEY **x);
int PEM_write_bio_Parameters(BIO *bp, EVP_PKEY *x);

EVP_PKEY *b2i_PrivateKey(const unsigned char **in, long length);
EVP_PKEY *b2i_PublicKey(const unsigned char **in, long length);
EVP_PKEY *b2i_PrivateKey_bio(BIO *in);
EVP_PKEY *b2i_PublicKey_bio(BIO *in);
int i2b_PrivateKey_bio(BIO *out, EVP_PKEY *pk);
int i2b_PublicKey_bio(BIO *out, EVP_PKEY *pk);

EVP_PKEY *b2i_PVK_bio(BIO *in, pem_password_cb *cb, void *u);
int i2b_PVK_bio(BIO *out, EVP_PKEY *pk, int enclevel,
                pem_password_cb *cb, void *u);







void ERR_load_PEM_strings(void);
# 163 "/usr/include/openssl/ssl.h" 2 3 4
# 1 "/usr/include/openssl/hmac.h" 1 3 4
# 61 "/usr/include/openssl/hmac.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/openssl/opensslconf.h" 1 3 4
# 62 "/usr/include/openssl/hmac.h" 2 3 4
# 75 "/usr/include/openssl/hmac.h" 3 4
typedef struct hmac_ctx_st {
    const EVP_MD *md;
    EVP_MD_CTX md_ctx;
    EVP_MD_CTX i_ctx;
    EVP_MD_CTX o_ctx;
    unsigned int key_length;
    unsigned char key[128];
} HMAC_CTX;



void HMAC_CTX_init(HMAC_CTX *ctx);
void HMAC_CTX_cleanup(HMAC_CTX *ctx);





int HMAC_Init(HMAC_CTX *ctx, const void *key, int len, const EVP_MD *md);
int HMAC_Init_ex(HMAC_CTX *ctx, const void *key, int len,
                 const EVP_MD *md, ENGINE *impl);
int HMAC_Update(HMAC_CTX *ctx, const unsigned char *data, size_t len);
int HMAC_Final(HMAC_CTX *ctx, unsigned char *md, unsigned int *len);
unsigned char *HMAC(const EVP_MD *evp_md, const void *key, int key_len,
                    const unsigned char *d, size_t n, unsigned char *md,
                    unsigned int *md_len);
int HMAC_CTX_copy(HMAC_CTX *dctx, HMAC_CTX *sctx);

void HMAC_CTX_set_flags(HMAC_CTX *ctx, unsigned long flags);
# 164 "/usr/include/openssl/ssl.h" 2 3 4

# 1 "/usr/include/openssl/kssl.h" 1 3 4
# 67 "/usr/include/openssl/kssl.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/openssl/opensslconf.h" 1 3 4
# 68 "/usr/include/openssl/kssl.h" 2 3 4
# 166 "/usr/include/openssl/ssl.h" 2 3 4
# 372 "/usr/include/openssl/ssl.h" 3 4
typedef struct ssl_st *ssl_crock_st;
typedef struct tls_session_ticket_ext_st TLS_SESSION_TICKET_EXT;
typedef struct ssl_method_st SSL_METHOD;
typedef struct ssl_cipher_st SSL_CIPHER;
typedef struct ssl_session_st SSL_SESSION;
typedef struct tls_sigalgs_st TLS_SIGALGS;
typedef struct ssl_conf_ctx_st SSL_CONF_CTX;

struct stack_st_SSL_CIPHER { _STACK stack; };


typedef struct srtp_protection_profile_st {
    const char *name;
    unsigned long id;
} SRTP_PROTECTION_PROFILE;

struct stack_st_SRTP_PROTECTION_PROFILE { _STACK stack; };

typedef int (*tls_session_ticket_ext_cb_fn) (SSL *s,
                                             const unsigned char *data,
                                             int len, void *arg);
typedef int (*tls_session_secret_cb_fn) (SSL *s, void *secret,
                                         int *secret_len,
                                         struct stack_st_SSL_CIPHER *peer_ciphers,
                                         SSL_CIPHER **cipher, void *arg);





typedef int (*custom_ext_add_cb) (SSL *s, unsigned int ext_type,
                                  const unsigned char **out,
                                  size_t *outlen, int *al, void *add_arg);

typedef void (*custom_ext_free_cb) (SSL *s, unsigned int ext_type,
                                    const unsigned char *out, void *add_arg);

typedef int (*custom_ext_parse_cb) (SSL *s, unsigned int ext_type,
                                    const unsigned char *in,
                                    size_t inlen, int *al, void *parse_arg);






struct ssl_cipher_st {
    int valid;
    const char *name;
    unsigned long id;




    unsigned long algorithm_mkey;
    unsigned long algorithm_auth;
    unsigned long algorithm_enc;
    unsigned long algorithm_mac;
    unsigned long algorithm_ssl;
    unsigned long algo_strength;
    unsigned long algorithm2;
    int strength_bits;
    int alg_bits;
};


struct ssl_method_st {
    int version;
    int (*ssl_new) (SSL *s);
    void (*ssl_clear) (SSL *s);
    void (*ssl_free) (SSL *s);
    int (*ssl_accept) (SSL *s);
    int (*ssl_connect) (SSL *s);
    int (*ssl_read) (SSL *s, void *buf, int len);
    int (*ssl_peek) (SSL *s, void *buf, int len);
    int (*ssl_write) (SSL *s, const void *buf, int len);
    int (*ssl_shutdown) (SSL *s);
    int (*ssl_renegotiate) (SSL *s);
    int (*ssl_renegotiate_check) (SSL *s);
    long (*ssl_get_message) (SSL *s, int st1, int stn, int mt, long
                             max, int *ok);
    int (*ssl_read_bytes) (SSL *s, int type, unsigned char *buf, int len,
                           int peek);
    int (*ssl_write_bytes) (SSL *s, int type, const void *buf_, int len);
    int (*ssl_dispatch_alert) (SSL *s);
    long (*ssl_ctrl) (SSL *s, int cmd, long larg, void *parg);
    long (*ssl_ctx_ctrl) (SSL_CTX *ctx, int cmd, long larg, void *parg);
    const SSL_CIPHER *(*get_cipher_by_char) (const unsigned char *ptr);
    int (*put_cipher_by_char) (const SSL_CIPHER *cipher, unsigned char *ptr);
    int (*ssl_pending) (const SSL *s);
    int (*num_ciphers) (void);
    const SSL_CIPHER *(*get_cipher) (unsigned ncipher);
    const struct ssl_method_st *(*get_ssl_method) (int version);
    long (*get_timeout) (void);
    struct ssl3_enc_method *ssl3_enc;
    int (*ssl_version) (void);
    long (*ssl_callback_ctrl) (SSL *s, int cb_id, void (*fp) (void));
    long (*ssl_ctx_callback_ctrl) (SSL_CTX *s, int cb_id, void (*fp) (void));
};
# 498 "/usr/include/openssl/ssl.h" 3 4
struct ssl_session_st {
    int ssl_version;


    unsigned int key_arg_length;
    unsigned char key_arg[8];
    int master_key_length;
    unsigned char master_key[48];

    unsigned int session_id_length;
    unsigned char session_id[32];





    unsigned int sid_ctx_length;
    unsigned char sid_ctx[32];





    char *psk_identity_hint;
    char *psk_identity;






    int not_resumable;

    struct sess_cert_st *sess_cert;






    X509 *peer;




    long verify_result;
    int references;
    long timeout;
    long time;
    unsigned int compress_meth;
    const SSL_CIPHER *cipher;
    unsigned long cipher_id;

    struct stack_st_SSL_CIPHER *ciphers;
    CRYPTO_EX_DATA ex_data;




    struct ssl_session_st *prev, *next;

    char *tlsext_hostname;

    size_t tlsext_ecpointformatlist_length;
    unsigned char *tlsext_ecpointformatlist;
    size_t tlsext_ellipticcurvelist_length;
    unsigned char *tlsext_ellipticcurvelist;


    unsigned char *tlsext_tick;
    size_t tlsext_ticklen;
    long tlsext_tick_lifetime_hint;


    char *srp_username;

};
# 834 "/usr/include/openssl/ssl.h" 3 4
void SSL_CTX_set_msg_callback(SSL_CTX *ctx,
                              void (*cb) (int write_p, int version,
                                          int content_type, const void *buf,
                                          size_t len, SSL *ssl, void *arg));
void SSL_set_msg_callback(SSL *ssl,
                          void (*cb) (int write_p, int version,
                                      int content_type, const void *buf,
                                      size_t len, SSL *ssl, void *arg));







typedef struct srp_ctx_st {

    void *SRP_cb_arg;

    int (*TLS_ext_srp_username_callback) (SSL *, int *, void *);

    int (*SRP_verify_param_callback) (SSL *, void *);

    char *(*SRP_give_srp_client_pwd_callback) (SSL *, void *);
    char *login;
    BIGNUM *N, *g, *s, *B, *A;
    BIGNUM *a, *b, *v;
    char *info;
    int strength;
    unsigned long srp_Mask;
} SRP_CTX;




int SSL_SRP_CTX_init(SSL *s);
int SSL_CTX_SRP_CTX_init(SSL_CTX *ctx);
int SSL_SRP_CTX_free(SSL *ctx);
int SSL_CTX_SRP_CTX_free(SSL_CTX *ctx);
int SSL_srp_server_param_with_username(SSL *s, int *ad);
int SRP_generate_server_master_secret(SSL *s, unsigned char *master_key);
int SRP_Calc_A_param(SSL *s);
int SRP_generate_client_master_secret(SSL *s, unsigned char *master_key);
# 905 "/usr/include/openssl/ssl.h" 3 4
typedef int (*GEN_SESSION_CB) (const SSL *ssl, unsigned char *id,
                               unsigned int *id_len);

typedef struct ssl_comp_st SSL_COMP;



struct ssl_comp_st {
    int id;
    const char *name;

    COMP_METHOD *method;



};

struct stack_st_SSL_COMP { _STACK stack; };
struct lhash_st_SSL_SESSION { int dummy; };

struct ssl_ctx_st {
    const SSL_METHOD *method;
    struct stack_st_SSL_CIPHER *cipher_list;

    struct stack_st_SSL_CIPHER *cipher_list_by_id;
    struct x509_store_st *cert_store;
    struct lhash_st_SSL_SESSION *sessions;




    unsigned long session_cache_size;
    struct ssl_session_st *session_cache_head;
    struct ssl_session_st *session_cache_tail;





    int session_cache_mode;





    long session_timeout;
# 960 "/usr/include/openssl/ssl.h" 3 4
    int (*new_session_cb) (struct ssl_st *ssl, SSL_SESSION *sess);
    void (*remove_session_cb) (struct ssl_ctx_st *ctx, SSL_SESSION *sess);
    SSL_SESSION *(*get_session_cb) (struct ssl_st *ssl,
                                    unsigned char *data, int len, int *copy);
    struct {
        int sess_connect;
        int sess_connect_renegotiate;
        int sess_connect_good;
        int sess_accept;
        int sess_accept_renegotiate;
        int sess_accept_good;
        int sess_miss;
        int sess_timeout;
        int sess_cache_full;
        int sess_hit;
        int sess_cb_hit;




    } stats;

    int references;


    int (*app_verify_callback) (X509_STORE_CTX *, void *);
    void *app_verify_arg;






    pem_password_cb *default_passwd_callback;


    void *default_passwd_callback_userdata;


    int (*client_cert_cb) (SSL *ssl, X509 **x509, EVP_PKEY **pkey);


    int (*app_gen_cookie_cb) (SSL *ssl, unsigned char *cookie,
                              unsigned int *cookie_len);


    int (*app_verify_cookie_cb) (SSL *ssl, unsigned char *cookie,
                                 unsigned int cookie_len);

    CRYPTO_EX_DATA ex_data;

    const EVP_MD *rsa_md5;
    const EVP_MD *md5;
    const EVP_MD *sha1;

    struct stack_st_X509 *extra_certs;
    struct stack_st_SSL_COMP *comp_methods;




    void (*info_callback) (const SSL *ssl, int type, int val);


    struct stack_st_X509_NAME *client_CA;






    unsigned long options;
    unsigned long mode;
    long max_cert_list;

    struct cert_st *cert;
    int read_ahead;


    void (*msg_callback) (int write_p, int version, int content_type,
                          const void *buf, size_t len, SSL *ssl, void *arg);
    void *msg_callback_arg;

    int verify_mode;
    unsigned int sid_ctx_length;
    unsigned char sid_ctx[32];

    int (*default_verify_callback) (int ok, X509_STORE_CTX *ctx);


    GEN_SESSION_CB generate_session_id;

    X509_VERIFY_PARAM *param;






    int quiet_shutdown;





    unsigned int max_send_fragment;





    ENGINE *client_cert_engine;




    int (*tlsext_servername_callback) (SSL *, int *, void *);
    void *tlsext_servername_arg;

    unsigned char tlsext_tick_key_name[16];
    unsigned char tlsext_tick_hmac_key[16];
    unsigned char tlsext_tick_aes_key[16];

    int (*tlsext_ticket_key_cb) (SSL *ssl,
                                 unsigned char *name, unsigned char *iv,
                                 EVP_CIPHER_CTX *ectx,
                                 HMAC_CTX *hctx, int enc);



    int (*tlsext_status_cb) (SSL *ssl, void *arg);
    void *tlsext_status_arg;


    int (*tlsext_opaque_prf_input_callback) (SSL *, void *peerinput,
                                             size_t len, void *arg);
    void *tlsext_opaque_prf_input_callback_arg;



    char *psk_identity_hint;
    unsigned int (*psk_client_callback) (SSL *ssl, const char *hint,
                                         char *identity,
                                         unsigned int max_identity_len,
                                         unsigned char *psk,
                                         unsigned int max_psk_len);
    unsigned int (*psk_server_callback) (SSL *ssl, const char *identity,
                                         unsigned char *psk,
                                         unsigned int max_psk_len);




    unsigned int freelist_max_len;
    struct ssl3_buf_freelist_st *wbuf_freelist;
    struct ssl3_buf_freelist_st *rbuf_freelist;


    SRP_CTX srp_ctx;
# 1131 "/usr/include/openssl/ssl.h" 3 4
    int (*next_protos_advertised_cb) (SSL *s, const unsigned char **buf,
                                      unsigned int *len, void *arg);
    void *next_protos_advertised_cb_arg;




    int (*next_proto_select_cb) (SSL *s, unsigned char **out,
                                 unsigned char *outlen,
                                 const unsigned char *in,
                                 unsigned int inlen, void *arg);
    void *next_proto_select_cb_arg;


    struct stack_st_SRTP_PROTECTION_PROFILE *srtp_profiles;
# 1162 "/usr/include/openssl/ssl.h" 3 4
    int (*alpn_select_cb) (SSL *s,
                           const unsigned char **out,
                           unsigned char *outlen,
                           const unsigned char *in,
                           unsigned int inlen, void *arg);
    void *alpn_select_cb_arg;





    unsigned char *alpn_client_proto_list;
    unsigned alpn_client_proto_list_len;



    size_t tlsext_ecpointformatlist_length;
    unsigned char *tlsext_ecpointformatlist;
    size_t tlsext_ellipticcurvelist_length;
    unsigned char *tlsext_ellipticcurvelist;


};
# 1199 "/usr/include/openssl/ssl.h" 3 4
struct lhash_st_SSL_SESSION *SSL_CTX_sessions(SSL_CTX *ctx);
# 1225 "/usr/include/openssl/ssl.h" 3 4
void SSL_CTX_sess_set_new_cb(SSL_CTX *ctx,
                             int (*new_session_cb) (struct ssl_st *ssl,
                                                    SSL_SESSION *sess));
int (*SSL_CTX_sess_get_new_cb(SSL_CTX *ctx)) (struct ssl_st *ssl,
                                              SSL_SESSION *sess);
void SSL_CTX_sess_set_remove_cb(SSL_CTX *ctx,
                                void (*remove_session_cb) (struct ssl_ctx_st
                                                           *ctx,
                                                           SSL_SESSION
                                                           *sess));
void (*SSL_CTX_sess_get_remove_cb(SSL_CTX *ctx)) (struct ssl_ctx_st *ctx,
                                                  SSL_SESSION *sess);
void SSL_CTX_sess_set_get_cb(SSL_CTX *ctx,
                             SSL_SESSION *(*get_session_cb) (struct ssl_st
                                                             *ssl,
                                                             unsigned char
                                                             *data, int len,
                                                             int *copy));
SSL_SESSION *(*SSL_CTX_sess_get_get_cb(SSL_CTX *ctx)) (struct ssl_st *ssl,
                                                       unsigned char *Data,
                                                       int len, int *copy);
void SSL_CTX_set_info_callback(SSL_CTX *ctx,
                               void (*cb) (const SSL *ssl, int type,
                                           int val));
void (*SSL_CTX_get_info_callback(SSL_CTX *ctx)) (const SSL *ssl, int type,
                                                 int val);
void SSL_CTX_set_client_cert_cb(SSL_CTX *ctx,
                                int (*client_cert_cb) (SSL *ssl, X509 **x509,
                                                       EVP_PKEY **pkey));
int (*SSL_CTX_get_client_cert_cb(SSL_CTX *ctx)) (SSL *ssl, X509 **x509,
                                                 EVP_PKEY **pkey);

int SSL_CTX_set_client_cert_engine(SSL_CTX *ctx, ENGINE *e);

void SSL_CTX_set_cookie_generate_cb(SSL_CTX *ctx,
                                    int (*app_gen_cookie_cb) (SSL *ssl,
                                                              unsigned char
                                                              *cookie,
                                                              unsigned int
                                                              *cookie_len));
void SSL_CTX_set_cookie_verify_cb(SSL_CTX *ctx,
                                  int (*app_verify_cookie_cb) (SSL *ssl,
                                                               unsigned char
                                                               *cookie,
                                                               unsigned int
                                                               cookie_len));

void SSL_CTX_set_next_protos_advertised_cb(SSL_CTX *s,
                                           int (*cb) (SSL *ssl,
                                                      const unsigned char
                                                      **out,
                                                      unsigned int *outlen,
                                                      void *arg), void *arg);
void SSL_CTX_set_next_proto_select_cb(SSL_CTX *s,
                                      int (*cb) (SSL *ssl,
                                                 unsigned char **out,
                                                 unsigned char *outlen,
                                                 const unsigned char *in,
                                                 unsigned int inlen,
                                                 void *arg), void *arg);
void SSL_get0_next_proto_negotiated(const SSL *s, const unsigned char **data,
                                    unsigned *len);



int SSL_select_next_proto(unsigned char **out, unsigned char *outlen,
                          const unsigned char *in, unsigned int inlen,
                          const unsigned char *client,
                          unsigned int client_len);






int SSL_CTX_set_alpn_protos(SSL_CTX *ctx, const unsigned char *protos,
                            unsigned protos_len);
int SSL_set_alpn_protos(SSL *ssl, const unsigned char *protos,
                        unsigned protos_len);
void SSL_CTX_set_alpn_select_cb(SSL_CTX *ctx,
                                int (*cb) (SSL *ssl,
                                           const unsigned char **out,
                                           unsigned char *outlen,
                                           const unsigned char *in,
                                           unsigned int inlen,
                                           void *arg), void *arg);
void SSL_get0_alpn_selected(const SSL *ssl, const unsigned char **data,
                            unsigned *len);
# 1321 "/usr/include/openssl/ssl.h" 3 4
void SSL_CTX_set_psk_client_callback(SSL_CTX *ctx,
                                     unsigned int (*psk_client_callback) (SSL
                                                                          *ssl,
                                                                          const
                                                                          char
                                                                          *hint,
                                                                          char
                                                                          *identity,
                                                                          unsigned
                                                                          int
                                                                          max_identity_len,
                                                                          unsigned
                                                                          char
                                                                          *psk,
                                                                          unsigned
                                                                          int
                                                                          max_psk_len));
void SSL_set_psk_client_callback(SSL *ssl,
                                 unsigned int (*psk_client_callback) (SSL
                                                                      *ssl,
                                                                      const
                                                                      char
                                                                      *hint,
                                                                      char
                                                                      *identity,
                                                                      unsigned
                                                                      int
                                                                      max_identity_len,
                                                                      unsigned
                                                                      char
                                                                      *psk,
                                                                      unsigned
                                                                      int
                                                                      max_psk_len));
void SSL_CTX_set_psk_server_callback(SSL_CTX *ctx,
                                     unsigned int (*psk_server_callback) (SSL
                                                                          *ssl,
                                                                          const
                                                                          char
                                                                          *identity,
                                                                          unsigned
                                                                          char
                                                                          *psk,
                                                                          unsigned
                                                                          int
                                                                          max_psk_len));
void SSL_set_psk_server_callback(SSL *ssl,
                                 unsigned int (*psk_server_callback) (SSL
                                                                      *ssl,
                                                                      const
                                                                      char
                                                                      *identity,
                                                                      unsigned
                                                                      char
                                                                      *psk,
                                                                      unsigned
                                                                      int
                                                                      max_psk_len));
int SSL_CTX_use_psk_identity_hint(SSL_CTX *ctx, const char *identity_hint);
int SSL_use_psk_identity_hint(SSL *s, const char *identity_hint);
const char *SSL_get_psk_identity_hint(const SSL *s);
const char *SSL_get_psk_identity(const SSL *s);





int SSL_CTX_add_client_custom_ext(SSL_CTX *ctx, unsigned int ext_type,
                                  custom_ext_add_cb add_cb,
                                  custom_ext_free_cb free_cb,
                                  void *add_arg,
                                  custom_ext_parse_cb parse_cb,
                                  void *parse_arg);

int SSL_CTX_add_server_custom_ext(SSL_CTX *ctx, unsigned int ext_type,
                                  custom_ext_add_cb add_cb,
                                  custom_ext_free_cb free_cb,
                                  void *add_arg,
                                  custom_ext_parse_cb parse_cb,
                                  void *parse_arg);

int SSL_extension_supported(unsigned int ext_type);
# 1422 "/usr/include/openssl/ssl.h" 3 4
struct ssl_st {




    int version;

    int type;

    const SSL_METHOD *method;






    BIO *rbio;

    BIO *wbio;

    BIO *bbio;
# 1455 "/usr/include/openssl/ssl.h" 3 4
    int rwstate;

    int in_handshake;
    int (*handshake_func) (SSL *);
# 1467 "/usr/include/openssl/ssl.h" 3 4
    int server;






    int new_session;

    int quiet_shutdown;

    int shutdown;

    int state;

    int rstate;
    BUF_MEM *init_buf;
    void *init_msg;

    int init_num;
    int init_off;

    unsigned char *packet;
    unsigned int packet_length;
    struct ssl2_state_st *s2;
    struct ssl3_state_st *s3;
    struct dtls1_state_st *d1;
    int read_ahead;


    void (*msg_callback) (int write_p, int version, int content_type,
                          const void *buf, size_t len, SSL *ssl, void *arg);
    void *msg_callback_arg;
    int hit;
    X509_VERIFY_PARAM *param;





    struct stack_st_SSL_CIPHER *cipher_list;
    struct stack_st_SSL_CIPHER *cipher_list_by_id;




    int mac_flags;
    EVP_CIPHER_CTX *enc_read_ctx;
    EVP_MD_CTX *read_hash;

    COMP_CTX *expand;



    EVP_CIPHER_CTX *enc_write_ctx;
    EVP_MD_CTX *write_hash;

    COMP_CTX *compress;






    struct cert_st *cert;




    unsigned int sid_ctx_length;
    unsigned char sid_ctx[32];

    SSL_SESSION *session;

    GEN_SESSION_CB generate_session_id;





    int verify_mode;

    int (*verify_callback) (int ok, X509_STORE_CTX *ctx);

    void (*info_callback) (const SSL *ssl, int type, int val);

    int error;

    int error_code;





    unsigned int (*psk_client_callback) (SSL *ssl, const char *hint,
                                         char *identity,
                                         unsigned int max_identity_len,
                                         unsigned char *psk,
                                         unsigned int max_psk_len);
    unsigned int (*psk_server_callback) (SSL *ssl, const char *identity,
                                         unsigned char *psk,
                                         unsigned int max_psk_len);

    SSL_CTX *ctx;




    int debug;

    long verify_result;
    CRYPTO_EX_DATA ex_data;

    struct stack_st_X509_NAME *client_CA;
    int references;

    unsigned long options;

    unsigned long mode;
    long max_cert_list;
    int first_packet;

    int client_version;
    unsigned int max_send_fragment;


    void (*tlsext_debug_cb) (SSL *s, int client_server, int type,
                             unsigned char *data, int len, void *arg);
    void *tlsext_debug_arg;
    char *tlsext_hostname;






    int servername_done;


    int tlsext_status_type;

    int tlsext_status_expected;

    struct stack_st_OCSP_RESPID *tlsext_ocsp_ids;
    X509_EXTENSIONS *tlsext_ocsp_exts;

    unsigned char *tlsext_ocsp_resp;
    int tlsext_ocsp_resplen;

    int tlsext_ticket_expected;

    size_t tlsext_ecpointformatlist_length;

    unsigned char *tlsext_ecpointformatlist;
    size_t tlsext_ellipticcurvelist_length;

    unsigned char *tlsext_ellipticcurvelist;





    void *tlsext_opaque_prf_input;
    size_t tlsext_opaque_prf_input_len;

    TLS_SESSION_TICKET_EXT *tlsext_session_ticket;

    tls_session_ticket_ext_cb_fn tls_session_ticket_ext_cb;
    void *tls_session_ticket_ext_cb_arg;

    tls_session_secret_cb_fn tls_session_secret_cb;
    void *tls_session_secret_cb_arg;
    SSL_CTX *initial_ctx;
# 1648 "/usr/include/openssl/ssl.h" 3 4
    unsigned char *next_proto_negotiated;
    unsigned char next_proto_negotiated_len;



    struct stack_st_SRTP_PROTECTION_PROFILE *srtp_profiles;

    SRTP_PROTECTION_PROFILE *srtp_profile;






    unsigned int tlsext_heartbeat;

    unsigned int tlsext_hb_pending;

    unsigned int tlsext_hb_seq;
# 1675 "/usr/include/openssl/ssl.h" 3 4
    int renegotiate;


    SRP_CTX srp_ctx;






    unsigned char *alpn_client_proto_list;
    unsigned alpn_client_proto_list_len;

};







# 1 "/usr/include/openssl/ssl2.h" 1 3 4
# 163 "/usr/include/openssl/ssl2.h" 3 4
typedef struct ssl2_state_st {
    int three_byte_header;
    int clear_text;
    int escape;
    int ssl2_rollback;



    unsigned int wnum;
    int wpend_tot;
    const unsigned char *wpend_buf;
    int wpend_off;
    int wpend_len;
    int wpend_ret;

    int rbuf_left;
    int rbuf_offs;
    unsigned char *rbuf;
    unsigned char *wbuf;
    unsigned char *write_ptr;

    unsigned int padding;
    unsigned int rlength;
    int ract_data_length;
    unsigned int wlength;
    int wact_data_length;
    unsigned char *ract_data;
    unsigned char *wact_data;
    unsigned char *mac_data;
    unsigned char *read_key;
    unsigned char *write_key;

    unsigned int challenge_length;
    unsigned char challenge[32];
    unsigned int conn_id_length;
    unsigned char conn_id[16];
    unsigned int key_material_length;
    unsigned char key_material[24 * 2];
    unsigned long read_sequence;
    unsigned long write_sequence;
    struct {
        unsigned int conn_id_length;
        unsigned int cert_type;
        unsigned int cert_length;
        unsigned int csl;
        unsigned int clear;
        unsigned int enc;
        unsigned char ccl[32];
        unsigned int cipher_spec_length;
        unsigned int session_id_length;
        unsigned int clen;
        unsigned int rlen;
    } tmp;
} SSL2_STATE;
# 1697 "/usr/include/openssl/ssl.h" 2 3 4
# 1 "/usr/include/openssl/ssl3.h" 1 3 4
# 125 "/usr/include/openssl/ssl3.h" 3 4
# 1 "/usr/include/openssl/ssl.h" 1 3 4
# 126 "/usr/include/openssl/ssl3.h" 2 3 4
# 403 "/usr/include/openssl/ssl3.h" 3 4
typedef struct ssl3_record_st {



        int type;



        unsigned int length;



        unsigned int off;



        unsigned char *data;



        unsigned char *input;



        unsigned char *comp;



        unsigned long epoch;



        unsigned char seq_num[8];
} SSL3_RECORD;

typedef struct ssl3_buffer_st {

    unsigned char *buf;

    size_t len;

    int offset;

    int left;
} SSL3_BUFFER;
# 481 "/usr/include/openssl/ssl3.h" 3 4
typedef struct ssl3_state_st {
    long flags;
    int delay_buf_pop_ret;
    unsigned char read_sequence[8];
    int read_mac_secret_size;
    unsigned char read_mac_secret[64];
    unsigned char write_sequence[8];
    int write_mac_secret_size;
    unsigned char write_mac_secret[64];
    unsigned char server_random[32];
    unsigned char client_random[32];

    int need_empty_fragments;
    int empty_fragment_done;

    int init_extra;
    SSL3_BUFFER rbuf;
    SSL3_BUFFER wbuf;
    SSL3_RECORD rrec;
    SSL3_RECORD wrec;




    unsigned char alert_fragment[2];
    unsigned int alert_fragment_len;
    unsigned char handshake_fragment[4];
    unsigned int handshake_fragment_len;

    unsigned int wnum;
    int wpend_tot;
    int wpend_type;
    int wpend_ret;
    const unsigned char *wpend_buf;

    BIO *handshake_buffer;




    EVP_MD_CTX **handshake_dgst;





    int change_cipher_spec;
    int warn_alert;
    int fatal_alert;




    int alert_dispatch;
    unsigned char send_alert[2];




    int renegotiate;
    int total_renegotiations;
    int num_renegotiations;
    int in_read_app_data;





    void *client_opaque_prf_input;
    size_t client_opaque_prf_input_len;
    void *server_opaque_prf_input;
    size_t server_opaque_prf_input_len;
    struct {

        unsigned char cert_verify_md[64 * 2];

        unsigned char finish_md[64 * 2];
        int finish_md_len;
        unsigned char peer_finish_md[64 * 2];
        int peer_finish_md_len;
        unsigned long message_size;
        int message_type;

        const SSL_CIPHER *new_cipher;

        DH *dh;


        EC_KEY *ecdh;


        int next_state;
        int reuse_message;

        int cert_req;
        int ctype_num;
        char ctype[9];
        struct stack_st_X509_NAME *ca_names;
        int use_rsa_tmp;
        int key_block_length;
        unsigned char *key_block;
        const EVP_CIPHER *new_sym_enc;
        const EVP_MD *new_hash;
        int new_mac_pkey_type;
        int new_mac_secret_size;

        const SSL_COMP *new_compression;



        int cert_request;
    } tmp;


    unsigned char previous_client_finished[64];
    unsigned char previous_client_finished_len;
    unsigned char previous_server_finished[64];
    unsigned char previous_server_finished_len;
    int send_connection_binding;





    int next_proto_neg_seen;
# 615 "/usr/include/openssl/ssl3.h" 3 4
    char is_probably_safari;
# 628 "/usr/include/openssl/ssl3.h" 3 4
    unsigned char *alpn_selected;
    unsigned alpn_selected_len;

} SSL3_STATE;
# 1698 "/usr/include/openssl/ssl.h" 2 3 4
# 1 "/usr/include/openssl/tls1.h" 1 3 4
# 309 "/usr/include/openssl/tls1.h" 3 4
const char *SSL_get_servername(const SSL *s, const int type);
int SSL_get_servername_type(const SSL *s);







int SSL_export_keying_material(SSL *s, unsigned char *out, size_t olen,
                               const char *label, size_t llen,
                               const unsigned char *p, size_t plen,
                               int use_context);

int SSL_get_sigalgs(SSL *s, int idx,
                    int *psign, int *phash, int *psignandhash,
                    unsigned char *rsig, unsigned char *rhash);

int SSL_get_shared_sigalgs(SSL *s, int idx,
                           int *psign, int *phash, int *psignandhash,
                           unsigned char *rsig, unsigned char *rhash);

int SSL_check_chain(SSL *s, X509 *x, EVP_PKEY *pk, struct stack_st_X509 *chain);
# 802 "/usr/include/openssl/tls1.h" 3 4
struct tls_session_ticket_ext_st {
    unsigned short length;
    void *data;
};
# 1699 "/usr/include/openssl/ssl.h" 2 3 4
# 1 "/usr/include/openssl/dtls1.h" 1 3 4
# 64 "/usr/include/openssl/dtls1.h" 3 4
# 1 "/usr/include/openssl/pqueue.h" 1 3 4
# 70 "/usr/include/openssl/pqueue.h" 3 4
typedef struct _pqueue *pqueue;

typedef struct _pitem {
    unsigned char priority[8];
    void *data;
    struct _pitem *next;
} pitem;

typedef struct _pitem *piterator;

pitem *pitem_new(unsigned char *prio64be, void *data);
void pitem_free(pitem *item);

pqueue pqueue_new(void);
void pqueue_free(pqueue pq);

pitem *pqueue_insert(pqueue pq, pitem *item);
pitem *pqueue_peek(pqueue pq);
pitem *pqueue_pop(pqueue pq);
pitem *pqueue_find(pqueue pq, unsigned char *prio64be);
pitem *pqueue_iterator(pqueue pq);
pitem *pqueue_next(piterator *iter);

void pqueue_print(pqueue pq);
int pqueue_size(pqueue pq);
# 65 "/usr/include/openssl/dtls1.h" 2 3 4
# 128 "/usr/include/openssl/dtls1.h" 3 4
typedef struct dtls1_bitmap_st {
    unsigned long map;

    unsigned char max_seq_num[8];

} DTLS1_BITMAP;

struct dtls1_retransmit_state {
    EVP_CIPHER_CTX *enc_write_ctx;
    EVP_MD_CTX *write_hash;

    COMP_CTX *compress;



    SSL_SESSION *session;
    unsigned short epoch;
};

struct hm_header_st {
    unsigned char type;
    unsigned long msg_len;
    unsigned short seq;
    unsigned long frag_off;
    unsigned long frag_len;
    unsigned int is_ccs;
    struct dtls1_retransmit_state saved_retransmit_state;
};

struct ccs_header_st {
    unsigned char type;
    unsigned short seq;
};

struct dtls1_timeout_st {

    unsigned int read_timeouts;

    unsigned int write_timeouts;

    unsigned int num_alerts;
};

typedef struct record_pqueue_st {
    unsigned short epoch;
    pqueue q;
} record_pqueue;

typedef struct hm_fragment_st {
    struct hm_header_st msg_header;
    unsigned char *fragment;
    unsigned char *reassembly;
} hm_fragment;

typedef struct dtls1_state_st {
    unsigned int send_cookie;
    unsigned char cookie[256];
    unsigned char rcvd_cookie[256];
    unsigned int cookie_len;





    unsigned short r_epoch;
    unsigned short w_epoch;

    DTLS1_BITMAP bitmap;

    DTLS1_BITMAP next_bitmap;

    unsigned short handshake_write_seq;
    unsigned short next_handshake_write_seq;
    unsigned short handshake_read_seq;

    unsigned char last_write_sequence[8];

    record_pqueue unprocessed_rcds;
    record_pqueue processed_rcds;

    pqueue buffered_messages;

    pqueue sent_messages;





    record_pqueue buffered_app_data;

    unsigned int listen;
    unsigned int link_mtu;
    unsigned int mtu;
    struct hm_header_st w_msg_hdr;
    struct hm_header_st r_msg_hdr;
    struct dtls1_timeout_st timeout;



    struct timeval next_timeout;

    unsigned short timeout_duration;




    unsigned char alert_fragment[2];
    unsigned int alert_fragment_len;
    unsigned char handshake_fragment[12];
    unsigned int handshake_fragment_len;
    unsigned int retransmitting;




    unsigned int change_cipher_spec_ok;





} DTLS1_STATE;

typedef struct dtls1_record_data_st {
    unsigned char *packet;
    unsigned int packet_length;
    SSL3_BUFFER rbuf;
    SSL3_RECORD rrec;



} DTLS1_RECORD_DATA;
# 1700 "/usr/include/openssl/ssl.h" 2 3 4
# 1 "/usr/include/openssl/ssl23.h" 1 3 4
# 1701 "/usr/include/openssl/ssl.h" 2 3 4
# 1 "/usr/include/openssl/srtp.h" 1 3 4
# 135 "/usr/include/openssl/srtp.h" 3 4
int SSL_CTX_set_tlsext_use_srtp(SSL_CTX *ctx, const char *profiles);
int SSL_set_tlsext_use_srtp(SSL *ctx, const char *profiles);

struct stack_st_SRTP_PROTECTION_PROFILE *SSL_get_srtp_profiles(SSL *ssl);
SRTP_PROTECTION_PROFILE *SSL_get_selected_srtp_profile(SSL *s);
# 1702 "/usr/include/openssl/ssl.h" 2 3 4
# 1768 "/usr/include/openssl/ssl.h" 3 4
size_t SSL_get_finished(const SSL *s, void *buf, size_t count);
size_t SSL_get_peer_finished(const SSL *s, void *buf, size_t count);
# 1808 "/usr/include/openssl/ssl.h" 3 4
SSL_SESSION *PEM_read_bio_SSL_SESSION(BIO *bp, SSL_SESSION **x, pem_password_cb *cb, void *u); SSL_SESSION *PEM_read_SSL_SESSION(FILE *fp, SSL_SESSION **x, pem_password_cb *cb, void *u); int PEM_write_bio_SSL_SESSION(BIO *bp, SSL_SESSION *x); int PEM_write_SSL_SESSION(FILE *fp, SSL_SESSION *x);
# 2121 "/usr/include/openssl/ssl.h" 3 4
BIO_METHOD *BIO_f_ssl(void);
BIO *BIO_new_ssl(SSL_CTX *ctx, int client);
BIO *BIO_new_ssl_connect(SSL_CTX *ctx);
BIO *BIO_new_buffer_ssl_connect(SSL_CTX *ctx);
int BIO_ssl_copy_session_id(BIO *to, BIO *from);
void BIO_ssl_shutdown(BIO *ssl_bio);



int SSL_CTX_set_cipher_list(SSL_CTX *, const char *str);
SSL_CTX *SSL_CTX_new(const SSL_METHOD *meth);
void SSL_CTX_free(SSL_CTX *);
long SSL_CTX_set_timeout(SSL_CTX *ctx, long t);
long SSL_CTX_get_timeout(const SSL_CTX *ctx);
X509_STORE *SSL_CTX_get_cert_store(const SSL_CTX *);
void SSL_CTX_set_cert_store(SSL_CTX *, X509_STORE *);
int SSL_want(const SSL *s);
int SSL_clear(SSL *s);

void SSL_CTX_flush_sessions(SSL_CTX *ctx, long tm);

const SSL_CIPHER *SSL_get_current_cipher(const SSL *s);
int SSL_CIPHER_get_bits(const SSL_CIPHER *c, int *alg_bits);
char *SSL_CIPHER_get_version(const SSL_CIPHER *c);
const char *SSL_CIPHER_get_name(const SSL_CIPHER *c);
unsigned long SSL_CIPHER_get_id(const SSL_CIPHER *c);

int SSL_get_fd(const SSL *s);
int SSL_get_rfd(const SSL *s);
int SSL_get_wfd(const SSL *s);
const char *SSL_get_cipher_list(const SSL *s, int n);
char *SSL_get_shared_ciphers(const SSL *s, char *buf, int len);
int SSL_get_read_ahead(const SSL *s);
int SSL_pending(const SSL *s);

int SSL_set_fd(SSL *s, int fd);
int SSL_set_rfd(SSL *s, int fd);
int SSL_set_wfd(SSL *s, int fd);


void SSL_set_bio(SSL *s, BIO *rbio, BIO *wbio);
BIO *SSL_get_rbio(const SSL *s);
BIO *SSL_get_wbio(const SSL *s);

int SSL_set_cipher_list(SSL *s, const char *str);
void SSL_set_read_ahead(SSL *s, int yes);
int SSL_get_verify_mode(const SSL *s);
int SSL_get_verify_depth(const SSL *s);
int (*SSL_get_verify_callback(const SSL *s)) (int, X509_STORE_CTX *);
void SSL_set_verify(SSL *s, int mode,
                    int (*callback) (int ok, X509_STORE_CTX *ctx));
void SSL_set_verify_depth(SSL *s, int depth);
void SSL_set_cert_cb(SSL *s, int (*cb) (SSL *ssl, void *arg), void *arg);

int SSL_use_RSAPrivateKey(SSL *ssl, RSA *rsa);

int SSL_use_RSAPrivateKey_ASN1(SSL *ssl, unsigned char *d, long len);
int SSL_use_PrivateKey(SSL *ssl, EVP_PKEY *pkey);
int SSL_use_PrivateKey_ASN1(int pk, SSL *ssl, const unsigned char *d,
                            long len);
int SSL_use_certificate(SSL *ssl, X509 *x);
int SSL_use_certificate_ASN1(SSL *ssl, const unsigned char *d, int len);



int SSL_CTX_use_serverinfo(SSL_CTX *ctx, const unsigned char *serverinfo,
                           size_t serverinfo_length);

int SSL_CTX_use_serverinfo_file(SSL_CTX *ctx, const char *file);





int SSL_use_RSAPrivateKey_file(SSL *ssl, const char *file, int type);
int SSL_use_PrivateKey_file(SSL *ssl, const char *file, int type);
int SSL_use_certificate_file(SSL *ssl, const char *file, int type);
int SSL_CTX_use_RSAPrivateKey_file(SSL_CTX *ctx, const char *file, int type);
int SSL_CTX_use_PrivateKey_file(SSL_CTX *ctx, const char *file, int type);
int SSL_CTX_use_certificate_file(SSL_CTX *ctx, const char *file, int type);

int SSL_CTX_use_certificate_chain_file(SSL_CTX *ctx, const char *file);
struct stack_st_X509_NAME *SSL_load_client_CA_file(const char *file);
int SSL_add_file_cert_subjects_to_stack(struct stack_st_X509_NAME *stackCAs,
                                        const char *file);



int SSL_add_dir_cert_subjects_to_stack(struct stack_st_X509_NAME *stackCAs,
                                       const char *dir);





void SSL_load_error_strings(void);
const char *SSL_state_string(const SSL *s);
const char *SSL_rstate_string(const SSL *s);
const char *SSL_state_string_long(const SSL *s);
const char *SSL_rstate_string_long(const SSL *s);
long SSL_SESSION_get_time(const SSL_SESSION *s);
long SSL_SESSION_set_time(SSL_SESSION *s, long t);
long SSL_SESSION_get_timeout(const SSL_SESSION *s);
long SSL_SESSION_set_timeout(SSL_SESSION *s, long t);
void SSL_copy_session_id(SSL *to, const SSL *from);
X509 *SSL_SESSION_get0_peer(SSL_SESSION *s);
int SSL_SESSION_set1_id_context(SSL_SESSION *s, const unsigned char *sid_ctx,
                                unsigned int sid_ctx_len);

SSL_SESSION *SSL_SESSION_new(void);
const unsigned char *SSL_SESSION_get_id(const SSL_SESSION *s,
                                        unsigned int *len);
unsigned int SSL_SESSION_get_compress_id(const SSL_SESSION *s);

int SSL_SESSION_print_fp(FILE *fp, const SSL_SESSION *ses);


int SSL_SESSION_print(BIO *fp, const SSL_SESSION *ses);

void SSL_SESSION_free(SSL_SESSION *ses);
int i2d_SSL_SESSION(SSL_SESSION *in, unsigned char **pp);
int SSL_set_session(SSL *to, SSL_SESSION *session);
int SSL_CTX_add_session(SSL_CTX *s, SSL_SESSION *c);
int SSL_CTX_remove_session(SSL_CTX *, SSL_SESSION *c);
int SSL_CTX_set_generate_session_id(SSL_CTX *, GEN_SESSION_CB);
int SSL_set_generate_session_id(SSL *, GEN_SESSION_CB);
int SSL_has_matching_session_id(const SSL *ssl, const unsigned char *id,
                                unsigned int id_len);
SSL_SESSION *d2i_SSL_SESSION(SSL_SESSION **a, const unsigned char **pp,
                             long length);


X509 *SSL_get_peer_certificate(const SSL *s);


struct stack_st_X509 *SSL_get_peer_cert_chain(const SSL *s);

int SSL_CTX_get_verify_mode(const SSL_CTX *ctx);
int SSL_CTX_get_verify_depth(const SSL_CTX *ctx);
int (*SSL_CTX_get_verify_callback(const SSL_CTX *ctx)) (int,
                                                        X509_STORE_CTX *);
void SSL_CTX_set_verify(SSL_CTX *ctx, int mode,
                        int (*callback) (int, X509_STORE_CTX *));
void SSL_CTX_set_verify_depth(SSL_CTX *ctx, int depth);
void SSL_CTX_set_cert_verify_callback(SSL_CTX *ctx,
                                      int (*cb) (X509_STORE_CTX *, void *),
                                      void *arg);
void SSL_CTX_set_cert_cb(SSL_CTX *c, int (*cb) (SSL *ssl, void *arg),
                         void *arg);

int SSL_CTX_use_RSAPrivateKey(SSL_CTX *ctx, RSA *rsa);

int SSL_CTX_use_RSAPrivateKey_ASN1(SSL_CTX *ctx, const unsigned char *d,
                                   long len);
int SSL_CTX_use_PrivateKey(SSL_CTX *ctx, EVP_PKEY *pkey);
int SSL_CTX_use_PrivateKey_ASN1(int pk, SSL_CTX *ctx,
                                const unsigned char *d, long len);
int SSL_CTX_use_certificate(SSL_CTX *ctx, X509 *x);
int SSL_CTX_use_certificate_ASN1(SSL_CTX *ctx, int len,
                                 const unsigned char *d);

void SSL_CTX_set_default_passwd_cb(SSL_CTX *ctx, pem_password_cb *cb);
void SSL_CTX_set_default_passwd_cb_userdata(SSL_CTX *ctx, void *u);

int SSL_CTX_check_private_key(const SSL_CTX *ctx);
int SSL_check_private_key(const SSL *ctx);

int SSL_CTX_set_session_id_context(SSL_CTX *ctx, const unsigned char *sid_ctx,
                                   unsigned int sid_ctx_len);

SSL *SSL_new(SSL_CTX *ctx);
int SSL_set_session_id_context(SSL *ssl, const unsigned char *sid_ctx,
                               unsigned int sid_ctx_len);

int SSL_CTX_set_purpose(SSL_CTX *s, int purpose);
int SSL_set_purpose(SSL *s, int purpose);
int SSL_CTX_set_trust(SSL_CTX *s, int trust);
int SSL_set_trust(SSL *s, int trust);

int SSL_CTX_set1_param(SSL_CTX *ctx, X509_VERIFY_PARAM *vpm);
int SSL_set1_param(SSL *ssl, X509_VERIFY_PARAM *vpm);

X509_VERIFY_PARAM *SSL_CTX_get0_param(SSL_CTX *ctx);
X509_VERIFY_PARAM *SSL_get0_param(SSL *ssl);


int SSL_CTX_set_srp_username(SSL_CTX *ctx, char *name);
int SSL_CTX_set_srp_password(SSL_CTX *ctx, char *password);
int SSL_CTX_set_srp_strength(SSL_CTX *ctx, int strength);
int SSL_CTX_set_srp_client_pwd_callback(SSL_CTX *ctx,
                                        char *(*cb) (SSL *, void *));
int SSL_CTX_set_srp_verify_param_callback(SSL_CTX *ctx,
                                          int (*cb) (SSL *, void *));
int SSL_CTX_set_srp_username_callback(SSL_CTX *ctx,
                                      int (*cb) (SSL *, int *, void *));
int SSL_CTX_set_srp_cb_arg(SSL_CTX *ctx, void *arg);

int SSL_set_srp_server_param(SSL *s, const BIGNUM *N, const BIGNUM *g,
                             BIGNUM *sa, BIGNUM *v, char *info);
int SSL_set_srp_server_param_pw(SSL *s, const char *user, const char *pass,
                                const char *grp);

BIGNUM *SSL_get_srp_g(SSL *s);
BIGNUM *SSL_get_srp_N(SSL *s);

char *SSL_get_srp_username(SSL *s);
char *SSL_get_srp_userinfo(SSL *s);


void SSL_certs_clear(SSL *s);
void SSL_free(SSL *ssl);
int SSL_accept(SSL *ssl);
int SSL_connect(SSL *ssl);
int SSL_read(SSL *ssl, void *buf, int num);
int SSL_peek(SSL *ssl, void *buf, int num);
int SSL_write(SSL *ssl, const void *buf, int num);
long SSL_ctrl(SSL *ssl, int cmd, long larg, void *parg);
long SSL_callback_ctrl(SSL *, int, void (*)(void));
long SSL_CTX_ctrl(SSL_CTX *ctx, int cmd, long larg, void *parg);
long SSL_CTX_callback_ctrl(SSL_CTX *, int, void (*)(void));

int SSL_get_error(const SSL *s, int ret_code);
const char *SSL_get_version(const SSL *s);


int SSL_CTX_set_ssl_version(SSL_CTX *ctx, const SSL_METHOD *meth);
# 2355 "/usr/include/openssl/ssl.h" 3 4
const SSL_METHOD *SSLv3_method(void);
const SSL_METHOD *SSLv3_server_method(void);
const SSL_METHOD *SSLv3_client_method(void);


const SSL_METHOD *SSLv23_method(void);

const SSL_METHOD *SSLv23_server_method(void);

const SSL_METHOD *SSLv23_client_method(void);


const SSL_METHOD *TLSv1_method(void);
const SSL_METHOD *TLSv1_server_method(void);
const SSL_METHOD *TLSv1_client_method(void);

const SSL_METHOD *TLSv1_1_method(void);
const SSL_METHOD *TLSv1_1_server_method(void);
const SSL_METHOD *TLSv1_1_client_method(void);

const SSL_METHOD *TLSv1_2_method(void);
const SSL_METHOD *TLSv1_2_server_method(void);
const SSL_METHOD *TLSv1_2_client_method(void);

const SSL_METHOD *DTLSv1_method(void);
const SSL_METHOD *DTLSv1_server_method(void);
const SSL_METHOD *DTLSv1_client_method(void);

const SSL_METHOD *DTLSv1_2_method(void);
const SSL_METHOD *DTLSv1_2_server_method(void);
const SSL_METHOD *DTLSv1_2_client_method(void);

const SSL_METHOD *DTLS_method(void);
const SSL_METHOD *DTLS_server_method(void);
const SSL_METHOD *DTLS_client_method(void);

struct stack_st_SSL_CIPHER *SSL_get_ciphers(const SSL *s);

int SSL_do_handshake(SSL *s);
int SSL_renegotiate(SSL *s);
int SSL_renegotiate_abbreviated(SSL *s);
int SSL_renegotiate_pending(SSL *s);
int SSL_shutdown(SSL *s);

const SSL_METHOD *SSL_CTX_get_ssl_method(SSL_CTX *ctx);
const SSL_METHOD *SSL_get_ssl_method(SSL *s);
int SSL_set_ssl_method(SSL *s, const SSL_METHOD *method);
const char *SSL_alert_type_string_long(int value);
const char *SSL_alert_type_string(int value);
const char *SSL_alert_desc_string_long(int value);
const char *SSL_alert_desc_string(int value);

void SSL_set_client_CA_list(SSL *s, struct stack_st_X509_NAME *name_list);
void SSL_CTX_set_client_CA_list(SSL_CTX *ctx, struct stack_st_X509_NAME *name_list);
struct stack_st_X509_NAME *SSL_get_client_CA_list(const SSL *s);
struct stack_st_X509_NAME *SSL_CTX_get_client_CA_list(const SSL_CTX *s);
int SSL_add_client_CA(SSL *ssl, X509 *x);
int SSL_CTX_add_client_CA(SSL_CTX *ctx, X509 *x);

void SSL_set_connect_state(SSL *s);
void SSL_set_accept_state(SSL *s);

long SSL_get_default_timeout(const SSL *s);

int SSL_library_init(void);

char *SSL_CIPHER_description(const SSL_CIPHER *, char *buf, int size);
struct stack_st_X509_NAME *SSL_dup_CA_list(struct stack_st_X509_NAME *sk);

SSL *SSL_dup(SSL *ssl);

X509 *SSL_get_certificate(const SSL *ssl);


    struct evp_pkey_st *SSL_get_privatekey(const SSL *ssl);

X509 *SSL_CTX_get0_certificate(const SSL_CTX *ctx);
EVP_PKEY *SSL_CTX_get0_privatekey(const SSL_CTX *ctx);

void SSL_CTX_set_quiet_shutdown(SSL_CTX *ctx, int mode);
int SSL_CTX_get_quiet_shutdown(const SSL_CTX *ctx);
void SSL_set_quiet_shutdown(SSL *ssl, int mode);
int SSL_get_quiet_shutdown(const SSL *ssl);
void SSL_set_shutdown(SSL *ssl, int mode);
int SSL_get_shutdown(const SSL *ssl);
int SSL_version(const SSL *ssl);
int SSL_CTX_set_default_verify_paths(SSL_CTX *ctx);
int SSL_CTX_load_verify_locations(SSL_CTX *ctx, const char *CAfile,
                                  const char *CApath);

SSL_SESSION *SSL_get_session(const SSL *ssl);
SSL_SESSION *SSL_get1_session(SSL *ssl);
SSL_CTX *SSL_get_SSL_CTX(const SSL *ssl);
SSL_CTX *SSL_set_SSL_CTX(SSL *ssl, SSL_CTX *ctx);
void SSL_set_info_callback(SSL *ssl,
                           void (*cb) (const SSL *ssl, int type, int val));
void (*SSL_get_info_callback(const SSL *ssl)) (const SSL *ssl, int type,
                                               int val);
int SSL_state(const SSL *ssl);
void SSL_set_state(SSL *ssl, int state);

void SSL_set_verify_result(SSL *ssl, long v);
long SSL_get_verify_result(const SSL *ssl);

int SSL_set_ex_data(SSL *ssl, int idx, void *data);
void *SSL_get_ex_data(const SSL *ssl, int idx);
int SSL_get_ex_new_index(long argl, void *argp, CRYPTO_EX_new *new_func,
                         CRYPTO_EX_dup *dup_func, CRYPTO_EX_free *free_func);

int SSL_SESSION_set_ex_data(SSL_SESSION *ss, int idx, void *data);
void *SSL_SESSION_get_ex_data(const SSL_SESSION *ss, int idx);
int SSL_SESSION_get_ex_new_index(long argl, void *argp,
                                 CRYPTO_EX_new *new_func,
                                 CRYPTO_EX_dup *dup_func,
                                 CRYPTO_EX_free *free_func);

int SSL_CTX_set_ex_data(SSL_CTX *ssl, int idx, void *data);
void *SSL_CTX_get_ex_data(const SSL_CTX *ssl, int idx);
int SSL_CTX_get_ex_new_index(long argl, void *argp, CRYPTO_EX_new *new_func,
                             CRYPTO_EX_dup *dup_func,
                             CRYPTO_EX_free *free_func);

int SSL_get_ex_data_X509_STORE_CTX_idx(void);
# 2510 "/usr/include/openssl/ssl.h" 3 4
void SSL_CTX_set_tmp_rsa_callback(SSL_CTX *ctx,
                                  RSA *(*cb) (SSL *ssl, int is_export,
                                              int keylength));

void SSL_set_tmp_rsa_callback(SSL *ssl,
                              RSA *(*cb) (SSL *ssl, int is_export,
                                          int keylength));


void SSL_CTX_set_tmp_dh_callback(SSL_CTX *ctx,
                                 DH *(*dh) (SSL *ssl, int is_export,
                                            int keylength));
void SSL_set_tmp_dh_callback(SSL *ssl,
                             DH *(*dh) (SSL *ssl, int is_export,
                                        int keylength));


void SSL_CTX_set_tmp_ecdh_callback(SSL_CTX *ctx,
                                   EC_KEY *(*ecdh) (SSL *ssl, int is_export,
                                                    int keylength));
void SSL_set_tmp_ecdh_callback(SSL *ssl,
                               EC_KEY *(*ecdh) (SSL *ssl, int is_export,
                                                int keylength));



const COMP_METHOD *SSL_get_current_compression(SSL *s);
const COMP_METHOD *SSL_get_current_expansion(SSL *s);
const char *SSL_COMP_get_name(const COMP_METHOD *comp);
struct stack_st_SSL_COMP *SSL_COMP_get_compression_methods(void);
struct stack_st_SSL_COMP *SSL_COMP_set0_compression_methods(struct stack_st_SSL_COMP
                                                      *meths);
void SSL_COMP_free_compression_methods(void);
int SSL_COMP_add_compression_method(int id, COMP_METHOD *cm);
# 2552 "/usr/include/openssl/ssl.h" 3 4
const SSL_CIPHER *SSL_CIPHER_find(SSL *ssl, const unsigned char *ptr);


int SSL_set_session_ticket_ext(SSL *s, void *ext_data, int ext_len);

int SSL_set_session_ticket_ext_cb(SSL *s, tls_session_ticket_ext_cb_fn cb,
                                  void *arg);


int SSL_set_session_secret_cb(SSL *s,
                              tls_session_secret_cb_fn tls_session_secret_cb,
                              void *arg);

void SSL_set_debug(SSL *s, int debug);
int SSL_cache_hit(SSL *s);
int SSL_is_server(SSL *s);

SSL_CONF_CTX *SSL_CONF_CTX_new(void);
int SSL_CONF_CTX_finish(SSL_CONF_CTX *cctx);
void SSL_CONF_CTX_free(SSL_CONF_CTX *cctx);
unsigned int SSL_CONF_CTX_set_flags(SSL_CONF_CTX *cctx, unsigned int flags);
unsigned int SSL_CONF_CTX_clear_flags(SSL_CONF_CTX *cctx, unsigned int flags);
int SSL_CONF_CTX_set1_prefix(SSL_CONF_CTX *cctx, const char *pre);

void SSL_CONF_CTX_set_ssl(SSL_CONF_CTX *cctx, SSL *ssl);
void SSL_CONF_CTX_set_ssl_ctx(SSL_CONF_CTX *cctx, SSL_CTX *ctx);

int SSL_CONF_cmd(SSL_CONF_CTX *cctx, const char *cmd, const char *value);
int SSL_CONF_cmd_argv(SSL_CONF_CTX *cctx, int *pargc, char ***pargv);
int SSL_CONF_cmd_value_type(SSL_CONF_CTX *cctx, const char *cmd);
# 2590 "/usr/include/openssl/ssl.h" 3 4
const struct openssl_ssl_test_functions *SSL_test_functions(void);







void ERR_load_SSL_strings(void);
# 284 "/home/libraskywalker/Projects/ModelRenamer/git-master/block-sha1/../git-compat-util.h" 2
# 1 "/usr/include/openssl/err.h" 1 3 4
# 115 "/usr/include/openssl/err.h" 3 4
# 1 "/usr/include/openssl/e_os2.h" 1 3 4
# 56 "/usr/include/openssl/e_os2.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/openssl/opensslconf.h" 1 3 4
# 57 "/usr/include/openssl/e_os2.h" 2 3 4
# 116 "/usr/include/openssl/err.h" 2 3 4
# 140 "/usr/include/openssl/err.h" 3 4
# 1 "/usr/include/errno.h" 1 3 4
# 141 "/usr/include/openssl/err.h" 2 3 4







typedef struct err_state_st {
    CRYPTO_THREADID tid;
    int err_flags[16];
    unsigned long err_buffer[16];
    char *err_data[16];
    int err_data_flags[16];
    const char *err_file[16];
    int err_line[16];
    int top, bottom;
} ERR_STATE;
# 313 "/usr/include/openssl/err.h" 3 4
typedef struct ERR_string_data_st {
    unsigned long error;
    const char *string;
} ERR_STRING_DATA;

void ERR_put_error(int lib, int func, int reason, const char *file, int line);
void ERR_set_error_data(char *data, int flags);

unsigned long ERR_get_error(void);
unsigned long ERR_get_error_line(const char **file, int *line);
unsigned long ERR_get_error_line_data(const char **file, int *line,
                                      const char **data, int *flags);
unsigned long ERR_peek_error(void);
unsigned long ERR_peek_error_line(const char **file, int *line);
unsigned long ERR_peek_error_line_data(const char **file, int *line,
                                       const char **data, int *flags);
unsigned long ERR_peek_last_error(void);
unsigned long ERR_peek_last_error_line(const char **file, int *line);
unsigned long ERR_peek_last_error_line_data(const char **file, int *line,
                                            const char **data, int *flags);
void ERR_clear_error(void);
char *ERR_error_string(unsigned long e, char *buf);
void ERR_error_string_n(unsigned long e, char *buf, size_t len);
const char *ERR_lib_error_string(unsigned long e);
const char *ERR_func_error_string(unsigned long e);
const char *ERR_reason_error_string(unsigned long e);
void ERR_print_errors_cb(int (*cb) (const char *str, size_t len, void *u),
                         void *u);

void ERR_print_errors_fp(FILE *fp);


void ERR_print_errors(BIO *bp);

void ERR_add_error_data(int num, ...);
void ERR_add_error_vdata(int num, va_list args);
void ERR_load_strings(int lib, ERR_STRING_DATA str[]);
void ERR_unload_strings(int lib, ERR_STRING_DATA str[]);
void ERR_load_ERR_strings(void);
void ERR_load_crypto_strings(void);
void ERR_free_strings(void);

void ERR_remove_thread_state(const CRYPTO_THREADID *tid);

void ERR_remove_state(unsigned long pid);

ERR_STATE *ERR_get_state(void);


struct lhash_st_ERR_STRING_DATA *ERR_get_string_table(void);
struct lhash_st_ERR_STATE *ERR_get_err_state_table(void);
void ERR_release_err_state_table(struct lhash_st_ERR_STATE **hash);


int ERR_get_next_error_library(void);

int ERR_set_mark(void);
int ERR_pop_to_mark(void);







const ERR_FNS *ERR_get_implementation(void);




int ERR_set_implementation(const ERR_FNS *fns);
# 285 "/home/libraskywalker/Projects/ModelRenamer/git-master/block-sha1/../git-compat-util.h" 2
# 325 "/home/libraskywalker/Projects/ModelRenamer/git-master/block-sha1/../git-compat-util.h"

# 325 "/home/libraskywalker/Projects/ModelRenamer/git-master/block-sha1/../git-compat-util.h"
typedef uintmax_t timestamp_t;
# 342 "/home/libraskywalker/Projects/ModelRenamer/git-master/block-sha1/../git-compat-util.h"
static inline int git_has_dos_drive_prefix(const char *path)
{
 return 0;
}




static inline int git_skip_dos_drive_prefix(char **path)
{
 return 0;
}




static inline int git_is_dir_sep(int c)
{
 return c == '/';
}




static inline int git_offset_1st_component(const char *path)
{
 return git_is_dir_sep(path[0]);
}




static inline char *git_find_last_dir_sep(const char *path)
{
 return strrchr(path, '/');
}
# 407 "/home/libraskywalker/Projects/ModelRenamer/git-master/block-sha1/../git-compat-util.h"
# 1 "/home/libraskywalker/Projects/ModelRenamer/git-master/block-sha1/../compat/bswap.h" 1
# 12 "/home/libraskywalker/Projects/ModelRenamer/git-master/block-sha1/../compat/bswap.h"
static inline uint32_t default_swab32(uint32_t val)
{
 return (((val & 0xff000000) >> 24) |
  ((val & 0x00ff0000) >> 8) |
  ((val & 0x0000ff00) << 8) |
  ((val & 0x000000ff) << 24));
}

static inline uint64_t default_bswap64(uint64_t val)
{
 return (((val & (uint64_t)0x00000000000000ffULL) << 56) |
  ((val & (uint64_t)0x000000000000ff00ULL) << 40) |
  ((val & (uint64_t)0x0000000000ff0000ULL) << 24) |
  ((val & (uint64_t)0x00000000ff000000ULL) << 8) |
  ((val & (uint64_t)0x000000ff00000000ULL) >> 8) |
  ((val & (uint64_t)0x0000ff0000000000ULL) >> 24) |
  ((val & (uint64_t)0x00ff000000000000ULL) >> 40) |
  ((val & (uint64_t)0xff00000000000000ULL) >> 56));
}







static inline uint32_t git_bswap32(uint32_t x)
{
 uint32_t result;
 if (__builtin_constant_p(x))
  result = default_swab32(x);
 else
  __asm__;
 return result;
}



static inline uint64_t git_bswap64(uint64_t x)
{
 uint64_t result;
 if (__builtin_constant_p(x))
  result = default_bswap64(x);
 else
  __asm__;
 return result;
}
# 408 "/home/libraskywalker/Projects/ModelRenamer/git-master/block-sha1/../git-compat-util.h" 2

# 1 "/home/libraskywalker/Projects/ModelRenamer/git-master/block-sha1/../wildmatch.h" 1
# 13 "/home/libraskywalker/Projects/ModelRenamer/git-master/block-sha1/../wildmatch.h"
int wildmatch(const char *pattern, const char *text, unsigned int flags);
# 410 "/home/libraskywalker/Projects/ModelRenamer/git-master/block-sha1/../git-compat-util.h" 2

struct strbuf;


extern void vreportf(const char *prefix, const char *err, va_list params);
extern 1 void usage(const char *err);
extern 1 void usagef(const char *err, ...) 1;
extern 1 void die(const char *err, ...) 1;
extern 1 void die_errno(const char *err, ...) 1;
extern int error(const char *err, ...) 1;
extern int error_errno(const char *err, ...) 1;
extern void warning(const char *err, ...) 1;
extern void warning_errno(const char *err, ...) 1;
# 431 "/home/libraskywalker/Projects/ModelRenamer/git-master/block-sha1/../git-compat-util.h"
# 1 "/usr/include/openssl/x509v3.h" 1 3 4
# 64 "/usr/include/openssl/x509v3.h" 3 4
# 1 "/usr/include/openssl/conf.h" 1 3 4
# 66 "/usr/include/openssl/conf.h" 3 4
# 1 "/usr/include/openssl/e_os2.h" 1 3 4
# 56 "/usr/include/openssl/e_os2.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/openssl/opensslconf.h" 1 3 4
# 57 "/usr/include/openssl/e_os2.h" 2 3 4
# 67 "/usr/include/openssl/conf.h" 2 3 4








# 74 "/usr/include/openssl/conf.h" 3 4
typedef struct {
    char *section;
    char *name;
    char *value;
} CONF_VALUE;

struct stack_st_CONF_VALUE { _STACK stack; };
struct lhash_st_CONF_VALUE { int dummy; };

struct conf_st;
struct conf_method_st;
typedef struct conf_method_st CONF_METHOD;

struct conf_method_st {
    const char *name;
    CONF *(*create) (CONF_METHOD *meth);
    int (*init) (CONF *conf);
    int (*destroy) (CONF *conf);
    int (*destroy_data) (CONF *conf);
    int (*load_bio) (CONF *conf, BIO *bp, long *eline);
    int (*dump) (const CONF *conf, BIO *bp);
    int (*is_number) (const CONF *conf, char c);
    int (*to_int) (const CONF *conf, char c);
    int (*load) (CONF *conf, const char *name, long *eline);
};



typedef struct conf_imodule_st CONF_IMODULE;
typedef struct conf_module_st CONF_MODULE;

struct stack_st_CONF_MODULE { _STACK stack; };
struct stack_st_CONF_IMODULE { _STACK stack; };


typedef int conf_init_func (CONF_IMODULE *md, const CONF *cnf);
typedef void conf_finish_func (CONF_IMODULE *md);
# 119 "/usr/include/openssl/conf.h" 3 4
int CONF_set_default_method(CONF_METHOD *meth);
void CONF_set_nconf(CONF *conf, struct lhash_st_CONF_VALUE *hash);
struct lhash_st_CONF_VALUE *CONF_load(struct lhash_st_CONF_VALUE *conf, const char *file,
                                long *eline);

struct lhash_st_CONF_VALUE *CONF_load_fp(struct lhash_st_CONF_VALUE *conf, FILE *fp,
                                   long *eline);

struct lhash_st_CONF_VALUE *CONF_load_bio(struct lhash_st_CONF_VALUE *conf, BIO *bp,
                                    long *eline);
struct stack_st_CONF_VALUE *CONF_get_section(struct lhash_st_CONF_VALUE *conf,
                                       const char *section);
char *CONF_get_string(struct lhash_st_CONF_VALUE *conf, const char *group,
                      const char *name);
long CONF_get_number(struct lhash_st_CONF_VALUE *conf, const char *group,
                     const char *name);
void CONF_free(struct lhash_st_CONF_VALUE *conf);
int CONF_dump_fp(struct lhash_st_CONF_VALUE *conf, FILE *out);
int CONF_dump_bio(struct lhash_st_CONF_VALUE *conf, BIO *out);

void OPENSSL_config(const char *config_name);
void OPENSSL_no_config(void);






struct conf_st {
    CONF_METHOD *meth;
    void *meth_data;
    struct lhash_st_CONF_VALUE *data;
};

CONF *NCONF_new(CONF_METHOD *meth);
CONF_METHOD *NCONF_default(void);
CONF_METHOD *NCONF_WIN32(void);




void NCONF_free(CONF *conf);
void NCONF_free_data(CONF *conf);

int NCONF_load(CONF *conf, const char *file, long *eline);

int NCONF_load_fp(CONF *conf, FILE *fp, long *eline);

int NCONF_load_bio(CONF *conf, BIO *bp, long *eline);
struct stack_st_CONF_VALUE *NCONF_get_section(const CONF *conf,
                                        const char *section);
char *NCONF_get_string(const CONF *conf, const char *group, const char *name);
int NCONF_get_number_e(const CONF *conf, const char *group, const char *name,
                       long *result);
int NCONF_dump_fp(const CONF *conf, FILE *out);
int NCONF_dump_bio(const CONF *conf, BIO *out);
# 185 "/usr/include/openssl/conf.h" 3 4
int CONF_modules_load(const CONF *cnf, const char *appname,
                      unsigned long flags);
int CONF_modules_load_file(const char *filename, const char *appname,
                           unsigned long flags);
void CONF_modules_unload(int all);
void CONF_modules_finish(void);
void CONF_modules_free(void);
int CONF_module_add(const char *name, conf_init_func *ifunc,
                    conf_finish_func *ffunc);

const char *CONF_imodule_get_name(const CONF_IMODULE *md);
const char *CONF_imodule_get_value(const CONF_IMODULE *md);
void *CONF_imodule_get_usr_data(const CONF_IMODULE *md);
void CONF_imodule_set_usr_data(CONF_IMODULE *md, void *usr_data);
CONF_MODULE *CONF_imodule_get_module(const CONF_IMODULE *md);
unsigned long CONF_imodule_get_flags(const CONF_IMODULE *md);
void CONF_imodule_set_flags(CONF_IMODULE *md, unsigned long flags);
void *CONF_module_get_usr_data(CONF_MODULE *pmod);
void CONF_module_set_usr_data(CONF_MODULE *pmod, void *usr_data);

char *CONF_get1_default_config_file(void);

int CONF_parse_list(const char *list, int sep, int nospc,
                    int (*list_cb) (const char *elem, int len, void *usr),
                    void *arg);

void OPENSSL_load_builtin_modules(void);






void ERR_load_CONF_strings(void);
# 65 "/usr/include/openssl/x509v3.h" 2 3 4
# 78 "/usr/include/openssl/x509v3.h" 3 4
struct v3_ext_method;
struct v3_ext_ctx;



typedef void *(*X509V3_EXT_NEW)(void);
typedef void (*X509V3_EXT_FREE) (void *);
typedef void *(*X509V3_EXT_D2I)(void *, const unsigned char **, long);
typedef int (*X509V3_EXT_I2D) (void *, unsigned char **);
typedef struct stack_st_CONF_VALUE *
    (*X509V3_EXT_I2V) (const struct v3_ext_method *method, void *ext,
                       struct stack_st_CONF_VALUE *extlist);
typedef void *(*X509V3_EXT_V2I)(const struct v3_ext_method *method,
                                struct v3_ext_ctx *ctx,
                                struct stack_st_CONF_VALUE *values);
typedef char *(*X509V3_EXT_I2S)(const struct v3_ext_method *method,
                                void *ext);
typedef void *(*X509V3_EXT_S2I)(const struct v3_ext_method *method,
                                struct v3_ext_ctx *ctx, const char *str);
typedef int (*X509V3_EXT_I2R) (const struct v3_ext_method *method, void *ext,
                               BIO *out, int indent);
typedef void *(*X509V3_EXT_R2I)(const struct v3_ext_method *method,
                                struct v3_ext_ctx *ctx, const char *str);



struct v3_ext_method {
    int ext_nid;
    int ext_flags;

    ASN1_ITEM_EXP *it;

    X509V3_EXT_NEW ext_new;
    X509V3_EXT_FREE ext_free;
    X509V3_EXT_D2I d2i;
    X509V3_EXT_I2D i2d;

    X509V3_EXT_I2S i2s;
    X509V3_EXT_S2I s2i;

    X509V3_EXT_I2V i2v;
    X509V3_EXT_V2I v2i;

    X509V3_EXT_I2R i2r;
    X509V3_EXT_R2I r2i;
    void *usr_data;
};

typedef struct X509V3_CONF_METHOD_st {
    char *(*get_string) (void *db, char *section, char *value);
    struct stack_st_CONF_VALUE *(*get_section) (void *db, char *section);
    void (*free_string) (void *db, char *string);
    void (*free_section) (void *db, struct stack_st_CONF_VALUE *section);
} X509V3_CONF_METHOD;


struct v3_ext_ctx {

    int flags;
    X509 *issuer_cert;
    X509 *subject_cert;
    X509_REQ *subject_req;
    X509_CRL *crl;
    X509V3_CONF_METHOD *db_meth;
    void *db;

};

typedef struct v3_ext_method X509V3_EXT_METHOD;

struct stack_st_X509V3_EXT_METHOD { _STACK stack; };






typedef BIT_STRING_BITNAME ENUMERATED_NAMES;

typedef struct BASIC_CONSTRAINTS_st {
    int ca;
    ASN1_INTEGER *pathlen;
} BASIC_CONSTRAINTS;

typedef struct PKEY_USAGE_PERIOD_st {
    ASN1_GENERALIZEDTIME *notBefore;
    ASN1_GENERALIZEDTIME *notAfter;
} PKEY_USAGE_PERIOD;

typedef struct otherName_st {
    ASN1_OBJECT *type_id;
    ASN1_TYPE *value;
} OTHERNAME;

typedef struct EDIPartyName_st {
    ASN1_STRING *nameAssigner;
    ASN1_STRING *partyName;
} EDIPARTYNAME;

typedef struct GENERAL_NAME_st {
# 187 "/usr/include/openssl/x509v3.h" 3 4
    int type;
    union {
        char *ptr;
        OTHERNAME *otherName;
        ASN1_IA5STRING *rfc822Name;
        ASN1_IA5STRING *dNSName;
        ASN1_TYPE *x400Address;
        X509_NAME *directoryName;
        EDIPARTYNAME *ediPartyName;
        ASN1_IA5STRING *uniformResourceIdentifier;
        ASN1_OCTET_STRING *iPAddress;
        ASN1_OBJECT *registeredID;

        ASN1_OCTET_STRING *ip;
        X509_NAME *dirn;
        ASN1_IA5STRING *ia5;

        ASN1_OBJECT *rid;
        ASN1_TYPE *other;
    } d;
} GENERAL_NAME;

typedef struct stack_st_GENERAL_NAME GENERAL_NAMES;

typedef struct ACCESS_DESCRIPTION_st {
    ASN1_OBJECT *method;
    GENERAL_NAME *location;
} ACCESS_DESCRIPTION;

typedef struct stack_st_ACCESS_DESCRIPTION AUTHORITY_INFO_ACCESS;

typedef struct stack_st_ASN1_OBJECT EXTENDED_KEY_USAGE;

struct stack_st_GENERAL_NAME { _STACK stack; };


struct stack_st_ACCESS_DESCRIPTION { _STACK stack; };


typedef struct DIST_POINT_NAME_st {
    int type;
    union {
        GENERAL_NAMES *fullname;
        struct stack_st_X509_NAME_ENTRY *relativename;
    } name;

    X509_NAME *dpname;
} DIST_POINT_NAME;
# 250 "/usr/include/openssl/x509v3.h" 3 4
struct DIST_POINT_st {
    DIST_POINT_NAME *distpoint;
    ASN1_BIT_STRING *reasons;
    GENERAL_NAMES *CRLissuer;
    int dp_reasons;
};

typedef struct stack_st_DIST_POINT CRL_DIST_POINTS;

struct stack_st_DIST_POINT { _STACK stack; };


struct AUTHORITY_KEYID_st {
    ASN1_OCTET_STRING *keyid;
    GENERAL_NAMES *issuer;
    ASN1_INTEGER *serial;
};



typedef struct SXNET_ID_st {
    ASN1_INTEGER *zone;
    ASN1_OCTET_STRING *user;
} SXNETID;

struct stack_st_SXNETID { _STACK stack; };


typedef struct SXNET_st {
    ASN1_INTEGER *version;
    struct stack_st_SXNETID *ids;
} SXNET;

typedef struct NOTICEREF_st {
    ASN1_STRING *organization;
    struct stack_st_ASN1_INTEGER *noticenos;
} NOTICEREF;

typedef struct USERNOTICE_st {
    NOTICEREF *noticeref;
    ASN1_STRING *exptext;
} USERNOTICE;

typedef struct POLICYQUALINFO_st {
    ASN1_OBJECT *pqualid;
    union {
        ASN1_IA5STRING *cpsuri;
        USERNOTICE *usernotice;
        ASN1_TYPE *other;
    } d;
} POLICYQUALINFO;

struct stack_st_POLICYQUALINFO { _STACK stack; };


typedef struct POLICYINFO_st {
    ASN1_OBJECT *policyid;
    struct stack_st_POLICYQUALINFO *qualifiers;
} POLICYINFO;

typedef struct stack_st_POLICYINFO CERTIFICATEPOLICIES;

struct stack_st_POLICYINFO { _STACK stack; };


typedef struct POLICY_MAPPING_st {
    ASN1_OBJECT *issuerDomainPolicy;
    ASN1_OBJECT *subjectDomainPolicy;
} POLICY_MAPPING;

struct stack_st_POLICY_MAPPING { _STACK stack; };

typedef struct stack_st_POLICY_MAPPING POLICY_MAPPINGS;

typedef struct GENERAL_SUBTREE_st {
    GENERAL_NAME *base;
    ASN1_INTEGER *minimum;
    ASN1_INTEGER *maximum;
} GENERAL_SUBTREE;

struct stack_st_GENERAL_SUBTREE { _STACK stack; };

struct NAME_CONSTRAINTS_st {
    struct stack_st_GENERAL_SUBTREE *permittedSubtrees;
    struct stack_st_GENERAL_SUBTREE *excludedSubtrees;
};

typedef struct POLICY_CONSTRAINTS_st {
    ASN1_INTEGER *requireExplicitPolicy;
    ASN1_INTEGER *inhibitPolicyMapping;
} POLICY_CONSTRAINTS;


typedef struct PROXY_POLICY_st {
    ASN1_OBJECT *policyLanguage;
    ASN1_OCTET_STRING *policy;
} PROXY_POLICY;

typedef struct PROXY_CERT_INFO_EXTENSION_st {
    ASN1_INTEGER *pcPathLengthConstraint;
    PROXY_POLICY *proxyPolicy;
} PROXY_CERT_INFO_EXTENSION;

PROXY_POLICY *PROXY_POLICY_new(void); void PROXY_POLICY_free(PROXY_POLICY *a); PROXY_POLICY *d2i_PROXY_POLICY(PROXY_POLICY **a, const unsigned char **in, long len); int i2d_PROXY_POLICY(PROXY_POLICY *a, unsigned char **out); extern const ASN1_ITEM PROXY_POLICY_it;
PROXY_CERT_INFO_EXTENSION *PROXY_CERT_INFO_EXTENSION_new(void); void PROXY_CERT_INFO_EXTENSION_free(PROXY_CERT_INFO_EXTENSION *a); PROXY_CERT_INFO_EXTENSION *d2i_PROXY_CERT_INFO_EXTENSION(PROXY_CERT_INFO_EXTENSION **a, const unsigned char **in, long len); int i2d_PROXY_CERT_INFO_EXTENSION(PROXY_CERT_INFO_EXTENSION *a, unsigned char **out); extern const ASN1_ITEM PROXY_CERT_INFO_EXTENSION_it;

struct ISSUING_DIST_POINT_st {
    DIST_POINT_NAME *distpoint;
    int onlyuser;
    int onlyCA;
    ASN1_BIT_STRING *onlysomereasons;
    int indirectCRL;
    int onlyattr;
};
# 458 "/usr/include/openssl/x509v3.h" 3 4
typedef struct x509_purpose_st {
    int purpose;
    int trust;
    int flags;
    int (*check_purpose) (const struct x509_purpose_st *, const X509 *, int);
    char *name;
    char *sname;
    void *usr_data;
} X509_PURPOSE;
# 504 "/usr/include/openssl/x509v3.h" 3 4
struct stack_st_X509_PURPOSE { _STACK stack; };

BASIC_CONSTRAINTS *BASIC_CONSTRAINTS_new(void); void BASIC_CONSTRAINTS_free(BASIC_CONSTRAINTS *a); BASIC_CONSTRAINTS *d2i_BASIC_CONSTRAINTS(BASIC_CONSTRAINTS **a, const unsigned char **in, long len); int i2d_BASIC_CONSTRAINTS(BASIC_CONSTRAINTS *a, unsigned char **out); extern const ASN1_ITEM BASIC_CONSTRAINTS_it;

SXNET *SXNET_new(void); void SXNET_free(SXNET *a); SXNET *d2i_SXNET(SXNET **a, const unsigned char **in, long len); int i2d_SXNET(SXNET *a, unsigned char **out); extern const ASN1_ITEM SXNET_it;
SXNETID *SXNETID_new(void); void SXNETID_free(SXNETID *a); SXNETID *d2i_SXNETID(SXNETID **a, const unsigned char **in, long len); int i2d_SXNETID(SXNETID *a, unsigned char **out); extern const ASN1_ITEM SXNETID_it;

int SXNET_add_id_asc(SXNET **psx, char *zone, char *user, int userlen);
int SXNET_add_id_ulong(SXNET **psx, unsigned long lzone, char *user,
                       int userlen);
int SXNET_add_id_INTEGER(SXNET **psx, ASN1_INTEGER *izone, char *user,
                         int userlen);

ASN1_OCTET_STRING *SXNET_get_id_asc(SXNET *sx, char *zone);
ASN1_OCTET_STRING *SXNET_get_id_ulong(SXNET *sx, unsigned long lzone);
ASN1_OCTET_STRING *SXNET_get_id_INTEGER(SXNET *sx, ASN1_INTEGER *zone);

AUTHORITY_KEYID *AUTHORITY_KEYID_new(void); void AUTHORITY_KEYID_free(AUTHORITY_KEYID *a); AUTHORITY_KEYID *d2i_AUTHORITY_KEYID(AUTHORITY_KEYID **a, const unsigned char **in, long len); int i2d_AUTHORITY_KEYID(AUTHORITY_KEYID *a, unsigned char **out); extern const ASN1_ITEM AUTHORITY_KEYID_it;

PKEY_USAGE_PERIOD *PKEY_USAGE_PERIOD_new(void); void PKEY_USAGE_PERIOD_free(PKEY_USAGE_PERIOD *a); PKEY_USAGE_PERIOD *d2i_PKEY_USAGE_PERIOD(PKEY_USAGE_PERIOD **a, const unsigned char **in, long len); int i2d_PKEY_USAGE_PERIOD(PKEY_USAGE_PERIOD *a, unsigned char **out); extern const ASN1_ITEM PKEY_USAGE_PERIOD_it;

GENERAL_NAME *GENERAL_NAME_new(void); void GENERAL_NAME_free(GENERAL_NAME *a); GENERAL_NAME *d2i_GENERAL_NAME(GENERAL_NAME **a, const unsigned char **in, long len); int i2d_GENERAL_NAME(GENERAL_NAME *a, unsigned char **out); extern const ASN1_ITEM GENERAL_NAME_it;
GENERAL_NAME *GENERAL_NAME_dup(GENERAL_NAME *a);
int GENERAL_NAME_cmp(GENERAL_NAME *a, GENERAL_NAME *b);

ASN1_BIT_STRING *v2i_ASN1_BIT_STRING(X509V3_EXT_METHOD *method,
                                     X509V3_CTX *ctx,
                                     struct stack_st_CONF_VALUE *nval);
struct stack_st_CONF_VALUE *i2v_ASN1_BIT_STRING(X509V3_EXT_METHOD *method,
                                          ASN1_BIT_STRING *bits,
                                          struct stack_st_CONF_VALUE *extlist);

struct stack_st_CONF_VALUE *i2v_GENERAL_NAME(X509V3_EXT_METHOD *method,
                                       GENERAL_NAME *gen,
                                       struct stack_st_CONF_VALUE *ret);
int GENERAL_NAME_print(BIO *out, GENERAL_NAME *gen);

GENERAL_NAMES *GENERAL_NAMES_new(void); void GENERAL_NAMES_free(GENERAL_NAMES *a); GENERAL_NAMES *d2i_GENERAL_NAMES(GENERAL_NAMES **a, const unsigned char **in, long len); int i2d_GENERAL_NAMES(GENERAL_NAMES *a, unsigned char **out); extern const ASN1_ITEM GENERAL_NAMES_it;

struct stack_st_CONF_VALUE *i2v_GENERAL_NAMES(X509V3_EXT_METHOD *method,
                                        GENERAL_NAMES *gen,
                                        struct stack_st_CONF_VALUE *extlist);
GENERAL_NAMES *v2i_GENERAL_NAMES(const X509V3_EXT_METHOD *method,
                                 X509V3_CTX *ctx, struct stack_st_CONF_VALUE *nval);

OTHERNAME *OTHERNAME_new(void); void OTHERNAME_free(OTHERNAME *a); OTHERNAME *d2i_OTHERNAME(OTHERNAME **a, const unsigned char **in, long len); int i2d_OTHERNAME(OTHERNAME *a, unsigned char **out); extern const ASN1_ITEM OTHERNAME_it;
EDIPARTYNAME *EDIPARTYNAME_new(void); void EDIPARTYNAME_free(EDIPARTYNAME *a); EDIPARTYNAME *d2i_EDIPARTYNAME(EDIPARTYNAME **a, const unsigned char **in, long len); int i2d_EDIPARTYNAME(EDIPARTYNAME *a, unsigned char **out); extern const ASN1_ITEM EDIPARTYNAME_it;
int OTHERNAME_cmp(OTHERNAME *a, OTHERNAME *b);
void GENERAL_NAME_set0_value(GENERAL_NAME *a, int type, void *value);
void *GENERAL_NAME_get0_value(GENERAL_NAME *a, int *ptype);
int GENERAL_NAME_set0_othername(GENERAL_NAME *gen,
                                ASN1_OBJECT *oid, ASN1_TYPE *value);
int GENERAL_NAME_get0_otherName(GENERAL_NAME *gen,
                                ASN1_OBJECT **poid, ASN1_TYPE **pvalue);

char *i2s_ASN1_OCTET_STRING(X509V3_EXT_METHOD *method,
                            ASN1_OCTET_STRING *ia5);
ASN1_OCTET_STRING *s2i_ASN1_OCTET_STRING(X509V3_EXT_METHOD *method,
                                         X509V3_CTX *ctx, char *str);

EXTENDED_KEY_USAGE *EXTENDED_KEY_USAGE_new(void); void EXTENDED_KEY_USAGE_free(EXTENDED_KEY_USAGE *a); EXTENDED_KEY_USAGE *d2i_EXTENDED_KEY_USAGE(EXTENDED_KEY_USAGE **a, const unsigned char **in, long len); int i2d_EXTENDED_KEY_USAGE(EXTENDED_KEY_USAGE *a, unsigned char **out); extern const ASN1_ITEM EXTENDED_KEY_USAGE_it;
int i2a_ACCESS_DESCRIPTION(BIO *bp, ACCESS_DESCRIPTION *a);

CERTIFICATEPOLICIES *CERTIFICATEPOLICIES_new(void); void CERTIFICATEPOLICIES_free(CERTIFICATEPOLICIES *a); CERTIFICATEPOLICIES *d2i_CERTIFICATEPOLICIES(CERTIFICATEPOLICIES **a, const unsigned char **in, long len); int i2d_CERTIFICATEPOLICIES(CERTIFICATEPOLICIES *a, unsigned char **out); extern const ASN1_ITEM CERTIFICATEPOLICIES_it;
POLICYINFO *POLICYINFO_new(void); void POLICYINFO_free(POLICYINFO *a); POLICYINFO *d2i_POLICYINFO(POLICYINFO **a, const unsigned char **in, long len); int i2d_POLICYINFO(POLICYINFO *a, unsigned char **out); extern const ASN1_ITEM POLICYINFO_it;
POLICYQUALINFO *POLICYQUALINFO_new(void); void POLICYQUALINFO_free(POLICYQUALINFO *a); POLICYQUALINFO *d2i_POLICYQUALINFO(POLICYQUALINFO **a, const unsigned char **in, long len); int i2d_POLICYQUALINFO(POLICYQUALINFO *a, unsigned char **out); extern const ASN1_ITEM POLICYQUALINFO_it;
USERNOTICE *USERNOTICE_new(void); void USERNOTICE_free(USERNOTICE *a); USERNOTICE *d2i_USERNOTICE(USERNOTICE **a, const unsigned char **in, long len); int i2d_USERNOTICE(USERNOTICE *a, unsigned char **out); extern const ASN1_ITEM USERNOTICE_it;
NOTICEREF *NOTICEREF_new(void); void NOTICEREF_free(NOTICEREF *a); NOTICEREF *d2i_NOTICEREF(NOTICEREF **a, const unsigned char **in, long len); int i2d_NOTICEREF(NOTICEREF *a, unsigned char **out); extern const ASN1_ITEM NOTICEREF_it;

CRL_DIST_POINTS *CRL_DIST_POINTS_new(void); void CRL_DIST_POINTS_free(CRL_DIST_POINTS *a); CRL_DIST_POINTS *d2i_CRL_DIST_POINTS(CRL_DIST_POINTS **a, const unsigned char **in, long len); int i2d_CRL_DIST_POINTS(CRL_DIST_POINTS *a, unsigned char **out); extern const ASN1_ITEM CRL_DIST_POINTS_it;
DIST_POINT *DIST_POINT_new(void); void DIST_POINT_free(DIST_POINT *a); DIST_POINT *d2i_DIST_POINT(DIST_POINT **a, const unsigned char **in, long len); int i2d_DIST_POINT(DIST_POINT *a, unsigned char **out); extern const ASN1_ITEM DIST_POINT_it;
DIST_POINT_NAME *DIST_POINT_NAME_new(void); void DIST_POINT_NAME_free(DIST_POINT_NAME *a); DIST_POINT_NAME *d2i_DIST_POINT_NAME(DIST_POINT_NAME **a, const unsigned char **in, long len); int i2d_DIST_POINT_NAME(DIST_POINT_NAME *a, unsigned char **out); extern const ASN1_ITEM DIST_POINT_NAME_it;
ISSUING_DIST_POINT *ISSUING_DIST_POINT_new(void); void ISSUING_DIST_POINT_free(ISSUING_DIST_POINT *a); ISSUING_DIST_POINT *d2i_ISSUING_DIST_POINT(ISSUING_DIST_POINT **a, const unsigned char **in, long len); int i2d_ISSUING_DIST_POINT(ISSUING_DIST_POINT *a, unsigned char **out); extern const ASN1_ITEM ISSUING_DIST_POINT_it;

int DIST_POINT_set_dpname(DIST_POINT_NAME *dpn, X509_NAME *iname);

int NAME_CONSTRAINTS_check(X509 *x, NAME_CONSTRAINTS *nc);

ACCESS_DESCRIPTION *ACCESS_DESCRIPTION_new(void); void ACCESS_DESCRIPTION_free(ACCESS_DESCRIPTION *a); ACCESS_DESCRIPTION *d2i_ACCESS_DESCRIPTION(ACCESS_DESCRIPTION **a, const unsigned char **in, long len); int i2d_ACCESS_DESCRIPTION(ACCESS_DESCRIPTION *a, unsigned char **out); extern const ASN1_ITEM ACCESS_DESCRIPTION_it;
AUTHORITY_INFO_ACCESS *AUTHORITY_INFO_ACCESS_new(void); void AUTHORITY_INFO_ACCESS_free(AUTHORITY_INFO_ACCESS *a); AUTHORITY_INFO_ACCESS *d2i_AUTHORITY_INFO_ACCESS(AUTHORITY_INFO_ACCESS **a, const unsigned char **in, long len); int i2d_AUTHORITY_INFO_ACCESS(AUTHORITY_INFO_ACCESS *a, unsigned char **out); extern const ASN1_ITEM AUTHORITY_INFO_ACCESS_it;

extern const ASN1_ITEM POLICY_MAPPING_it;
POLICY_MAPPING *POLICY_MAPPING_new(void); void POLICY_MAPPING_free(POLICY_MAPPING *a);
extern const ASN1_ITEM POLICY_MAPPINGS_it;

extern const ASN1_ITEM GENERAL_SUBTREE_it;
GENERAL_SUBTREE *GENERAL_SUBTREE_new(void); void GENERAL_SUBTREE_free(GENERAL_SUBTREE *a);

extern const ASN1_ITEM NAME_CONSTRAINTS_it;
NAME_CONSTRAINTS *NAME_CONSTRAINTS_new(void); void NAME_CONSTRAINTS_free(NAME_CONSTRAINTS *a);

POLICY_CONSTRAINTS *POLICY_CONSTRAINTS_new(void); void POLICY_CONSTRAINTS_free(POLICY_CONSTRAINTS *a);
extern const ASN1_ITEM POLICY_CONSTRAINTS_it;

GENERAL_NAME *a2i_GENERAL_NAME(GENERAL_NAME *out,
                               const X509V3_EXT_METHOD *method,
                               X509V3_CTX *ctx, int gen_type, char *value,
                               int is_nc);


GENERAL_NAME *v2i_GENERAL_NAME(const X509V3_EXT_METHOD *method,
                               X509V3_CTX *ctx, CONF_VALUE *cnf);
GENERAL_NAME *v2i_GENERAL_NAME_ex(GENERAL_NAME *out,
                                  const X509V3_EXT_METHOD *method,
                                  X509V3_CTX *ctx, CONF_VALUE *cnf,
                                  int is_nc);
void X509V3_conf_free(CONF_VALUE *val);

X509_EXTENSION *X509V3_EXT_nconf_nid(CONF *conf, X509V3_CTX *ctx, int ext_nid,
                                     char *value);
X509_EXTENSION *X509V3_EXT_nconf(CONF *conf, X509V3_CTX *ctx, char *name,
                                 char *value);
int X509V3_EXT_add_nconf_sk(CONF *conf, X509V3_CTX *ctx, char *section,
                            struct stack_st_X509_EXTENSION **sk);
int X509V3_EXT_add_nconf(CONF *conf, X509V3_CTX *ctx, char *section,
                         X509 *cert);
int X509V3_EXT_REQ_add_nconf(CONF *conf, X509V3_CTX *ctx, char *section,
                             X509_REQ *req);
int X509V3_EXT_CRL_add_nconf(CONF *conf, X509V3_CTX *ctx, char *section,
                             X509_CRL *crl);

X509_EXTENSION *X509V3_EXT_conf_nid(struct lhash_st_CONF_VALUE *conf,
                                    X509V3_CTX *ctx, int ext_nid,
                                    char *value);
X509_EXTENSION *X509V3_EXT_conf(struct lhash_st_CONF_VALUE *conf, X509V3_CTX *ctx,
                                char *name, char *value);
int X509V3_EXT_add_conf(struct lhash_st_CONF_VALUE *conf, X509V3_CTX *ctx,
                        char *section, X509 *cert);
int X509V3_EXT_REQ_add_conf(struct lhash_st_CONF_VALUE *conf, X509V3_CTX *ctx,
                            char *section, X509_REQ *req);
int X509V3_EXT_CRL_add_conf(struct lhash_st_CONF_VALUE *conf, X509V3_CTX *ctx,
                            char *section, X509_CRL *crl);

int X509V3_add_value_bool_nf(char *name, int asn1_bool,
                             struct stack_st_CONF_VALUE **extlist);
int X509V3_get_value_bool(CONF_VALUE *value, int *asn1_bool);
int X509V3_get_value_int(CONF_VALUE *value, ASN1_INTEGER **aint);
void X509V3_set_nconf(X509V3_CTX *ctx, CONF *conf);
void X509V3_set_conf_lhash(X509V3_CTX *ctx, struct lhash_st_CONF_VALUE *lhash);


char *X509V3_get_string(X509V3_CTX *ctx, char *name, char *section);
struct stack_st_CONF_VALUE *X509V3_get_section(X509V3_CTX *ctx, char *section);
void X509V3_string_free(X509V3_CTX *ctx, char *str);
void X509V3_section_free(X509V3_CTX *ctx, struct stack_st_CONF_VALUE *section);
void X509V3_set_ctx(X509V3_CTX *ctx, X509 *issuer, X509 *subject,
                    X509_REQ *req, X509_CRL *crl, int flags);

int X509V3_add_value(const char *name, const char *value,
                     struct stack_st_CONF_VALUE **extlist);
int X509V3_add_value_uchar(const char *name, const unsigned char *value,
                           struct stack_st_CONF_VALUE **extlist);
int X509V3_add_value_bool(const char *name, int asn1_bool,
                          struct stack_st_CONF_VALUE **extlist);
int X509V3_add_value_int(const char *name, ASN1_INTEGER *aint,
                         struct stack_st_CONF_VALUE **extlist);
char *i2s_ASN1_INTEGER(X509V3_EXT_METHOD *meth, ASN1_INTEGER *aint);
ASN1_INTEGER *s2i_ASN1_INTEGER(X509V3_EXT_METHOD *meth, char *value);
char *i2s_ASN1_ENUMERATED(X509V3_EXT_METHOD *meth, ASN1_ENUMERATED *aint);
char *i2s_ASN1_ENUMERATED_TABLE(X509V3_EXT_METHOD *meth,
                                ASN1_ENUMERATED *aint);
int X509V3_EXT_add(X509V3_EXT_METHOD *ext);
int X509V3_EXT_add_list(X509V3_EXT_METHOD *extlist);
int X509V3_EXT_add_alias(int nid_to, int nid_from);
void X509V3_EXT_cleanup(void);

const X509V3_EXT_METHOD *X509V3_EXT_get(X509_EXTENSION *ext);
const X509V3_EXT_METHOD *X509V3_EXT_get_nid(int nid);
int X509V3_add_standard_extensions(void);
struct stack_st_CONF_VALUE *X509V3_parse_list(const char *line);
void *X509V3_EXT_d2i(X509_EXTENSION *ext);
void *X509V3_get_d2i(struct stack_st_X509_EXTENSION *x, int nid, int *crit,
                     int *idx);
int X509V3_EXT_free(int nid, void *ext_data);

X509_EXTENSION *X509V3_EXT_i2d(int ext_nid, int crit, void *ext_struc);
int X509V3_add1_i2d(struct stack_st_X509_EXTENSION **x, int nid, void *value,
                    int crit, unsigned long flags);

char *hex_to_string(const unsigned char *buffer, long len);
unsigned char *string_to_hex(const char *str, long *len);
int name_cmp(const char *name, const char *cmp);

void X509V3_EXT_val_prn(BIO *out, struct stack_st_CONF_VALUE *val, int indent,
                        int ml);
int X509V3_EXT_print(BIO *out, X509_EXTENSION *ext, unsigned long flag,
                     int indent);
int X509V3_EXT_print_fp(FILE *out, X509_EXTENSION *ext, int flag, int indent);

int X509V3_extensions_print(BIO *out, char *title,
                            struct stack_st_X509_EXTENSION *exts,
                            unsigned long flag, int indent);

int X509_check_ca(X509 *x);
int X509_check_purpose(X509 *x, int id, int ca);
int X509_supported_extension(X509_EXTENSION *ex);
int X509_PURPOSE_set(int *p, int purpose);
int X509_check_issued(X509 *issuer, X509 *subject);
int X509_check_akid(X509 *issuer, AUTHORITY_KEYID *akid);
int X509_PURPOSE_get_count(void);
X509_PURPOSE *X509_PURPOSE_get0(int idx);
int X509_PURPOSE_get_by_sname(char *sname);
int X509_PURPOSE_get_by_id(int id);
int X509_PURPOSE_add(int id, int trust, int flags,
                     int (*ck) (const X509_PURPOSE *, const X509 *, int),
                     char *name, char *sname, void *arg);
char *X509_PURPOSE_get0_name(X509_PURPOSE *xp);
char *X509_PURPOSE_get0_sname(X509_PURPOSE *xp);
int X509_PURPOSE_get_trust(X509_PURPOSE *xp);
void X509_PURPOSE_cleanup(void);
int X509_PURPOSE_get_id(X509_PURPOSE *);

struct stack_st_OPENSSL_STRING *X509_get1_email(X509 *x);
struct stack_st_OPENSSL_STRING *X509_REQ_get1_email(X509_REQ *x);
void X509_email_free(struct stack_st_OPENSSL_STRING *sk);
struct stack_st_OPENSSL_STRING *X509_get1_ocsp(X509 *x);
# 741 "/usr/include/openssl/x509v3.h" 3 4
int X509_check_host(X509 *x, const char *chk, size_t chklen,
                    unsigned int flags, char **peername);
int X509_check_email(X509 *x, const char *chk, size_t chklen,
                     unsigned int flags);
int X509_check_ip(X509 *x, const unsigned char *chk, size_t chklen,
                  unsigned int flags);
int X509_check_ip_asc(X509 *x, const char *ipasc, unsigned int flags);

ASN1_OCTET_STRING *a2i_IPADDRESS(const char *ipasc);
ASN1_OCTET_STRING *a2i_IPADDRESS_NC(const char *ipasc);
int a2i_ipadd(unsigned char *ipout, const char *ipasc);
int X509V3_NAME_from_section(X509_NAME *nm, struct stack_st_CONF_VALUE *dn_sk,
                             unsigned long chtype);

void X509_POLICY_NODE_print(BIO *out, X509_POLICY_NODE *node, int indent);
struct stack_st_X509_POLICY_NODE { _STACK stack; };
# 909 "/usr/include/openssl/x509v3.h" 3 4
void ERR_load_X509V3_strings(void);
# 432 "/home/libraskywalker/Projects/ModelRenamer/git-master/block-sha1/../git-compat-util.h" 2
# 442 "/home/libraskywalker/Projects/ModelRenamer/git-master/block-sha1/../git-compat-util.h"

# 442 "/home/libraskywalker/Projects/ModelRenamer/git-master/block-sha1/../git-compat-util.h"
static inline int const_error(void)
{
 return -1;
}




extern void set_die_routine(1 void (*routine)(const char *err, va_list params));
extern void set_error_routine(void (*routine)(const char *err, va_list params));
extern void (*get_error_routine(void))(const char *err, va_list params);
extern void set_warn_routine(void (*routine)(const char *warn, va_list params));
extern void (*get_warn_routine(void))(const char *warn, va_list params);
extern void set_die_is_recursing_routine(int (*routine)(void));

extern int starts_with(const char *str, const char *prefix);
# 475 "/home/libraskywalker/Projects/ModelRenamer/git-master/block-sha1/../git-compat-util.h"
static inline int skip_prefix(const char *str, const char *prefix,
         const char **out)
{
 do {
  if (!*prefix) {
   *out = str;
   return 1;
  }
 } while (*str++ == *prefix++);
 return 0;
}
# 501 "/home/libraskywalker/Projects/ModelRenamer/git-master/block-sha1/../git-compat-util.h"
int skip_to_optional_arg_default(const char *str, const char *prefix,
     const char **arg, const char *def);

static inline int skip_to_optional_arg(const char *str, const char *prefix,
           const char **arg)
{
 return skip_to_optional_arg_default(str, prefix, arg, "");
}





static inline int skip_prefix_mem(const char *buf, size_t len,
      const char *prefix,
      const char **out, size_t *outlen)
{
 size_t prefix_len = strlen(prefix);
 if (prefix_len <= len && !memcmp(buf, prefix, prefix_len)) {
  *out = buf + prefix_len;
  *outlen = len - prefix_len;
  return 1;
 }
 return 0;
}





static inline int strip_suffix_mem(const char *buf, size_t *len,
       const char *suffix)
{
 size_t suflen = strlen(suffix);
 if (*len < suflen || memcmp(buf + (*len - suflen), suffix, suflen))
  return 0;
 *len -= suflen;
 return 1;
}
# 548 "/home/libraskywalker/Projects/ModelRenamer/git-master/block-sha1/../git-compat-util.h"
static inline int strip_suffix(const char *str, const char *suffix, size_t *len)
{
 *len = strlen(str);
 return strip_suffix_mem(str, len, suffix);
}

static inline int ends_with(const char *str, const char *suffix)
{
 size_t len;
 return strip_suffix(str, suffix, &len);
}
# 585 "/home/libraskywalker/Projects/ModelRenamer/git-master/block-sha1/../git-compat-util.h"
# 1 "/usr/include/x86_64-linux-gnu/sys/mman.h" 1 3 4
# 25 "/usr/include/x86_64-linux-gnu/sys/mman.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" 1 3 4
# 26 "/usr/include/x86_64-linux-gnu/sys/mman.h" 2 3 4
# 41 "/usr/include/x86_64-linux-gnu/sys/mman.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/mman.h" 1 3 4
# 45 "/usr/include/x86_64-linux-gnu/bits/mman.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/mman-linux.h" 1 3 4
# 45 "/usr/include/x86_64-linux-gnu/bits/mman.h" 2 3 4
# 42 "/usr/include/x86_64-linux-gnu/sys/mman.h" 2 3 4





# 61 "/usr/include/x86_64-linux-gnu/sys/mman.h" 3 4

# 61 "/usr/include/x86_64-linux-gnu/sys/mman.h" 3 4
extern void * mmap (void *__addr, size_t __len, int __prot, int __flags, int __fd, __off64_t __offset) __asm__ 
# 61 "/usr/include/x86_64-linux-gnu/sys/mman.h"
             1


                
# 64 "/usr/include/x86_64-linux-gnu/sys/mman.h" 3 4
               ;





extern void *mmap64 (void *__addr, size_t __len, int __prot,
       int __flags, int __fd, __off64_t __offset) 
# 71 "/usr/include/x86_64-linux-gnu/sys/mman.h"
                                                 1
# 71 "/usr/include/x86_64-linux-gnu/sys/mman.h" 3 4
                                                        ;




extern int munmap (void *__addr, size_t __len) 
# 76 "/usr/include/x86_64-linux-gnu/sys/mman.h"
                                              1
# 76 "/usr/include/x86_64-linux-gnu/sys/mman.h" 3 4
                                                     ;




extern int mprotect (void *__addr, size_t __len, int __prot) 
# 81 "/usr/include/x86_64-linux-gnu/sys/mman.h"
                                                            1
# 81 "/usr/include/x86_64-linux-gnu/sys/mman.h" 3 4
                                                                   ;







extern int msync (void *__addr, size_t __len, int __flags);




extern int madvise (void *__addr, size_t __len, int __advice) 
# 94 "/usr/include/x86_64-linux-gnu/sys/mman.h"
                                                             1
# 94 "/usr/include/x86_64-linux-gnu/sys/mman.h" 3 4
                                                                    ;



extern int posix_madvise (void *__addr, size_t __len, int __advice) 
# 98 "/usr/include/x86_64-linux-gnu/sys/mman.h"
                                                                   1
# 98 "/usr/include/x86_64-linux-gnu/sys/mman.h" 3 4
                                                                          ;




extern int mlock (const void *__addr, size_t __len) 
# 103 "/usr/include/x86_64-linux-gnu/sys/mman.h"
                                                   1
# 103 "/usr/include/x86_64-linux-gnu/sys/mman.h" 3 4
                                                          ;


extern int munlock (const void *__addr, size_t __len) 
# 106 "/usr/include/x86_64-linux-gnu/sys/mman.h"
                                                     1
# 106 "/usr/include/x86_64-linux-gnu/sys/mman.h" 3 4
                                                            ;




extern int mlockall (int __flags) 
# 111 "/usr/include/x86_64-linux-gnu/sys/mman.h"
                                 1
# 111 "/usr/include/x86_64-linux-gnu/sys/mman.h" 3 4
                                        ;



extern int munlockall (void) 
# 115 "/usr/include/x86_64-linux-gnu/sys/mman.h"
                            1
# 115 "/usr/include/x86_64-linux-gnu/sys/mman.h" 3 4
                                   ;







extern int mincore (void *__start, size_t __len, unsigned char *__vec)
     
# 124 "/usr/include/x86_64-linux-gnu/sys/mman.h"
    1
# 124 "/usr/include/x86_64-linux-gnu/sys/mman.h" 3 4
           ;
# 133 "/usr/include/x86_64-linux-gnu/sys/mman.h" 3 4
extern void *mremap (void *__addr, size_t __old_len, size_t __new_len,
       int __flags, ...) 
# 134 "/usr/include/x86_64-linux-gnu/sys/mman.h"
                        1
# 134 "/usr/include/x86_64-linux-gnu/sys/mman.h" 3 4
                               ;



extern int remap_file_pages (void *__start, size_t __size, int __prot,
        size_t __pgoff, int __flags) 
# 139 "/usr/include/x86_64-linux-gnu/sys/mman.h"
                                    1
# 139 "/usr/include/x86_64-linux-gnu/sys/mman.h" 3 4
                                           ;




extern int shm_open (const char *__name, int __oflag, mode_t __mode);


extern int shm_unlink (const char *__name);


# 586 "/home/libraskywalker/Projects/ModelRenamer/git-master/block-sha1/../git-compat-util.h" 2
# 660 "/home/libraskywalker/Projects/ModelRenamer/git-master/block-sha1/../git-compat-util.h"

# 660 "/home/libraskywalker/Projects/ModelRenamer/git-master/block-sha1/../git-compat-util.h"
extern ssize_t read_in_full(int fd, void *buf, size_t count);
# 775 "/home/libraskywalker/Projects/ModelRenamer/git-master/block-sha1/../git-compat-util.h"
typedef void (*try_to_free_t)(size_t);
extern try_to_free_t set_try_to_free_routine(try_to_free_t);

static inline size_t st_add(size_t a, size_t b)
{
 if (((b) > (
# 780 "/home/libraskywalker/Projects/ModelRenamer/git-master/block-sha1/../git-compat-util.h" 3 4
    (18446744073709551615UL) 
# 780 "/home/libraskywalker/Projects/ModelRenamer/git-master/block-sha1/../git-compat-util.h"
    >> ((8 * sizeof(uintmax_t)) - (8 * sizeof(a)))) - (a)))
  die("size_t overflow: %"
# 781 "/home/libraskywalker/Projects/ModelRenamer/git-master/block-sha1/../git-compat-util.h" 3 4
                         "l" "u"
# 781 "/home/libraskywalker/Projects/ModelRenamer/git-master/block-sha1/../git-compat-util.h"
                                " + %"
# 781 "/home/libraskywalker/Projects/ModelRenamer/git-master/block-sha1/../git-compat-util.h" 3 4
                                      "l" "u"
# 781 "/home/libraskywalker/Projects/ModelRenamer/git-master/block-sha1/../git-compat-util.h"
                                             ,
      (uintmax_t)a, (uintmax_t)b);
 return a + b;
}



static inline size_t st_mult(size_t a, size_t b)
{
 if (((a) && (b) > (
# 790 "/home/libraskywalker/Projects/ModelRenamer/git-master/block-sha1/../git-compat-util.h" 3 4
    (18446744073709551615UL) 
# 790 "/home/libraskywalker/Projects/ModelRenamer/git-master/block-sha1/../git-compat-util.h"
    >> ((8 * sizeof(uintmax_t)) - (8 * sizeof(a)))) / (a)))
  die("size_t overflow: %"
# 791 "/home/libraskywalker/Projects/ModelRenamer/git-master/block-sha1/../git-compat-util.h" 3 4
                         "l" "u"
# 791 "/home/libraskywalker/Projects/ModelRenamer/git-master/block-sha1/../git-compat-util.h"
                                " * %"
# 791 "/home/libraskywalker/Projects/ModelRenamer/git-master/block-sha1/../git-compat-util.h" 3 4
                                      "l" "u"
# 791 "/home/libraskywalker/Projects/ModelRenamer/git-master/block-sha1/../git-compat-util.h"
                                             ,
      (uintmax_t)a, (uintmax_t)b);
 return a * b;
}

static inline size_t st_sub(size_t a, size_t b)
{
 if (a < b)
  die("size_t underflow: %"
# 799 "/home/libraskywalker/Projects/ModelRenamer/git-master/block-sha1/../git-compat-util.h" 3 4
                          "l" "u"
# 799 "/home/libraskywalker/Projects/ModelRenamer/git-master/block-sha1/../git-compat-util.h"
                                 " - %"
# 799 "/home/libraskywalker/Projects/ModelRenamer/git-master/block-sha1/../git-compat-util.h" 3 4
                                       "l" "u"
# 799 "/home/libraskywalker/Projects/ModelRenamer/git-master/block-sha1/../git-compat-util.h"
                                              ,
      (uintmax_t)a, (uintmax_t)b);
 return a - b;
}
# 812 "/home/libraskywalker/Projects/ModelRenamer/git-master/block-sha1/../git-compat-util.h"
extern char *xstrdup(const char *str);
extern void *xmalloc(size_t size);
extern void *xmallocz(size_t size);
extern void *xmallocz_gently(size_t size);
extern void *xmemdupz(const void *data, size_t len);
extern char *xstrndup(const char *str, size_t len);
extern void *xrealloc(void *ptr, size_t size);
extern void *xcalloc(size_t nmemb, size_t size);
extern void *xmmap(void *start, size_t length, int prot, int flags, int fd, off_t offset);
extern void *xmmap_gently(void *start, size_t length, int prot, int flags, int fd, off_t offset);
extern int xopen(const char *path, int flags, ...);
extern ssize_t xread(int fd, void *buf, size_t len);
extern ssize_t xwrite(int fd, const void *buf, size_t len);
extern ssize_t xpread(int fd, void *buf, size_t len, off_t offset);
extern int xdup(int fd);
extern FILE *xfopen(const char *path, const char *mode);
extern FILE *xfdopen(int fd, const char *mode);
extern int xmkstemp(char *temp_filename);
extern int xmkstemp_mode(char *temp_filename, int mode);
extern char *xgetcwd(void);
extern FILE *fopen_for_writing(const char *path);
extern FILE *fopen_or_warn(const char *path, const char *mode);
# 846 "/home/libraskywalker/Projects/ModelRenamer/git-master/block-sha1/../git-compat-util.h"
static inline void copy_array(void *dst, const void *src, size_t n, size_t size)
{
 if (n)
  memcpy(dst, src, st_mult(size, n));
}



static inline void move_array(void *dst, const void *src, size_t n, size_t size)
{
 if (n)
  memmove(dst, src, st_mult(size, n));
}
# 917 "/home/libraskywalker/Projects/ModelRenamer/git-master/block-sha1/../git-compat-util.h"
static inline char *xstrdup_or_null(const char *str)
{
 return str ? xstrdup(str) : 
# 919 "/home/libraskywalker/Projects/ModelRenamer/git-master/block-sha1/../git-compat-util.h" 3 4
                            ((void *)0)
# 919 "/home/libraskywalker/Projects/ModelRenamer/git-master/block-sha1/../git-compat-util.h"
                                ;
}

static inline size_t xsize_t(off_t len)
{
 size_t size = (size_t) len;

 if (len != (off_t) size)
  die("Cannot handle files this big");
 return size;
}

1
extern int xsnprintf(char *dst, size_t max, const char *fmt, ...);





extern int xgethostname(char *buf, size_t len);


extern const unsigned char tolower_trans_tbl[256];
# 958 "/home/libraskywalker/Projects/ModelRenamer/git-master/block-sha1/../git-compat-util.h"
extern const unsigned char sane_ctype[256];
# 986 "/home/libraskywalker/Projects/ModelRenamer/git-master/block-sha1/../git-compat-util.h"
static inline int sane_case(int x, int high)
{
 if (((sane_ctype[(unsigned char)(x)] & (0x04)) != 0))
  x = (x & ~0x20) | high;
 return x;
}

static inline int sane_iscase(int x, int is_lower)
{
 if (!((sane_ctype[(unsigned char)(x)] & (0x04)) != 0))
  return 0;

 if (is_lower)
  return (x & 0x20) != 0;
 else
  return (x & 0x20) == 0;
}

static inline int strtoul_ui(char const *s, int base, unsigned int *result)
{
 unsigned long ul;
 char *p;

 
# 1009 "/home/libraskywalker/Projects/ModelRenamer/git-master/block-sha1/../git-compat-util.h" 3 4
(*__errno_location ()) 
# 1009 "/home/libraskywalker/Projects/ModelRenamer/git-master/block-sha1/../git-compat-util.h"
      = 0;

 if (strchr(s, '-'))
  return -1;
 ul = strtoul(s, &p, base);
 if (
# 1014 "/home/libraskywalker/Projects/ModelRenamer/git-master/block-sha1/../git-compat-util.h" 3 4
    (*__errno_location ()) 
# 1014 "/home/libraskywalker/Projects/ModelRenamer/git-master/block-sha1/../git-compat-util.h"
          || *p || p == s || (unsigned int) ul != ul)
  return -1;
 *result = ul;
 return 0;
}

static inline int strtol_i(char const *s, int base, int *result)
{
 long ul;
 char *p;

 
# 1025 "/home/libraskywalker/Projects/ModelRenamer/git-master/block-sha1/../git-compat-util.h" 3 4
(*__errno_location ()) 
# 1025 "/home/libraskywalker/Projects/ModelRenamer/git-master/block-sha1/../git-compat-util.h"
      = 0;
 ul = strtol(s, &p, base);
 if (
# 1027 "/home/libraskywalker/Projects/ModelRenamer/git-master/block-sha1/../git-compat-util.h" 3 4
    (*__errno_location ()) 
# 1027 "/home/libraskywalker/Projects/ModelRenamer/git-master/block-sha1/../git-compat-util.h"
          || *p || p == s || (int) ul != ul)
  return -1;
 *result = ul;
 return 0;
}
# 1040 "/home/libraskywalker/Projects/ModelRenamer/git-master/block-sha1/../git-compat-util.h"
static inline void sane_qsort(void *base, size_t nmemb, size_t size,
         int(*compar)(const void *, const void *))
{
 if (nmemb > 1)
  qsort(base, nmemb, size, compar);
}


int git_qsort_s(void *base, size_t nmemb, size_t size,
  int (*compar)(const void *, const void *, void *), void *ctx);
# 1062 "/home/libraskywalker/Projects/ModelRenamer/git-master/block-sha1/../git-compat-util.h"
static inline int regexec_buf(const regex_t *preg, const char *buf, size_t size,
         size_t nmatch, regmatch_t pmatch[], int eflags)
{
 
# 1065 "/home/libraskywalker/Projects/ModelRenamer/git-master/block-sha1/../git-compat-util.h" 3 4
((
# 1065 "/home/libraskywalker/Projects/ModelRenamer/git-master/block-sha1/../git-compat-util.h"
nmatch > 0 && pmatch
# 1065 "/home/libraskywalker/Projects/ModelRenamer/git-master/block-sha1/../git-compat-util.h" 3 4
) ? (void) (0) : __assert_fail (
# 1065 "/home/libraskywalker/Projects/ModelRenamer/git-master/block-sha1/../git-compat-util.h"
"nmatch > 0 && pmatch"
# 1065 "/home/libraskywalker/Projects/ModelRenamer/git-master/block-sha1/../git-compat-util.h" 3 4
, "/home/libraskywalker/Projects/ModelRenamer/git-master/block-sha1/../git-compat-util.h", 1065, __PRETTY_FUNCTION__))
# 1065 "/home/libraskywalker/Projects/ModelRenamer/git-master/block-sha1/../git-compat-util.h"
                            ;
 pmatch[0].rm_so = 0;
 pmatch[0].rm_eo = size;
 return regexec(preg, buf, nmatch, pmatch, eflags | 
# 1068 "/home/libraskywalker/Projects/ModelRenamer/git-master/block-sha1/../git-compat-util.h" 3 4
                                                   (1 << 2)
# 1068 "/home/libraskywalker/Projects/ModelRenamer/git-master/block-sha1/../git-compat-util.h"
                                                               );
}
# 1115 "/home/libraskywalker/Projects/ModelRenamer/git-master/block-sha1/../git-compat-util.h"
1 1
void BUG_fl(const char *file, int line, const char *fmt, ...);
# 1128 "/home/libraskywalker/Projects/ModelRenamer/git-master/block-sha1/../git-compat-util.h"
int unlink_or_warn(const char *path);






int unlink_or_msg(const char *file, struct strbuf *err);





int rmdir_or_warn(const char *path);




int remove_or_warn(unsigned int mode, const char *path);






int access_or_warn(const char *path, int mode, unsigned flag);
int access_or_die(const char *path, int mode, unsigned flag);


int warn_on_fopen_errors(const char *path);
# 1190 "/home/libraskywalker/Projects/ModelRenamer/git-master/block-sha1/../git-compat-util.h"
static inline int is_missing_file_error(int errno_)
{
 return (errno_ == 
# 1192 "/home/libraskywalker/Projects/ModelRenamer/git-master/block-sha1/../git-compat-util.h" 3 4
                  2 
# 1192 "/home/libraskywalker/Projects/ModelRenamer/git-master/block-sha1/../git-compat-util.h"
                         || errno_ == 
# 1192 "/home/libraskywalker/Projects/ModelRenamer/git-master/block-sha1/../git-compat-util.h" 3 4
                                      20
# 1192 "/home/libraskywalker/Projects/ModelRenamer/git-master/block-sha1/../git-compat-util.h"
                                             );
}

extern int cmd_main(int, const char **);
# 11 "/home/libraskywalker/Projects/ModelRenamer/git-master/block-sha1/sha1.c" 2

# 1 "/home/libraskywalker/Projects/ModelRenamer/git-master/block-sha1/sha1.h" 1
# 9 "/home/libraskywalker/Projects/ModelRenamer/git-master/block-sha1/sha1.h"
typedef struct {
 unsigned long long size;
 unsigned int H[5];
 unsigned int W[16];
} blk_SHA_CTX;

void blk_SHA1_Init(blk_SHA_CTX *ctx);
void blk_SHA1_Update(blk_SHA_CTX *ctx, const void *dataIn, unsigned long len);
void blk_SHA1_Final(unsigned char hashout[20], blk_SHA_CTX *ctx);
# 13 "/home/libraskywalker/Projects/ModelRenamer/git-master/block-sha1/sha1.c" 2
# 86 "/home/libraskywalker/Projects/ModelRenamer/git-master/block-sha1/sha1.c"
static void blk_SHA1_Block(blk_SHA_CTX *ctx, const void *block)
{
 unsigned int A,B,C,D,E;
 unsigned int array[16];

 A = ctx->H[0];
 B = ctx->H[1];
 C = ctx->H[2];
 D = ctx->H[3];
 E = ctx->H[4];


 do { unsigned int TEMP = git_bswap32(*(unsigned int *)((unsigned char *) block + (0)*4)); (*(volatile unsigned int *)&(array[(0)&15]) = (TEMP)); E += TEMP + ({ unsigned int __res; 1; __res; }) + ((((C^D)&B)^D)) + (0x5a827999); B = ({ unsigned int __res; 1; __res; }); } while (0);
 do { unsigned int TEMP = git_bswap32(*(unsigned int *)((unsigned char *) block + (1)*4)); (*(volatile unsigned int *)&(array[(1)&15]) = (TEMP)); D += TEMP + ({ unsigned int __res; 1; __res; }) + ((((B^C)&A)^C)) + (0x5a827999); A = ({ unsigned int __res; 1; __res; }); } while (0);
 do { unsigned int TEMP = git_bswap32(*(unsigned int *)((unsigned char *) block + (2)*4)); (*(volatile unsigned int *)&(array[(2)&15]) = (TEMP)); C += TEMP + ({ unsigned int __res; 1; __res; }) + ((((A^B)&E)^B)) + (0x5a827999); E = ({ unsigned int __res; 1; __res; }); } while (0);
 do { unsigned int TEMP = git_bswap32(*(unsigned int *)((unsigned char *) block + (3)*4)); (*(volatile unsigned int *)&(array[(3)&15]) = (TEMP)); B += TEMP + ({ unsigned int __res; 1; __res; }) + ((((E^A)&D)^A)) + (0x5a827999); D = ({ unsigned int __res; 1; __res; }); } while (0);
 do { unsigned int TEMP = git_bswap32(*(unsigned int *)((unsigned char *) block + (4)*4)); (*(volatile unsigned int *)&(array[(4)&15]) = (TEMP)); A += TEMP + ({ unsigned int __res; 1; __res; }) + ((((D^E)&C)^E)) + (0x5a827999); C = ({ unsigned int __res; 1; __res; }); } while (0);
 do { unsigned int TEMP = git_bswap32(*(unsigned int *)((unsigned char *) block + (5)*4)); (*(volatile unsigned int *)&(array[(5)&15]) = (TEMP)); E += TEMP + ({ unsigned int __res; 1; __res; }) + ((((C^D)&B)^D)) + (0x5a827999); B = ({ unsigned int __res; 1; __res; }); } while (0);
 do { unsigned int TEMP = git_bswap32(*(unsigned int *)((unsigned char *) block + (6)*4)); (*(volatile unsigned int *)&(array[(6)&15]) = (TEMP)); D += TEMP + ({ unsigned int __res; 1; __res; }) + ((((B^C)&A)^C)) + (0x5a827999); A = ({ unsigned int __res; 1; __res; }); } while (0);
 do { unsigned int TEMP = git_bswap32(*(unsigned int *)((unsigned char *) block + (7)*4)); (*(volatile unsigned int *)&(array[(7)&15]) = (TEMP)); C += TEMP + ({ unsigned int __res; 1; __res; }) + ((((A^B)&E)^B)) + (0x5a827999); E = ({ unsigned int __res; 1; __res; }); } while (0);
 do { unsigned int TEMP = git_bswap32(*(unsigned int *)((unsigned char *) block + (8)*4)); (*(volatile unsigned int *)&(array[(8)&15]) = (TEMP)); B += TEMP + ({ unsigned int __res; 1; __res; }) + ((((E^A)&D)^A)) + (0x5a827999); D = ({ unsigned int __res; 1; __res; }); } while (0);
 do { unsigned int TEMP = git_bswap32(*(unsigned int *)((unsigned char *) block + (9)*4)); (*(volatile unsigned int *)&(array[(9)&15]) = (TEMP)); A += TEMP + ({ unsigned int __res; 1; __res; }) + ((((D^E)&C)^E)) + (0x5a827999); C = ({ unsigned int __res; 1; __res; }); } while (0);
 do { unsigned int TEMP = git_bswap32(*(unsigned int *)((unsigned char *) block + (10)*4)); (*(volatile unsigned int *)&(array[(10)&15]) = (TEMP)); E += TEMP + ({ unsigned int __res; 1; __res; }) + ((((C^D)&B)^D)) + (0x5a827999); B = ({ unsigned int __res; 1; __res; }); } while (0);
 do { unsigned int TEMP = git_bswap32(*(unsigned int *)((unsigned char *) block + (11)*4)); (*(volatile unsigned int *)&(array[(11)&15]) = (TEMP)); D += TEMP + ({ unsigned int __res; 1; __res; }) + ((((B^C)&A)^C)) + (0x5a827999); A = ({ unsigned int __res; 1; __res; }); } while (0);
 do { unsigned int TEMP = git_bswap32(*(unsigned int *)((unsigned char *) block + (12)*4)); (*(volatile unsigned int *)&(array[(12)&15]) = (TEMP)); C += TEMP + ({ unsigned int __res; 1; __res; }) + ((((A^B)&E)^B)) + (0x5a827999); E = ({ unsigned int __res; 1; __res; }); } while (0);
 do { unsigned int TEMP = git_bswap32(*(unsigned int *)((unsigned char *) block + (13)*4)); (*(volatile unsigned int *)&(array[(13)&15]) = (TEMP)); B += TEMP + ({ unsigned int __res; 1; __res; }) + ((((E^A)&D)^A)) + (0x5a827999); D = ({ unsigned int __res; 1; __res; }); } while (0);
 do { unsigned int TEMP = git_bswap32(*(unsigned int *)((unsigned char *) block + (14)*4)); (*(volatile unsigned int *)&(array[(14)&15]) = (TEMP)); A += TEMP + ({ unsigned int __res; 1; __res; }) + ((((D^E)&C)^E)) + (0x5a827999); C = ({ unsigned int __res; 1; __res; }); } while (0);
 do { unsigned int TEMP = git_bswap32(*(unsigned int *)((unsigned char *) block + (15)*4)); (*(volatile unsigned int *)&(array[(15)&15]) = (TEMP)); E += TEMP + ({ unsigned int __res; 1; __res; }) + ((((C^D)&B)^D)) + (0x5a827999); B = ({ unsigned int __res; 1; __res; }); } while (0);


 do { unsigned int TEMP = ({ unsigned int __res; 1; __res; });; (*(volatile unsigned int *)&(array[(16)&15]) = (TEMP)); D += TEMP + ({ unsigned int __res; 1; __res; }) + ((((B^C)&A)^C)) + (0x5a827999); A = ({ unsigned int __res; 1; __res; }); } while (0);
 do { unsigned int TEMP = ({ unsigned int __res; 1; __res; });; (*(volatile unsigned int *)&(array[(17)&15]) = (TEMP)); C += TEMP + ({ unsigned int __res; 1; __res; }) + ((((A^B)&E)^B)) + (0x5a827999); E = ({ unsigned int __res; 1; __res; }); } while (0);
 do { unsigned int TEMP = ({ unsigned int __res; 1; __res; });; (*(volatile unsigned int *)&(array[(18)&15]) = (TEMP)); B += TEMP + ({ unsigned int __res; 1; __res; }) + ((((E^A)&D)^A)) + (0x5a827999); D = ({ unsigned int __res; 1; __res; }); } while (0);
 do { unsigned int TEMP = ({ unsigned int __res; 1; __res; });; (*(volatile unsigned int *)&(array[(19)&15]) = (TEMP)); A += TEMP + ({ unsigned int __res; 1; __res; }) + ((((D^E)&C)^E)) + (0x5a827999); C = ({ unsigned int __res; 1; __res; }); } while (0);


 do { unsigned int TEMP = ({ unsigned int __res; 1; __res; });; (*(volatile unsigned int *)&(array[(20)&15]) = (TEMP)); E += TEMP + ({ unsigned int __res; 1; __res; }) + ((B^C^D)) + (0x6ed9eba1); B = ({ unsigned int __res; 1; __res; }); } while (0);
 do { unsigned int TEMP = ({ unsigned int __res; 1; __res; });; (*(volatile unsigned int *)&(array[(21)&15]) = (TEMP)); D += TEMP + ({ unsigned int __res; 1; __res; }) + ((A^B^C)) + (0x6ed9eba1); A = ({ unsigned int __res; 1; __res; }); } while (0);
 do { unsigned int TEMP = ({ unsigned int __res; 1; __res; });; (*(volatile unsigned int *)&(array[(22)&15]) = (TEMP)); C += TEMP + ({ unsigned int __res; 1; __res; }) + ((E^A^B)) + (0x6ed9eba1); E = ({ unsigned int __res; 1; __res; }); } while (0);
 do { unsigned int TEMP = ({ unsigned int __res; 1; __res; });; (*(volatile unsigned int *)&(array[(23)&15]) = (TEMP)); B += TEMP + ({ unsigned int __res; 1; __res; }) + ((D^E^A)) + (0x6ed9eba1); D = ({ unsigned int __res; 1; __res; }); } while (0);
 do { unsigned int TEMP = ({ unsigned int __res; 1; __res; });; (*(volatile unsigned int *)&(array[(24)&15]) = (TEMP)); A += TEMP + ({ unsigned int __res; 1; __res; }) + ((C^D^E)) + (0x6ed9eba1); C = ({ unsigned int __res; 1; __res; }); } while (0);
 do { unsigned int TEMP = ({ unsigned int __res; 1; __res; });; (*(volatile unsigned int *)&(array[(25)&15]) = (TEMP)); E += TEMP + ({ unsigned int __res; 1; __res; }) + ((B^C^D)) + (0x6ed9eba1); B = ({ unsigned int __res; 1; __res; }); } while (0);
 do { unsigned int TEMP = ({ unsigned int __res; 1; __res; });; (*(volatile unsigned int *)&(array[(26)&15]) = (TEMP)); D += TEMP + ({ unsigned int __res; 1; __res; }) + ((A^B^C)) + (0x6ed9eba1); A = ({ unsigned int __res; 1; __res; }); } while (0);
 do { unsigned int TEMP = ({ unsigned int __res; 1; __res; });; (*(volatile unsigned int *)&(array[(27)&15]) = (TEMP)); C += TEMP + ({ unsigned int __res; 1; __res; }) + ((E^A^B)) + (0x6ed9eba1); E = ({ unsigned int __res; 1; __res; }); } while (0);
 do { unsigned int TEMP = ({ unsigned int __res; 1; __res; });; (*(volatile unsigned int *)&(array[(28)&15]) = (TEMP)); B += TEMP + ({ unsigned int __res; 1; __res; }) + ((D^E^A)) + (0x6ed9eba1); D = ({ unsigned int __res; 1; __res; }); } while (0);
 do { unsigned int TEMP = ({ unsigned int __res; 1; __res; });; (*(volatile unsigned int *)&(array[(29)&15]) = (TEMP)); A += TEMP + ({ unsigned int __res; 1; __res; }) + ((C^D^E)) + (0x6ed9eba1); C = ({ unsigned int __res; 1; __res; }); } while (0);
 do { unsigned int TEMP = ({ unsigned int __res; 1; __res; });; (*(volatile unsigned int *)&(array[(30)&15]) = (TEMP)); E += TEMP + ({ unsigned int __res; 1; __res; }) + ((B^C^D)) + (0x6ed9eba1); B = ({ unsigned int __res; 1; __res; }); } while (0);
 do { unsigned int TEMP = ({ unsigned int __res; 1; __res; });; (*(volatile unsigned int *)&(array[(31)&15]) = (TEMP)); D += TEMP + ({ unsigned int __res; 1; __res; }) + ((A^B^C)) + (0x6ed9eba1); A = ({ unsigned int __res; 1; __res; }); } while (0);
 do { unsigned int TEMP = ({ unsigned int __res; 1; __res; });; (*(volatile unsigned int *)&(array[(32)&15]) = (TEMP)); C += TEMP + ({ unsigned int __res; 1; __res; }) + ((E^A^B)) + (0x6ed9eba1); E = ({ unsigned int __res; 1; __res; }); } while (0);
 do { unsigned int TEMP = ({ unsigned int __res; 1; __res; });; (*(volatile unsigned int *)&(array[(33)&15]) = (TEMP)); B += TEMP + ({ unsigned int __res; 1; __res; }) + ((D^E^A)) + (0x6ed9eba1); D = ({ unsigned int __res; 1; __res; }); } while (0);
 do { unsigned int TEMP = ({ unsigned int __res; 1; __res; });; (*(volatile unsigned int *)&(array[(34)&15]) = (TEMP)); A += TEMP + ({ unsigned int __res; 1; __res; }) + ((C^D^E)) + (0x6ed9eba1); C = ({ unsigned int __res; 1; __res; }); } while (0);
 do { unsigned int TEMP = ({ unsigned int __res; 1; __res; });; (*(volatile unsigned int *)&(array[(35)&15]) = (TEMP)); E += TEMP + ({ unsigned int __res; 1; __res; }) + ((B^C^D)) + (0x6ed9eba1); B = ({ unsigned int __res; 1; __res; }); } while (0);
 do { unsigned int TEMP = ({ unsigned int __res; 1; __res; });; (*(volatile unsigned int *)&(array[(36)&15]) = (TEMP)); D += TEMP + ({ unsigned int __res; 1; __res; }) + ((A^B^C)) + (0x6ed9eba1); A = ({ unsigned int __res; 1; __res; }); } while (0);
 do { unsigned int TEMP = ({ unsigned int __res; 1; __res; });; (*(volatile unsigned int *)&(array[(37)&15]) = (TEMP)); C += TEMP + ({ unsigned int __res; 1; __res; }) + ((E^A^B)) + (0x6ed9eba1); E = ({ unsigned int __res; 1; __res; }); } while (0);
 do { unsigned int TEMP = ({ unsigned int __res; 1; __res; });; (*(volatile unsigned int *)&(array[(38)&15]) = (TEMP)); B += TEMP + ({ unsigned int __res; 1; __res; }) + ((D^E^A)) + (0x6ed9eba1); D = ({ unsigned int __res; 1; __res; }); } while (0);
 do { unsigned int TEMP = ({ unsigned int __res; 1; __res; });; (*(volatile unsigned int *)&(array[(39)&15]) = (TEMP)); A += TEMP + ({ unsigned int __res; 1; __res; }) + ((C^D^E)) + (0x6ed9eba1); C = ({ unsigned int __res; 1; __res; }); } while (0);


 do { unsigned int TEMP = ({ unsigned int __res; 1; __res; });; (*(volatile unsigned int *)&(array[(40)&15]) = (TEMP)); E += TEMP + ({ unsigned int __res; 1; __res; }) + (((B&C)+(D&(B^C)))) + (0x8f1bbcdc); B = ({ unsigned int __res; 1; __res; }); } while (0);
 do { unsigned int TEMP = ({ unsigned int __res; 1; __res; });; (*(volatile unsigned int *)&(array[(41)&15]) = (TEMP)); D += TEMP + ({ unsigned int __res; 1; __res; }) + (((A&B)+(C&(A^B)))) + (0x8f1bbcdc); A = ({ unsigned int __res; 1; __res; }); } while (0);
 do { unsigned int TEMP = ({ unsigned int __res; 1; __res; });; (*(volatile unsigned int *)&(array[(42)&15]) = (TEMP)); C += TEMP + ({ unsigned int __res; 1; __res; }) + (((E&A)+(B&(E^A)))) + (0x8f1bbcdc); E = ({ unsigned int __res; 1; __res; }); } while (0);
 do { unsigned int TEMP = ({ unsigned int __res; 1; __res; });; (*(volatile unsigned int *)&(array[(43)&15]) = (TEMP)); B += TEMP + ({ unsigned int __res; 1; __res; }) + (((D&E)+(A&(D^E)))) + (0x8f1bbcdc); D = ({ unsigned int __res; 1; __res; }); } while (0);
 do { unsigned int TEMP = ({ unsigned int __res; 1; __res; });; (*(volatile unsigned int *)&(array[(44)&15]) = (TEMP)); A += TEMP + ({ unsigned int __res; 1; __res; }) + (((C&D)+(E&(C^D)))) + (0x8f1bbcdc); C = ({ unsigned int __res; 1; __res; }); } while (0);
 do { unsigned int TEMP = ({ unsigned int __res; 1; __res; });; (*(volatile unsigned int *)&(array[(45)&15]) = (TEMP)); E += TEMP + ({ unsigned int __res; 1; __res; }) + (((B&C)+(D&(B^C)))) + (0x8f1bbcdc); B = ({ unsigned int __res; 1; __res; }); } while (0);
 do { unsigned int TEMP = ({ unsigned int __res; 1; __res; });; (*(volatile unsigned int *)&(array[(46)&15]) = (TEMP)); D += TEMP + ({ unsigned int __res; 1; __res; }) + (((A&B)+(C&(A^B)))) + (0x8f1bbcdc); A = ({ unsigned int __res; 1; __res; }); } while (0);
 do { unsigned int TEMP = ({ unsigned int __res; 1; __res; });; (*(volatile unsigned int *)&(array[(47)&15]) = (TEMP)); C += TEMP + ({ unsigned int __res; 1; __res; }) + (((E&A)+(B&(E^A)))) + (0x8f1bbcdc); E = ({ unsigned int __res; 1; __res; }); } while (0);
 do { unsigned int TEMP = ({ unsigned int __res; 1; __res; });; (*(volatile unsigned int *)&(array[(48)&15]) = (TEMP)); B += TEMP + ({ unsigned int __res; 1; __res; }) + (((D&E)+(A&(D^E)))) + (0x8f1bbcdc); D = ({ unsigned int __res; 1; __res; }); } while (0);
 do { unsigned int TEMP = ({ unsigned int __res; 1; __res; });; (*(volatile unsigned int *)&(array[(49)&15]) = (TEMP)); A += TEMP + ({ unsigned int __res; 1; __res; }) + (((C&D)+(E&(C^D)))) + (0x8f1bbcdc); C = ({ unsigned int __res; 1; __res; }); } while (0);
 do { unsigned int TEMP = ({ unsigned int __res; 1; __res; });; (*(volatile unsigned int *)&(array[(50)&15]) = (TEMP)); E += TEMP + ({ unsigned int __res; 1; __res; }) + (((B&C)+(D&(B^C)))) + (0x8f1bbcdc); B = ({ unsigned int __res; 1; __res; }); } while (0);
 do { unsigned int TEMP = ({ unsigned int __res; 1; __res; });; (*(volatile unsigned int *)&(array[(51)&15]) = (TEMP)); D += TEMP + ({ unsigned int __res; 1; __res; }) + (((A&B)+(C&(A^B)))) + (0x8f1bbcdc); A = ({ unsigned int __res; 1; __res; }); } while (0);
 do { unsigned int TEMP = ({ unsigned int __res; 1; __res; });; (*(volatile unsigned int *)&(array[(52)&15]) = (TEMP)); C += TEMP + ({ unsigned int __res; 1; __res; }) + (((E&A)+(B&(E^A)))) + (0x8f1bbcdc); E = ({ unsigned int __res; 1; __res; }); } while (0);
 do { unsigned int TEMP = ({ unsigned int __res; 1; __res; });; (*(volatile unsigned int *)&(array[(53)&15]) = (TEMP)); B += TEMP + ({ unsigned int __res; 1; __res; }) + (((D&E)+(A&(D^E)))) + (0x8f1bbcdc); D = ({ unsigned int __res; 1; __res; }); } while (0);
 do { unsigned int TEMP = ({ unsigned int __res; 1; __res; });; (*(volatile unsigned int *)&(array[(54)&15]) = (TEMP)); A += TEMP + ({ unsigned int __res; 1; __res; }) + (((C&D)+(E&(C^D)))) + (0x8f1bbcdc); C = ({ unsigned int __res; 1; __res; }); } while (0);
 do { unsigned int TEMP = ({ unsigned int __res; 1; __res; });; (*(volatile unsigned int *)&(array[(55)&15]) = (TEMP)); E += TEMP + ({ unsigned int __res; 1; __res; }) + (((B&C)+(D&(B^C)))) + (0x8f1bbcdc); B = ({ unsigned int __res; 1; __res; }); } while (0);
 do { unsigned int TEMP = ({ unsigned int __res; 1; __res; });; (*(volatile unsigned int *)&(array[(56)&15]) = (TEMP)); D += TEMP + ({ unsigned int __res; 1; __res; }) + (((A&B)+(C&(A^B)))) + (0x8f1bbcdc); A = ({ unsigned int __res; 1; __res; }); } while (0);
 do { unsigned int TEMP = ({ unsigned int __res; 1; __res; });; (*(volatile unsigned int *)&(array[(57)&15]) = (TEMP)); C += TEMP + ({ unsigned int __res; 1; __res; }) + (((E&A)+(B&(E^A)))) + (0x8f1bbcdc); E = ({ unsigned int __res; 1; __res; }); } while (0);
 do { unsigned int TEMP = ({ unsigned int __res; 1; __res; });; (*(volatile unsigned int *)&(array[(58)&15]) = (TEMP)); B += TEMP + ({ unsigned int __res; 1; __res; }) + (((D&E)+(A&(D^E)))) + (0x8f1bbcdc); D = ({ unsigned int __res; 1; __res; }); } while (0);
 do { unsigned int TEMP = ({ unsigned int __res; 1; __res; });; (*(volatile unsigned int *)&(array[(59)&15]) = (TEMP)); A += TEMP + ({ unsigned int __res; 1; __res; }) + (((C&D)+(E&(C^D)))) + (0x8f1bbcdc); C = ({ unsigned int __res; 1; __res; }); } while (0);


 do { unsigned int TEMP = ({ unsigned int __res; 1; __res; });; (*(volatile unsigned int *)&(array[(60)&15]) = (TEMP)); E += TEMP + ({ unsigned int __res; 1; __res; }) + ((B^C^D)) + (0xca62c1d6); B = ({ unsigned int __res; 1; __res; }); } while (0);
 do { unsigned int TEMP = ({ unsigned int __res; 1; __res; });; (*(volatile unsigned int *)&(array[(61)&15]) = (TEMP)); D += TEMP + ({ unsigned int __res; 1; __res; }) + ((A^B^C)) + (0xca62c1d6); A = ({ unsigned int __res; 1; __res; }); } while (0);
 do { unsigned int TEMP = ({ unsigned int __res; 1; __res; });; (*(volatile unsigned int *)&(array[(62)&15]) = (TEMP)); C += TEMP + ({ unsigned int __res; 1; __res; }) + ((E^A^B)) + (0xca62c1d6); E = ({ unsigned int __res; 1; __res; }); } while (0);
 do { unsigned int TEMP = ({ unsigned int __res; 1; __res; });; (*(volatile unsigned int *)&(array[(63)&15]) = (TEMP)); B += TEMP + ({ unsigned int __res; 1; __res; }) + ((D^E^A)) + (0xca62c1d6); D = ({ unsigned int __res; 1; __res; }); } while (0);
 do { unsigned int TEMP = ({ unsigned int __res; 1; __res; });; (*(volatile unsigned int *)&(array[(64)&15]) = (TEMP)); A += TEMP + ({ unsigned int __res; 1; __res; }) + ((C^D^E)) + (0xca62c1d6); C = ({ unsigned int __res; 1; __res; }); } while (0);
 do { unsigned int TEMP = ({ unsigned int __res; 1; __res; });; (*(volatile unsigned int *)&(array[(65)&15]) = (TEMP)); E += TEMP + ({ unsigned int __res; 1; __res; }) + ((B^C^D)) + (0xca62c1d6); B = ({ unsigned int __res; 1; __res; }); } while (0);
 do { unsigned int TEMP = ({ unsigned int __res; 1; __res; });; (*(volatile unsigned int *)&(array[(66)&15]) = (TEMP)); D += TEMP + ({ unsigned int __res; 1; __res; }) + ((A^B^C)) + (0xca62c1d6); A = ({ unsigned int __res; 1; __res; }); } while (0);
 do { unsigned int TEMP = ({ unsigned int __res; 1; __res; });; (*(volatile unsigned int *)&(array[(67)&15]) = (TEMP)); C += TEMP + ({ unsigned int __res; 1; __res; }) + ((E^A^B)) + (0xca62c1d6); E = ({ unsigned int __res; 1; __res; }); } while (0);
 do { unsigned int TEMP = ({ unsigned int __res; 1; __res; });; (*(volatile unsigned int *)&(array[(68)&15]) = (TEMP)); B += TEMP + ({ unsigned int __res; 1; __res; }) + ((D^E^A)) + (0xca62c1d6); D = ({ unsigned int __res; 1; __res; }); } while (0);
 do { unsigned int TEMP = ({ unsigned int __res; 1; __res; });; (*(volatile unsigned int *)&(array[(69)&15]) = (TEMP)); A += TEMP + ({ unsigned int __res; 1; __res; }) + ((C^D^E)) + (0xca62c1d6); C = ({ unsigned int __res; 1; __res; }); } while (0);
 do { unsigned int TEMP = ({ unsigned int __res; 1; __res; });; (*(volatile unsigned int *)&(array[(70)&15]) = (TEMP)); E += TEMP + ({ unsigned int __res; 1; __res; }) + ((B^C^D)) + (0xca62c1d6); B = ({ unsigned int __res; 1; __res; }); } while (0);
 do { unsigned int TEMP = ({ unsigned int __res; 1; __res; });; (*(volatile unsigned int *)&(array[(71)&15]) = (TEMP)); D += TEMP + ({ unsigned int __res; 1; __res; }) + ((A^B^C)) + (0xca62c1d6); A = ({ unsigned int __res; 1; __res; }); } while (0);
 do { unsigned int TEMP = ({ unsigned int __res; 1; __res; });; (*(volatile unsigned int *)&(array[(72)&15]) = (TEMP)); C += TEMP + ({ unsigned int __res; 1; __res; }) + ((E^A^B)) + (0xca62c1d6); E = ({ unsigned int __res; 1; __res; }); } while (0);
 do { unsigned int TEMP = ({ unsigned int __res; 1; __res; });; (*(volatile unsigned int *)&(array[(73)&15]) = (TEMP)); B += TEMP + ({ unsigned int __res; 1; __res; }) + ((D^E^A)) + (0xca62c1d6); D = ({ unsigned int __res; 1; __res; }); } while (0);
 do { unsigned int TEMP = ({ unsigned int __res; 1; __res; });; (*(volatile unsigned int *)&(array[(74)&15]) = (TEMP)); A += TEMP + ({ unsigned int __res; 1; __res; }) + ((C^D^E)) + (0xca62c1d6); C = ({ unsigned int __res; 1; __res; }); } while (0);
 do { unsigned int TEMP = ({ unsigned int __res; 1; __res; });; (*(volatile unsigned int *)&(array[(75)&15]) = (TEMP)); E += TEMP + ({ unsigned int __res; 1; __res; }) + ((B^C^D)) + (0xca62c1d6); B = ({ unsigned int __res; 1; __res; }); } while (0);
 do { unsigned int TEMP = ({ unsigned int __res; 1; __res; });; (*(volatile unsigned int *)&(array[(76)&15]) = (TEMP)); D += TEMP + ({ unsigned int __res; 1; __res; }) + ((A^B^C)) + (0xca62c1d6); A = ({ unsigned int __res; 1; __res; }); } while (0);
 do { unsigned int TEMP = ({ unsigned int __res; 1; __res; });; (*(volatile unsigned int *)&(array[(77)&15]) = (TEMP)); C += TEMP + ({ unsigned int __res; 1; __res; }) + ((E^A^B)) + (0xca62c1d6); E = ({ unsigned int __res; 1; __res; }); } while (0);
 do { unsigned int TEMP = ({ unsigned int __res; 1; __res; });; (*(volatile unsigned int *)&(array[(78)&15]) = (TEMP)); B += TEMP + ({ unsigned int __res; 1; __res; }) + ((D^E^A)) + (0xca62c1d6); D = ({ unsigned int __res; 1; __res; }); } while (0);
 do { unsigned int TEMP = ({ unsigned int __res; 1; __res; });; (*(volatile unsigned int *)&(array[(79)&15]) = (TEMP)); A += TEMP + ({ unsigned int __res; 1; __res; }) + ((C^D^E)) + (0xca62c1d6); C = ({ unsigned int __res; 1; __res; }); } while (0);

 ctx->H[0] += A;
 ctx->H[1] += B;
 ctx->H[2] += C;
 ctx->H[3] += D;
 ctx->H[4] += E;
}

void blk_SHA1_Init(blk_SHA_CTX *ctx)
{
 ctx->size = 0;


 ctx->H[0] = 0x67452301;
 ctx->H[1] = 0xefcdab89;
 ctx->H[2] = 0x98badcfe;
 ctx->H[3] = 0x10325476;
 ctx->H[4] = 0xc3d2e1f0;
}

void blk_SHA1_Update(blk_SHA_CTX *ctx, const void *data, unsigned long len)
{
 unsigned int lenW = ctx->size & 63;

 ctx->size += len;


 if (lenW) {
  unsigned int left = 64 - lenW;
  if (len < left)
   left = len;
  memcpy(lenW + (char *)ctx->W, data, left);
  lenW = (lenW + left) & 63;
  len -= left;
  data = ((const char *)data + left);
  if (lenW)
   return;
  blk_SHA1_Block(ctx, ctx->W);
 }
 while (len >= 64) {
  blk_SHA1_Block(ctx, data);
  data = ((const char *)data + 64);
  len -= 64;
 }
 if (len)
  memcpy(ctx->W, data, len);
}

void blk_SHA1_Final(unsigned char hashout[20], blk_SHA_CTX *ctx)
{
 static const unsigned char pad[64] = { 0x80 };
 unsigned int padlen[2];
 int i;


 padlen[0] = git_bswap32((uint32_t)(ctx->size >> 29));
 padlen[1] = git_bswap32((uint32_t)(ctx->size << 3));

 i = ctx->size & 63;
 blk_SHA1_Update(ctx, pad, 1 + (63 & (55 - i)));
 blk_SHA1_Update(ctx, padlen, 8);


 for (i = 0; i < 5; i++)
  do { *(unsigned int *)(hashout + i * 4) = git_bswap32(ctx->H[i]); } while (0);
}
