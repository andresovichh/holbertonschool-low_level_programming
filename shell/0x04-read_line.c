#include "main.h"

/**
 * main - Reads a line and prints it
 * Return: the line
 *
 *
 */
int main(void)
{
	/**
	 * as per man 3 getline, you set the ptr to
	 * NULL before calling getline, so it will
	 * allocate a buffer to store the line.
	 */
	size_t buff = 0;

	char *input =  NULL;

	printf("$ ");
	getline(&input, &buff, stdin);
	printf("%s", input);

	return (0);

}
