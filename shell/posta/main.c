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

	input = _getline();
	/** by checking if errrno == 0, we conclude it was EOF*/
	if (input == NULL && errno == 0)
	{
		printf("CTRLD\n");
		return (0);
	}
	toks = tokenizer(input);
	while (toks[i])
	{
		printf("position:%d string:%s\n", i, toks[i]);
		i++;
	}
	free(input);
	free(toks);
	return (0);
}
