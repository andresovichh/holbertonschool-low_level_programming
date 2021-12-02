#include "main.h"

/**
 * main - main function for the shell project
 * Return: Always 0
 *
 */
int main(void)
{
	int i = 0;
	char **toks;
	char *input;
	int status;

	do {
		input = _getline();
		/** by checking if errrno == 0, we conclude it was EOF*/
		if (input == NULL && errno == 0)
		{
			printf("CTRLD\n");
			free(input);
			free(toks);
			return (0);
		}
		else if (input == NULL && errno != 0)
		{
			printf("Some error occurred");
			return (1);
		}
		toks = tokenizer(input);
		while (toks[i])
		{
			/** this should check if user types exit*/
			if (strcmp(toks[i], "exit") == 0)
			{
				free(toks);
				free(input);
				return (0);
			}
			printf("position:%d string:%s\n", i, toks[i]);
			if (strcmp(toks[i], "gout") == 0)
			{
				free(toks);
				free(input);
				status = 0;
			}
			i++;
		}
		free(input);
		free(toks);
	} while (status);

	return (0);
}
