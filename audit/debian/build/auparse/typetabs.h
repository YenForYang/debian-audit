/* This is a generated file, see Makefile.am for its inputs. */
static const char type_strings[] = "a0\0a1\0a2\0a3\0acct\0action\0addr\0apparmor\0arch\0auid\0"
	"cap_fi\0cap_fp\0cap_pa\0cap_pe\0cap_pi\0cap_pp\0capability\0cgroup\0cmd\0code\0"
	"comm\0cwd\0data\0denied_mask\0device\0dir\0egid\0euid\0exe\0exit\0"
	"family\0fi\0file\0flags\0fp\0fsgid\0fsuid\0gid\0grp\0hook\0"
	"icmptype\0id\0igid\0img-ctx\0info\0inode_gid\0inode_uid\0invalid_context\0ioctlcmd\0iuid\0"
	"key\0list\0macproto\0mode\0name\0new-chardev\0new-disk\0new-fs\0new-net\0new-rng\0"
	"new_gid\0new_group\0new_pe\0new_pi\0new_pp\0oauid\0obj\0obj_gid\0obj_uid\0ocomm\0"
	"oflag\0ogid\0old-auid\0old-chardev\0old-disk\0old-fs\0old-net\0old-rng\0old_pa\0old_pe\0"
	"old_pi\0old_pp\0old_prom\0operation\0ouid\0pa\0path\0pe\0per\0perm\0"
	"perm_mask\0pi\0pp\0proctitle\0profile\0prom\0proto\0requested_mask\0res\0resp\0"
	"result\0saddr\0sauid\0scontext\0ses\0sgid\0sig\0sigev_signo\0subj\0suid\0"
	"syscall\0tcontext\0uid\0vm\0vm-ctx\0watch";
static const unsigned type_s2i_s[] = {
	0,3,6,9,12,17,24,29,38,43,
	48,55,62,69,76,83,90,101,108,112,
	117,122,126,131,143,150,154,159,164,168,
	173,180,183,188,194,197,203,209,213,217,
	222,231,234,239,247,252,262,272,288,297,
	302,306,311,320,325,330,342,351,358,366,
	374,382,392,399,406,413,419,423,431,439,
	445,451,456,465,477,486,493,501,509,516,
	523,530,537,546,556,561,564,569,572,576,
	581,591,594,597,607,615,620,626,641,645,
	650,657,663,669,678,682,687,691,703,708,
	713,721,730,734,737,744,
};
static const int type_s2i_i[] = {
	14,15,16,17,6,35,26,6,4,1,
	22,22,22,22,22,22,12,6,6,28,
	6,6,20,6,6,6,2,1,6,5,
	23,22,6,30,22,2,1,2,6,34,
	24,1,2,32,6,2,1,6,37,1,
	38,19,36,8,39,6,6,6,6,6,
	2,6,22,22,22,1,32,2,1,6,
	29,2,1,6,6,6,6,6,22,22,
	22,22,11,6,1,22,6,22,27,7,
	7,22,22,33,6,11,25,6,13,40,
	13,9,1,32,21,2,18,18,32,1,
	3,32,1,6,32,6,
};
static int type_s2i(const char *s, int *value) {
	return s2i__(type_strings, type_s2i_s, type_s2i_i, 116, s, value);
}
