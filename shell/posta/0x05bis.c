#include "main.h"

/**
 * cmd_to_av - splits a string and returns an array of each word of the str
 * @input_string: input string
 * Return: an array of each word of the string
 *
 *
 *
 */
int **cmd_to_av(char *input_string)
{
	char *ptr = NULL;

	ptr = strtok(input_string, "/ :");
	/** first check if input_string exists*/
	if (!input_string)
		return (NULL);

	while (ptr)
	{
		ptr = strtok(NULL, "/ :");
	}
return (0);

}

