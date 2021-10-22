#include <stdio.h>

/**
 * main - program that returns its name
 *
 * @argc: Number of arguments
 * @argv: The arguments themselves
 *
 * Return: Always 0
 *
 */

int main(int argc, char *argv[])
{
	int i = 0;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}


	return (0);
}
