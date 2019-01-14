/* This is a generated file, see Makefile.am for its inputs. */
static const char aarch64_syscall_strings[] = "accept\0accept4\0acct\0add_key\0adjtimex\0bind\0bpf\0brk\0capget\0capset\0"
	"chdir\0chroot\0clock_adjtime\0clock_getres\0clock_gettime\0clock_nanosleep\0clock_settime\0clone\0close\0connect\0"
	"copy_file_range\0delete_module\0dup\0dup3\0epoll_create1\0epoll_ctl\0epoll_pwait\0eventfd2\0execve\0execveat\0"
	"exit\0exit_group\0faccessat\0fadvise64\0fallocate\0fanotify_init\0fanotify_mark\0fchdir\0fchmod\0fchmodat\0"
	"fchown\0fchownat\0fcntl\0fdatasync\0fgetxattr\0finit_module\0flistxattr\0flock\0fremovexattr\0fsetxattr\0"
	"fstatfs\0fsync\0ftruncate\0futex\0get_mempolicy\0get_robust_list\0getcpu\0getcwd\0getdents\0getegid\0"
	"geteuid\0getgid\0getgroups\0getitimer\0getpeername\0getpgid\0getpid\0getppid\0getpriority\0getrandom\0"
	"getresgid\0getresuid\0getrlimit\0getrusage\0getsid\0getsockname\0getsockopt\0gettid\0gettimeofday\0getuid\0"
	"getxattr\0init_module\0inotify_add_watch\0inotify_init1\0inotify_rm_watch\0io_cancel\0io_destroy\0io_getevents\0io_setup\0io_submit\0"
	"ioctl\0ioprio_get\0ioprio_set\0kcmp\0kexec_load\0keyctl\0kill\0lgetxattr\0linkat\0listen\0"
	"listxattr\0llistxattr\0lookup_dcookie\0lremovexattr\0lseek\0lsetxattr\0madvise\0mbind\0membarrier\0memfd_create\0"
	"migrate_pages\0mincore\0mkdirat\0mknodat\0mlock\0mlock2\0mlockall\0mmap\0mount\0move_pages\0"
	"mprotect\0mq_getsetattr\0mq_notify\0mq_open\0mq_timedreceive\0mq_timedsend\0mq_unlink\0mremap\0msgctl\0msgget\0"
	"msgrcv\0msgsnd\0msync\0munlock\0munlockall\0munmap\0name_to_handle_at\0nanosleep\0newfstat\0newfstatat\0"
	"nfsservctl\0open_by_handle_at\0openat\0perf_event_open\0personality\0pipe2\0pivot_root\0pkey_alloc\0pkey_free\0pkey_mprotect\0"
	"ppoll\0prctl\0pread\0preadv\0preadv2\0prlimit64\0process_vm_readv\0process_vm_writev\0pselect6\0ptrace\0"
	"pwrite\0pwritev\0pwritev2\0quotactl\0read\0readahead\0readlinkat\0readv\0reboot\0recvfrom\0"
	"recvmmsg\0recvmsg\0remap_file_pages\0removexattr\0renameat\0renameat2\0request_key\0restart_syscall\0rt_sigaction\0rt_sigpending\0"
	"rt_sigprocmask\0rt_sigqueueinfo\0rt_sigreturn\0rt_sigsuspend\0rt_sigtimedwait\0rt_tgsigqueueinfo\0sched_get_priority_max\0sched_get_priority_min\0sched_getaffinity\0sched_getattr\0"
	"sched_getparam\0sched_getscheduler\0sched_rr_get_interval\0sched_setaffinity\0sched_setattr\0sched_setparam\0sched_setscheduler\0sched_yield\0seccomp\0semctl\0"
	"semget\0semop\0semtimedop\0sendfile\0sendmmsg\0sendmsg\0sendto\0set_mempolicy\0set_robust_list\0set_tid_address\0"
	"setdomainname\0setfsgid\0setfsuid\0setgid\0setgroups\0sethostname\0setitimer\0setns\0setpgid\0setpriority\0"
	"setregid\0setresgid\0setresuid\0setreuid\0setrlimit\0setsid\0setsockopt\0settimeofday\0setuid\0setxattr\0"
	"shmat\0shmctl\0shmdt\0shmget\0shutdown\0sigaltstack\0signalfd4\0socket\0socketpair\0splice\0"
	"statfs\0swapoff\0swapon\0symlinkat\0sync\0sync_file_range\0syncfs\0sysinfo\0syslog\0tee\0"
	"tgkill\0timer_create\0timer_delete\0timer_getoverrun\0timer_gettime\0timer_settime\0timerfd_create\0timerfd_gettime\0timerfd_settime\0times\0"
	"tkill\0truncate\0umask\0umount2\0uname\0unlinkat\0unshare\0userfaultfd\0utimensat\0vhangup\0"
	"vmsplice\0wait4\0waitid\0write\0writev";
static const unsigned aarch64_syscall_s2i_s[] = {
	0,7,15,20,28,37,42,46,50,57,
	64,70,77,91,104,118,134,148,154,160,
	168,184,198,202,207,221,231,243,252,259,
	268,273,284,294,304,314,328,342,349,356,
	365,372,381,387,397,407,420,431,437,450,
	460,468,474,484,490,504,520,527,534,543,
	551,559,566,576,586,598,606,613,621,633,
	643,653,663,673,683,690,702,713,720,733,
	740,749,761,779,793,810,820,831,844,853,
	863,869,880,891,896,907,914,919,929,936,
	943,953,964,979,992,998,1008,1016,1022,1033,
	1046,1060,1068,1076,1084,1090,1097,1106,1111,1117,
	1128,1137,1151,1161,1169,1185,1198,1208,1215,1222,
	1229,1236,1243,1249,1257,1268,1275,1293,1303,1312,
	1323,1334,1352,1359,1375,1387,1393,1404,1415,1425,
	1439,1445,1451,1457,1464,1472,1482,1499,1517,1526,
	1533,1540,1548,1557,1566,1571,1581,1592,1598,1605,
	1614,1623,1631,1648,1660,1669,1679,1691,1707,1720,
	1734,1749,1765,1778,1792,1808,1826,1849,1872,1890,
	1904,1919,1938,1960,1978,1992,2007,2026,2038,2046,
	2053,2060,2066,2077,2086,2095,2103,2110,2124,2140,
	2156,2170,2179,2188,2195,2205,2217,2227,2233,2241,
	2253,2262,2272,2282,2291,2301,2308,2319,2332,2339,
	2348,2354,2361,2367,2374,2383,2395,2405,2412,2423,
	2430,2437,2445,2452,2462,2467,2483,2490,2498,2505,
	2509,2516,2529,2542,2559,2573,2587,2602,2618,2634,
	2640,2646,2655,2661,2669,2675,2684,2692,2704,2714,
	2722,2731,2737,2744,2750,
};
static const int aarch64_syscall_s2i_i[] = {
	202,242,89,217,171,200,280,214,90,91,
	49,51,266,114,113,115,112,220,57,203,
	285,106,23,24,20,21,22,19,221,281,
	93,94,48,223,47,262,263,50,52,53,
	55,54,25,83,10,273,13,32,16,7,
	44,82,46,98,236,100,168,17,61,177,
	175,176,158,102,205,155,172,173,141,278,
	150,148,163,165,156,204,209,178,169,174,
	8,105,27,26,28,3,1,4,0,2,
	29,31,30,272,104,219,129,9,37,201,
	11,12,18,15,62,6,233,235,283,279,
	238,232,34,33,228,284,230,222,40,239,
	226,185,184,180,183,182,181,216,187,186,
	188,189,227,229,231,215,264,101,80,79,
	42,265,56,241,92,59,41,289,290,288,
	73,167,67,69,286,261,270,271,72,117,
	68,70,287,60,63,213,78,65,142,207,
	243,212,234,14,38,276,218,128,134,136,
	135,138,139,133,137,240,125,126,123,275,
	121,120,127,122,274,118,119,124,277,191,
	190,193,192,71,269,211,206,237,99,96,
	162,152,151,144,159,161,103,268,154,140,
	143,149,147,145,164,157,208,170,146,5,
	196,195,197,194,210,132,74,198,199,76,
	43,225,224,36,81,84,267,179,116,77,
	131,107,111,109,108,110,85,87,86,153,
	130,45,166,39,160,35,97,282,88,58,
	75,260,95,64,66,
};
static int aarch64_syscall_s2i(const char *s, int *value) {
	size_t len, i;
	 if (s == NULL || value == NULL)
		return 0;
	len = strlen(s);
	{ char copy[len + 1];
	for (i = 0; i < len; i++) {
		char c = s[i];
		copy[i] = GT_ISUPPER(c) ? c - 'A' + 'a' : c;
	}
	copy[i] = 0;
	return s2i__(aarch64_syscall_strings, aarch64_syscall_s2i_s, aarch64_syscall_s2i_i, 275, copy, value);
	}
}
static const unsigned aarch64_syscall_i2s_direct[] = {
	844,820,853,810,831,2339,998,450,740,919,
	397,943,953,420,1648,979,437,527,964,243,
	207,221,231,198,202,381,779,761,793,863,
	880,869,431,1076,1068,2675,2452,929,1660,2661,
	1111,1393,1323,2430,460,2646,474,304,284,64,
	342,70,349,356,372,365,1352,154,2714,1387,
	1557,534,992,1566,2744,1592,2750,1451,1533,1457,
	1540,2077,1517,1439,2395,2722,2423,2505,1581,1312,
	1303,2462,468,387,2467,2587,2618,2602,2704,15,
	50,57,1375,268,273,2737,2140,2684,484,2124,
	504,1293,576,2217,896,749,184,2516,2559,2542,
	2573,2529,134,104,91,118,2498,1526,1992,2007,
	1919,1904,1960,1872,2026,1826,1849,1938,1691,914,
	2640,2509,2383,1778,1707,1734,1720,1792,1749,1765,
	2241,621,1598,2253,2188,2282,2332,2272,653,2262,
	643,2179,2170,2634,2233,598,683,2301,566,2195,
	2669,2205,2156,663,2291,673,2655,1445,520,720,
	2319,28,606,613,733,551,559,543,713,2490,
	1161,1198,1185,1169,1151,1137,1222,1215,1229,1236,
	2053,2046,2066,2060,2367,2354,2348,2361,2405,2412,
	37,936,0,160,690,586,2103,1605,2308,702,
	2374,2095,1623,1571,46,1268,1208,20,1679,907,
	148,252,1106,294,2445,2437,1128,1243,1084,1249,
	1097,1257,1060,1008,1631,1016,490,2110,1046,1117,
	1808,1359,7,1614,-1u,-1u,-1u,-1u,-1u,-1u,
	-1u,-1u,-1u,-1u,-1u,-1u,-1u,-1u,-1u,-1u,
	2731,1472,314,328,1275,1334,77,2483,2227,2086,
	1482,1499,891,407,1978,1890,1669,2038,633,1033,
	42,259,2692,1022,1090,168,1464,1548,1425,1404,
	1415,
};
static const char *aarch64_syscall_i2s(int v) {
	return i2s_direct__(aarch64_syscall_strings, aarch64_syscall_i2s_direct, 0, 290, v);
}
