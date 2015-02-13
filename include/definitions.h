#ifndef DEFINITIONS_H
# define DEFINITIONS_H

# define PROGNAME           "duplicut"
# define PROJECT_VERSION    "0.1a"
# define PROJECT_URL        "http://github.com/nil0x42/duplicut"

/* hashmap maximum load factor */
# define HMAP_LOAD_FACTOR   (0.5)

/* medium line size for determining hashmap min size */
# define MEDIUM_LINE_BYTES  (6)

/* this char is written at start of lines as a `removal mark` */
# define DISABLED_LINE      '\0'


/* source file: filehandle.c */
void            check_files(char **array, int len);

#endif /* DEFINITIONS_H */
