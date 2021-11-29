#include "main.h"

/**
 * main - prints environment
 *
 * Return: Always 0
 */

int main(void)
{
	extern char **environ;
	int i = 0;

	while (environ[i])
	{
		printf("%s\n", environ[i++]);
	}
	return (0);
}


