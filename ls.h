//
// Created by Никита Комаров on 2019-11-20.
//

#ifndef LS_LS_H
#define LS_LS_H

#include <sys/types.h>
#include <dirent.h>
#include "libft/libft.h"


//-l, -R, -a, -r and -t.
typedef struct s_options
{
    short l;
    short R;
    short a;
    short r;
    short t;
} t_options;

void start_usage();//вывоодит usage
int check_flags(char **av, t_options command);//проверяет флаги и записывает их наличие в структуру

#endif
