//
// Created by Никита Комаров on 2019-11-20.
//

#ifndef LS_LS_H
#define LS_LS_H

#include <sys/types.h>
#include <sys/stat.h>
#include <dirent.h>
#include "libft/libft.h"
#define LINK_TYPE 10

//-l, -R, -a, -r and -t.
typedef struct s_options
{
    short l;
    short R;
    short a;
    short r;
    short t;
} t_options;

typedef struct s_dirent_copy
{
	ino_t          d_ino;       /* inode number */
	off_t          d_off;       /* offset to the next dirent */
	unsigned short d_reclen;    /* length of this record */
	unsigned char  d_type;      /* type of file; not supported
                                   by all file system types */
	char           d_name[256]; /* filename */
} t_dirent_copy;

void start_usage();//вывоодит usage
int check_flags(char **av, t_options command);//проверяет флаги и записывает их наличие в структуру
char *recursive_listing();

#endif
