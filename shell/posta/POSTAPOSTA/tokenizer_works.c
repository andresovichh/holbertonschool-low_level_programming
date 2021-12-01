#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char **tokenizer(char *line)
{
	int bufsize = 1024, position = 0;
	char **token_array; /**to store all the tokens*/
	char *token; /** to store each token*/
	/** allocate mem for the array, and check if it worked*/
	token_array = malloc(bufsize * sizeof(char *));
	if (!token_array)
	{ /**per man exit, you call EXIT_FAILURE*/
		exit(EXIT_FAILURE);
	}

	token = strtok(line, " \t\r\n\a");/**the assign the first token*/
	while (token != NULL) /** the walk the string and store tokens in array*/
	{
		token_array[position] = token;
		position++;
		token = strtok(NULL, " \t\r\n\a");
	}
	token_array[position] = 0;/** add sentinel value to know when array ends*/
  return (token_array);
  /**
   * One issue could be that you have to duplicate the string, because strtok
   * works on the provided string, and if it can't modify it, it will dump.
   */
}
int main(void)
{
	int i = 0;
	char str[] = "string to tokenize";
	char **toks;/** to store the return of tokenizer*/
	/**
	 * To be able to walk and print or access the data that tokenizer returns,
	 * you need to use a pointer to pointer, and wlak that
	 */

	toks = tokenizer(str);
	while (toks[i] != 0)
	{

		printf("%s\n", toks[i]);
		i++;
	}
	return (0);
}

