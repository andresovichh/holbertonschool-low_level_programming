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
	char **result;
	char *buffer = malloc(1024);
	size_t len = 1024;
	char *token;

	int i = 0;

	result = malloc(sizeof(char));

	while (1)
	{
		printf("$ ");
		getline(&buffer, &len, stdin);


		token = strtok(buffer, " ");
		while (token)
		{
			result[i] = token;
			printf("buffer strtok: %s\n", result[2]);
			token = strtok(NULL, " ");
			i++;
		}
	}
		return (0);
}





