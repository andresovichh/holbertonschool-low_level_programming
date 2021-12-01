#include "main.h"

/**
 * tokenizator - Tokenizes string and stores in array
 * @ptr: Stores input
 * Return: A pointer
 *
 */

char **tokenizator(char *ptr)
{
	/** 1. Create a ptr variable to store the tokens*/
	char *tokens = NULL;
	/**2. Create an array of ptr of ptr to store the tokens*/
	char **array = NULL;
	/** 3. we need a counter too*/
	unsigned int ctr = 0;
	/** 4. you need to malloc the array & checkif it worked*/
	array = malloc(sizeof(char) * BUFFER);
	if (array == NULL)
		return (NULL);
	/**5. we call strtok once to get the first token*/
	tokens = strtok(ptr, "/");
	printf("i am first %s\n", tokens);
	/**6. while token is not NULL, store each token & wlak ptr*/
	while (tokens[ctr])
	{
		*array[ctr] = *tokens;
		tokens = strtok(NULL, "/:");
		printf("%s\n", array[ctr]);
	}
	/**7. finally, we need to add NULL at the end of array*/
	array[ctr] = NULL;


return (array);
}
int main(void)
{
	tokenizator("hello world how are you?");
	return (0);
}

