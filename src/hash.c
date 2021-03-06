#include "hash.h"
#include "config.h"


/** FastHASH non-cryptographic hash function wrapper.
 */
static inline void      fasthash(t_line *line, long *out)
{
    uint64_t            h;

    h = fasthash64(LINE_ADDR(*line), LINE_SIZE(*line), SEED);
    *out = (long)(h % g_conf.hmap_size);
}


/** MurmurHash3 non-cryptographic hash function wrapper.
 */
static inline void      murmur3(t_line *line, long *out)
{
    uint32_t            buf128[4];
    unsigned long long  h;

    MurmurHash3_x64_128(LINE_ADDR(*line), LINE_SIZE(*line), SEED, buf128);
    h = *((unsigned long long*)buf128);
    *out = (long)(h % g_conf.hmap_size);
}


/** Hash function wrapper for t_line objects.
 */
long                    hash(t_line *line)
{
    long                key;

    murmur3(line, &key);
    (void)fasthash;
    return (key);
}
