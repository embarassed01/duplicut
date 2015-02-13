#ifndef CONFIG_H
# define CONFIG_H

# include <stddef.h>

# define DEFAULT_LINE_MAX_SIZE (24)


struct              conf
{
    long            memlimit;
    unsigned int    threads;
    unsigned int    line_max_size;
    int             page_size;
    size_t          hmap_size;
    size_t          chunk_size;
};

/** Global configuration vars.
 * Actually initialized on main.c
 */
extern struct conf  g_conf;

/* source file: configure.c */
void                configure(void);

#endif /* CONFIG_H */
