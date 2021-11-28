#include "main.h"

/**
 * main - prints one dir at a time
 * Return: a number
 *
 *
 */

int main(void)
{
	char *token;

	token = strtok(_getenv("PATH"), "/");
	token = strtok(NULL, "/ :");
	while (token)
	{
		printf("buffer strtok: %s\n", token);
		token = strtok(NULL, "/ :");
	}
	return (0);
}


