#include "main.h"

/**
 * tokenizer - Tokenizes a string and stores data in array of ptrs
 * @line: this will handle the data inputed by the user
 * Return: the array of pointers
 */
#define LSH_TOK_BUFSIZE 64
#define LSH_TOK_DELIM " \t\r\n\a"
char **tokenizer(char *line)
{
	char *a_token; /**a ptr for each token*/
	unsigned int ctr = 0, buffer = LSH_TOK_BUFSIZE;
/**if string exists, we shoud copy it in case we need it later*/

	char **array_token;

	array_token = malloc(sizeof(char *) * buffer); /**allocate mem*/

	if (!array_token)
	{
		exit(EXIT_FAILURE); /** constant as per man exit*/
	}
	/**then we call strtok to start tokenizin the input & store it in token*/
	a_token = strtok(line, LSH_TOK_DELIM);
	/**then we walk the string and store data in the array*/
	while (a_token != NULL)
	{
		array_token[ctr] = a_token;
		ctr++;
		a_token = strtok(NULL, LSH_TOK_DELIM);
	}
	/** then we have to set the end of the array to NULL*/
	array_token[ctr] = NULL;
return (array_token);
}
int main(void)
{

	tokenizer("this is the data");
	return (0);
}
