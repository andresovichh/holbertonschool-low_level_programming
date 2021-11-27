#include "main.h"
/**
 * main - checks env and environ address
 * @ac: arg count
 * @av: argval
 * @env: environment
 * Return: Always 0
 */
int main(int ac, char **av, char **env)
{
	extern char **environ;

	unsigned int i = 0, j = 0;

	printf("ENV:\n");
	while (env[i] != NULL)
	{
		printf("%o\n", *env[i]);
		i++;
	}
	printf("ENVIRON:\n");
	while (environ[j])
	{
		printf("%o\n", *environ[j++]);
	}
	return (0);




}

