#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include "main.h"
#include <limits.h>
/**
 * main - stat example
 * @ac: an int
 * @av: arg value
 * Return: Always 0.
 */
int main(int ac, char **av)
{
	char buff[PATH_MAX + 1];/** to store path + null*/
	char *cwd;
	unsigned int i;
	struct stat st;
	/** first, get the current CWD*/
	cwd = getcwd(buff, PATH_MAX + 1);
	if (cwd == NULL)
	{
		printf("There is no PATH");
		return (1);
	}
	/** we have the PATH stored in cwd*/
	printf("The CWD is: %s\n", cwd);

	if (ac < 2)
	{
		printf("Usage: %s path_to_file ...\n file is missing\n", av[0]);
		return (1);
	}
	i = 1;
	while (av[i])
	{
		printf("%s:", av[i]);
		if (stat(cwd, &st) == 0)
		{
			printf(" FOUND in %s\n", cwd);
			printf("\n File st_ino %lu \n", st.st_ino);
			printf("\n File type and mode: %o\n", st.st_mode);
			printf("\n Group ID of Owner: %d\n", st.st_gid);

		}
		else
		{
			printf(" NOT FOUND in %s\n", cwd);
												}
		i++;
	}
	return (0);
}
