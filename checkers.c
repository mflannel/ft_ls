#include "ls.h"

void start_usage()
{
	ft_putstr("usage: ls [-@ABCFGHLOPRSTUWabcdefghiklmnopqrstuwx1%] [file ...]\n");
}

int check_flags(char **av, t_options command)
{
	int i;

	i = 0;

	if(!av[1] || (char)av[1][0] != '-')
		return (0);
	i++;
	while (av[1][i] != '\0')
	{
		if ((char) av[1][i] != 'l' && (char) av[1][i] != 'R' &&
		    (char) av[1][i] != 'a' &&
		    (char) av[1][i] != 'r' &&
		    (char) av[1][i] != 't')
			return (0);
		if ((char) av[1][i] == 'l')
			command.l = 1;
		if ((char) av[1][i] == 'R')
			command.R = 1;
		if ((char) av[1][i] == 'a')
			command.a = 1;
		if ((char) av[1][i] == 'r')
			command.r = 1;
		if ((char) av[1][i] == 't')
			command.t = 1;
		i++;
	}
	return (1);
}
