#include "main.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * _strdup - returns pointer to new string duplicate of str
 *
 * @str: the string to duplicate
 * Return: Always 0
 */

char *_strdup(char *str)
{
	/**
	 * This is a loop to measure the length of
	 * the array 'str'
	 */
	int i, j;
	char *new_str;

	for (i = 0; str[i] != 0; i++)
	{
	}

	/** Here I get the length of str as the value of i*/
	/** The +1 is there because the counter wont measure null*/
	new_str = malloc((sizeof(char) * i) + 1);

	if (str == NULL || new_str == NULL)
		return (NULL);

	for (j = 0; j <= i; j++)
	{
		new_str[j] = str[j];
	}
	new_str[j + 1] = '\0';
	return (new_str);
}





