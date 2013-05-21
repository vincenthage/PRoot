/* -*- c-set-style: "K&R"; c-basic-offset: 8 -*-
 *
 * This file was generated thanks to the following command:
 *
 *     cpp -dM linux/arch/x86/syscalls/../include/generated/asm/unistd_64.h | grep '#define __NR_' | sed s/__NR_/PR_/g | sort -u
 */

#include "syscall/sysnum-undefined.h"

#define PR__sysctl 156
#define PR_accept 43
#define PR_accept4 288
#define PR_access 21
#define PR_acct 163
#define PR_add_key 248
#define PR_adjtimex 159
#define PR_afs_syscall 183
#define PR_alarm 37
#define PR_arch_prctl 158
#define PR_bind 49
#define PR_brk 12
#define PR_capget 125
#define PR_capset 126
#define PR_chdir 80
#define PR_chmod 90
#define PR_chown 92
#define PR_chroot 161
#define PR_clock_adjtime 305
#define PR_clock_getres 229
#define PR_clock_gettime 228
#define PR_clock_nanosleep 230
#define PR_clock_settime 227
#define PR_clone 56
#define PR_close 3
#define PR_connect 42
#define PR_creat 85
#define PR_create_module 174
#define PR_delete_module 176
#define PR_dup 32
#define PR_dup2 33
#define PR_dup3 292
#define PR_epoll_create 213
#define PR_epoll_create1 291
#define PR_epoll_ctl 233
#define PR_epoll_ctl_old 214
#define PR_epoll_pwait 281
#define PR_epoll_wait 232
#define PR_epoll_wait_old 215
#define PR_eventfd 284
#define PR_eventfd2 290
#define PR_execve 59
#define PR_exit 60
#define PR_exit_group 231
#define PR_faccessat 269
#define PR_fadvise64 221
#define PR_fallocate 285
#define PR_fanotify_init 300
#define PR_fanotify_mark 301
#define PR_fchdir 81
#define PR_fchmod 91
#define PR_fchmodat 268
#define PR_fchown 93
#define PR_fchownat 260
#define PR_fcntl 72
#define PR_fdatasync 75
#define PR_fgetxattr 193
#define PR_flistxattr 196
#define PR_flock 73
#define PR_fork 57
#define PR_fremovexattr 199
#define PR_fsetxattr 190
#define PR_fstat 5
#define PR_fstatfs 138
#define PR_fsync 74
#define PR_ftruncate 77
#define PR_futex 202
#define PR_futimesat 261
#define PR_get_kernel_syms 177
#define PR_get_mempolicy 239
#define PR_get_robust_list 274
#define PR_get_thread_area 211
#define PR_getcpu 309
#define PR_getcwd 79
#define PR_getdents 78
#define PR_getdents64 217
#define PR_getegid 108
#define PR_geteuid 107
#define PR_getgid 104
#define PR_getgroups 115
#define PR_getitimer 36
#define PR_getpeername 52
#define PR_getpgid 121
#define PR_getpgrp 111
#define PR_getpid 39
#define PR_getpmsg 181
#define PR_getppid 110
#define PR_getpriority 140
#define PR_getresgid 120
#define PR_getresuid 118
#define PR_getrlimit 97
#define PR_getrusage 98
#define PR_getsid 124
#define PR_getsockname 51
#define PR_getsockopt 55
#define PR_gettid 186
#define PR_gettimeofday 96
#define PR_getuid 102
#define PR_getxattr 191
#define PR_init_module 175
#define PR_inotify_add_watch 254
#define PR_inotify_init 253
#define PR_inotify_init1 294
#define PR_inotify_rm_watch 255
#define PR_io_cancel 210
#define PR_io_destroy 207
#define PR_io_getevents 208
#define PR_io_setup 206
#define PR_io_submit 209
#define PR_ioctl 16
#define PR_ioperm 173
#define PR_iopl 172
#define PR_ioprio_get 252
#define PR_ioprio_set 251
#define PR_kcmp 312
#define PR_kexec_load 246
#define PR_keyctl 250
#define PR_kill 62
#define PR_lchown 94
#define PR_lgetxattr 192
#define PR_link 86
#define PR_linkat 265
#define PR_listen 50
#define PR_listxattr 194
#define PR_llistxattr 195
#define PR_lookup_dcookie 212
#define PR_lremovexattr 198
#define PR_lseek 8
#define PR_lsetxattr 189
#define PR_lstat 6
#define PR_madvise 28
#define PR_mbind 237
#define PR_migrate_pages 256
#define PR_mincore 27
#define PR_mkdir 83
#define PR_mkdirat 258
#define PR_mknod 133
#define PR_mknodat 259
#define PR_mlock 149
#define PR_mlockall 151
#define PR_mmap 9
#define PR_modify_ldt 154
#define PR_mount 165
#define PR_move_pages 279
#define PR_mprotect 10
#define PR_mq_getsetattr 245
#define PR_mq_notify 244
#define PR_mq_open 240
#define PR_mq_timedreceive 243
#define PR_mq_timedsend 242
#define PR_mq_unlink 241
#define PR_mremap 25
#define PR_msgctl 71
#define PR_msgget 68
#define PR_msgrcv 70
#define PR_msgsnd 69
#define PR_msync 26
#define PR_munlock 150
#define PR_munlockall 152
#define PR_munmap 11
#define PR_name_to_handle_at 303
#define PR_nanosleep 35
#define PR_newfstatat 262
#define PR_nfsservctl 180
#define PR_open 2
#define PR_open_by_handle_at 304
#define PR_openat 257
#define PR_pause 34
#define PR_perf_event_open 298
#define PR_personality 135
#define PR_pipe 22
#define PR_pipe2 293
#define PR_pivot_root 155
#define PR_poll 7
#define PR_ppoll 271
#define PR_prctl 157
#define PR_pread64 17
#define PR_preadv 295
#define PR_prlimit64 302
#define PR_process_vm_readv 310
#define PR_process_vm_writev 311
#define PR_pselect6 270
#define PR_ptrace 101
#define PR_putpmsg 182
#define PR_pwrite64 18
#define PR_pwritev 296
#define PR_query_module 178
#define PR_quotactl 179
#define PR_read 0
#define PR_readahead 187
#define PR_readlink 89
#define PR_readlinkat 267
#define PR_readv 19
#define PR_reboot 169
#define PR_recvfrom 45
#define PR_recvmmsg 299
#define PR_recvmsg 47
#define PR_remap_file_pages 216
#define PR_removexattr 197
#define PR_rename 82
#define PR_renameat 264
#define PR_request_key 249
#define PR_restart_syscall 219
#define PR_rmdir 84
#define PR_rt_sigaction 13
#define PR_rt_sigpending 127
#define PR_rt_sigprocmask 14
#define PR_rt_sigqueueinfo 129
#define PR_rt_sigreturn 15
#define PR_rt_sigsuspend 130
#define PR_rt_sigtimedwait 128
#define PR_rt_tgsigqueueinfo 297
#define PR_sched_get_priority_max 146
#define PR_sched_get_priority_min 147
#define PR_sched_getaffinity 204
#define PR_sched_getparam 143
#define PR_sched_getscheduler 145
#define PR_sched_rr_get_interval 148
#define PR_sched_setaffinity 203
#define PR_sched_setparam 142
#define PR_sched_setscheduler 144
#define PR_sched_yield 24
#define PR_security 185
#define PR_select 23
#define PR_semctl 66
#define PR_semget 64
#define PR_semop 65
#define PR_semtimedop 220
#define PR_sendfile 40
#define PR_sendmmsg 307
#define PR_sendmsg 46
#define PR_sendto 44
#define PR_set_mempolicy 238
#define PR_set_robust_list 273
#define PR_set_thread_area 205
#define PR_set_tid_address 218
#define PR_setdomainname 171
#define PR_setfsgid 123
#define PR_setfsuid 122
#define PR_setgid 106
#define PR_setgroups 116
#define PR_sethostname 170
#define PR_setitimer 38
#define PR_setns 308
#define PR_setpgid 109
#define PR_setpriority 141
#define PR_setregid 114
#define PR_setresgid 119
#define PR_setresuid 117
#define PR_setreuid 113
#define PR_setrlimit 160
#define PR_setsid 112
#define PR_setsockopt 54
#define PR_settimeofday 164
#define PR_setuid 105
#define PR_setxattr 188
#define PR_shmat 30
#define PR_shmctl 31
#define PR_shmdt 67
#define PR_shmget 29
#define PR_shutdown 48
#define PR_sigaltstack 131
#define PR_signalfd 282
#define PR_signalfd4 289
#define PR_socket 41
#define PR_socketpair 53
#define PR_splice 275
#define PR_stat 4
#define PR_statfs 137
#define PR_swapoff 168
#define PR_swapon 167
#define PR_symlink 88
#define PR_symlinkat 266
#define PR_sync 162
#define PR_sync_file_range 277
#define PR_syncfs 306
#define PR_sysfs 139
#define PR_sysinfo 99
#define PR_syslog 103
#define PR_tee 276
#define PR_tgkill 234
#define PR_time 201
#define PR_timer_create 222
#define PR_timer_delete 226
#define PR_timer_getoverrun 225
#define PR_timer_gettime 224
#define PR_timer_settime 223
#define PR_timerfd_create 283
#define PR_timerfd_gettime 287
#define PR_timerfd_settime 286
#define PR_times 100
#define PR_tkill 200
#define PR_truncate 76
#define PR_tuxcall 184
#define PR_umask 95
#define PR_umount2 166
#define PR_uname 63
#define PR_unlink 87
#define PR_unlinkat 263
#define PR_unshare 272
#define PR_uselib 134
#define PR_ustat 136
#define PR_utime 132
#define PR_utimensat 280
#define PR_utimes 235
#define PR_vfork 58
#define PR_vhangup 153
#define PR_vmsplice 278
#define PR_vserver 236
#define PR_wait4 61
#define PR_waitid 247
#define PR_write 1
#define PR_writev 20

/*
 * These following syscalls do not exist on x86_64.  Note that syscall
 * numbers from -1 to -10 are reserved for PRoot internal usage.
 */

#define PR__llseek ((word_t) -16)
#define PR__newselect ((word_t) -17)
#define PR_arm_fadvise64_64 ((word_t) -18)
#define PR_arm_sync_file_range ((word_t) -19)
#define PR_bdflush ((word_t) -20)
#define PR_break ((word_t) -21)
#define PR_cacheflush ((word_t) -22)
#define PR_chown32 ((word_t) -23)
#define PR_fadvise64_64 ((word_t) -24)
#define PR_fchown32 ((word_t) -25)
#define PR_fcntl64 ((word_t) -26)
#define PR_fstat64 ((word_t) -27)
#define PR_fstatat64 ((word_t) -28)
#define PR_fstatfs64 ((word_t) -29)
#define PR_ftime ((word_t) -30)
#define PR_ftruncate64 ((word_t) -31)
#define PR_getegid32 ((word_t) -32)
#define PR_geteuid32 ((word_t) -33)
#define PR_getgid32 ((word_t) -34)
#define PR_getgroups32 ((word_t) -35)
#define PR_getresgid32 ((word_t) -36)
#define PR_getresuid32 ((word_t) -37)
#define PR_getuid32 ((word_t) -38)
#define PR_gtty ((word_t) -39)
#define PR_idle ((word_t) -40)
#define PR_ipc ((word_t) -41)
#define PR_lchown32 ((word_t) -42)
#define PR_lock ((word_t) -43)
#define PR_lstat64 ((word_t) -44)
#define PR_mmap2 ((word_t) -45)
#define PR_mpx ((word_t) -46)
#define PR_nice ((word_t) -47)
#define PR_oldfstat ((word_t) -48)
#define PR_oldlstat ((word_t) -49)
#define PR_oldolduname ((word_t) -50)
#define PR_oldstat ((word_t) -51)
#define PR_olduname ((word_t) -52)
#define PR_pciconfig_iobase ((word_t) -53)
#define PR_pciconfig_read ((word_t) -54)
#define PR_pciconfig_write ((word_t) -55)
#define PR_prof ((word_t) -56)
#define PR_profil ((word_t) -57)
#define PR_readdir ((word_t) -58)
#define PR_recv ((word_t) -59)
#define PR_send ((word_t) -60)
#define PR_sendfile64 ((word_t) -61)
#define PR_setfsgid32 ((word_t) -62)
#define PR_setfsuid32 ((word_t) -63)
#define PR_setgid32 ((word_t) -64)
#define PR_setgroups32 ((word_t) -65)
#define PR_setregid32 ((word_t) -66)
#define PR_setresgid32 ((word_t) -67)
#define PR_setresuid32 ((word_t) -68)
#define PR_setreuid32 ((word_t) -69)
#define PR_setuid32 ((word_t) -70)
#define PR_sgetmask ((word_t) -71)
#define PR_sigaction ((word_t) -72)
#define PR_signal ((word_t) -73)
#define PR_sigpending ((word_t) -74)
#define PR_sigprocmask ((word_t) -75)
#define PR_sigreturn ((word_t) -76)
#define PR_sigsuspend ((word_t) -77)
#define PR_socketcall ((word_t) -78)
#define PR_ssetmask ((word_t) -79)
#define PR_stat64 ((word_t) -80)
#define PR_statfs64 ((word_t) -81)
#define PR_stime ((word_t) -82)
#define PR_stty ((word_t) -83)
#define PR_sync_file_range2 ((word_t) -84)
#define PR_truncate64 ((word_t) -85)
#define PR_ugetrlimit ((word_t) -86)
#define PR_ulimit ((word_t) -87)
#define PR_umount ((word_t) -88)
#define PR_vm86 ((word_t) -89)
#define PR_vm86old ((word_t) -90)
#define PR_waitpid ((word_t) -91)
