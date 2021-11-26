#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include "main.h"
#include <limits.h>
/**
* main - stat example
* Return: Always 0.
*/
int main(void)
{
	char buff[PATH_MAX + 1];/** to store path + null*/
	char *cwd;
	/** first, get the current CWD*/
	cwd = getcwd(buff, PATH_MAX + 1);
	if (cwd == NULL)
	{
		printf("There is no PATH");
		return (1);
	}
	/** we have the PATH stored in cwd*/
	printf("THE CWD IS: %s\n", cwd);

	return (0);
}
