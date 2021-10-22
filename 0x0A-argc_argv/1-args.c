#include "main.h"
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

int main(int argc, char **argv)
{

	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}
