#include "main.h"


/**
 * tokenizer - tokenizes string
 * @str: user input
 * Return: pointer to array of tokens
 */
char **tokenizer(char *str)
{
	char **tokens;
	char *token;
	unsigned int i;

	tokens = malloc(sizeof(char) * BUFFER);
	if (tokens == NULL)
		return (0);


	token = strtok(str, "/ :");

	i = 0;
	while (token != NULL)
	{
		tokens[i] = token;
		token = strtok(NULL, "/ :");
		i++;
	}

	tokens[i] = NULL;

	return (tokens);
}
int main(void)
{
	char **user_input = NULL;

	user_input = tokenizer("hi/there:how/:are:/you?");
	printf("%s\n", user_input[0]);
	return (0);
}


