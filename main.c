#include "ls.h"
#include <stdio.h>

//-l, -R, -a, -r and -t.

int main(int ac, char **av)
{
    t_options command;

    if(!check_flags(av, command))
     start_usage();
    else
        printf("command executed\n");
        //execute_command(av, command);
}

void start_usage()
{
    ft_putstr("usage: ls [-@ABCFGHLOPRSTUWabcdefghiklmnopqrstuwx1%] [file ...]\n");
}

int check_flags(char **av, t_options command)
{
    int i;

    i = 0;

    if((char)av[1][0] != '-')
        return (0);
    i++;

    while (av[1][i] != '\0')
    {
        if ((char)av[1][i] != 'l' && (char)av[1][i] != 'R' &&
        (char)av[1][i] != 'a' &&
        (char)av[1][i] != 'r' &&
        (char)av[1][i] != 't')
            return (0);

            if((char)av[1][i] == 'l')
                command.l = 1;
            if((char)av[1][i] == 'R')
                command.R = 1;
            if((char)av[1][i] == 'a')
                command.a = 1;
            if((char)av[1][i] == 'r')
                command.r = 1;
            if((char)av[1][i] == 't')
                command.t = 1;
        i++;
    }
    printf("%d\n", command.l);
    printf("%d\n", command.R);
    printf("%d\n", command.a);
    printf("%d\n", command.r);
    printf("%d\n", command.t);
}


