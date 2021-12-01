#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LSH_TOK_BUFSIZE 64
#define LSH_TOK_DELIM " \t\r\n\a"
char **tokenizer(char *line)
{
	int bufsize = 1024, position = 0;
	char **token_array;
	char *token;

	token_array = malloc(bufsize * sizeof(char *));

	if (!token_array)
	{
		fprintf(stderr, "lsh: allocation error\n");
		exit(EXIT_FAILURE);
	}

	token = strtok(line, " \t\r\n\a");
	while (token != NULL)
	{
		token_array[position] = token;
		position++;

		if (position >= bufsize)
		{
			bufsize += LSH_TOK_BUFSIZE;
			token_array = realloc(token_array, bufsize * sizeof(char *));
			if (!token_array)
			{
				fprintf(stderr, "lsh: allocation error\n");
				exit(EXIT_FAILURE);
			}
		}

		token = strtok(NULL, " \t\r\n\a");
	}
	token_array[position] = 0;
  return (token_array);
}
int main(void)
{
	int i = 0;
	char str[] = "string to tokenize";
	char **toks;/** to store the return of tokenizer*/

	toks = tokenizer(str);
	while (toks[i] != 0)
	{

		printf("%s\n", toks[i]);
		i++;
	}
	return (0);
}

