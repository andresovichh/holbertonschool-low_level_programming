#include "main.h"

/**
 * main - splits a string and returns an array of each word of the str
 * Return: an array of each word of the string
 *
 *
 *
 */
int main(void)
{
	char *buffer = malloc(1024);
	size_t len = 1024;
	char *token;

	while (1)
	{
		printf("$ ");
		getline(&buffer, &len, stdin);
		printf("buffer getline: %s", buffer);
	}
	token = strtok(buffer, " ");
	while (token)
	{
		printf("buffer strtok: %s\n", token);
		token = strtok(NULL, " ");
	}
	return (0);
}





