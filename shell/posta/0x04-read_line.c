#include "main.h"

/**
 * main - Reads a line and prints it
 * Return: the line
 *
 *
 */
char *_getline(void)
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
		if (strcmp(input, "^D") != 0)
		{
			printf("End of file, no errors");
			return (0);
		}

	printf("%s", input);
	free(input);
	return (input);
}

int main(void)
{
	_getline();
	return (0);
}
