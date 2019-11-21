#include "ls.h"

//-l, -R, -a, -r and -t.

int main(int ac, char **av)
{
    t_options command;

    if(!check_flags(av, command))
     start_usage();
    else
        execute_command(av, command);
}

void start_usage()
{
    ft_putstr("usage: ls [-@ABCFGHLOPRSTUWabcdefghiklmnopqrstuwx1%] [file ...]\n");
}

int check_flags(char **av, t_options command)
{
    int i;

    i = 0;

    if(av[i] != '-')
        return (0);
    i++;

    while (av[i] != '\0')
    {
        if (av[i] != (int)'l' || av[i] != 'R' || av[i] != 'a' || av[i] != 'r' | av[i] != 't')
            return (0);
        if(av[i] == 'l')
            command.l = 1;
        if(av[i] == 'R')
            command.R = 1;
        if(av[i] == 'a')
            command.a = 1;
        if(av[i] == 'r')
            command.r = 1;
        if(av[i] == 't')
            command.t = 1;
        i++;
    }
}


