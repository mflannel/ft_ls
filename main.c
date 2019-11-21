#include "ls.h"
#include <stdio.h>
#include <time.h>

//-l, -R, -a, -r and -t.
//10 - ссылка (нужно вытянуть имя файла, на которое ссылается)
//4 - папка, рекурсивно открыть

int main(int ac, char **av) {
	t_options command;
	int check = 0;
	DIR *directory;
//	struct dirrent *directory_content;
	struct stat statCopy;
	struct dirent *direntCopy;

	check = check_flags(av, command);

	if (check == 0)
		start_usage();
	else {
		printf("command executed\n");
		directory = opendir("../");
		while ((direntCopy = readdir(directory)))
		{
		ft_putstr(direntCopy->d_name);
			printf("\n%d\n", direntCopy->d_type);
		stat("/", &statCopy);
		printf("\n%s\n", ctime(&statCopy.st_mtime));
		printf("\n%d\n", statCopy.st_mode);

		}
		closedir(directory);
	}
	directory = opendir("/");
         return (0);
}
//    printf("%d\n", command.l);
//    printf("%d\n", command.R);
//    printf("%d\n", command.a);
//    printf("%d\n", command.r);
//    printf("%d\n", command.t);

//char *recursive_listing()
//{
//
//}



