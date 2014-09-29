#if defined(ENABLE_MD5)

#if !defined(__MHASH_MD5_H)
#define __MHASH_MD5_H

struct cention_MD5Context {
	mutils_word32 buf[4];
	mutils_word32 bits[2];
	mutils_word8  in[64];
};

void cention_MD5Init(struct cention_MD5Context *context);
void cention_MD5Update(struct cention_MD5Context *context, mutils_word8 __const *buf, mutils_word32 len);
void cention_MD5Final(struct cention_MD5Context *context, mutils_word8 *digest);
void cention_MD5Transform(mutils_word32 buf[4], mutils_word32 __const in[16]);

/*
 * This is needed to make RSAREF happy on some MS-DOS compilers.
 */
typedef struct cention_MD5Context cention_MD5_CTX;

#endif /* !__MHASH_MD5_H */

#endif
