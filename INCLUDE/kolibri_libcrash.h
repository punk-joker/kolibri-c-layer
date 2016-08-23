#ifndef KOLIBRI_LIBCRASH_H
#define KOLIBRI_LIBCRASH_H

#define LIBCRASH_CRC32         	0
#define LIBCRASH_MD4            1
#define LIBCRASH_MD5            2
#define LIBCRASH_SHA1           3
#define LIBCRASH_SHA224         4
#define LIBCRASH_SHA256         5
#define LIBCRASH_SHA384         6
#define LIBCRASH_SHA512         7
#define LIBCRASH_SHA3_224       8
#define LIBCRASH_SHA3_256       9
#define LIBCRASH_SHA3_384       10
#define LIBCRASH_SHA3_512       11
#define LIBCRASH_LAST           11

extern int kolibri_libcrash_init(void);

extern uint32_t (*crash_bin2hex)(void*, char*, uint32_t) __attribute__((__stdcall__));
extern uint32_t (*crash_hash)(uint32_t, void*, void*, void*) __attribute__((__stdcall__));

#endif /* KOLIBRI_LIBCRASH_H */
