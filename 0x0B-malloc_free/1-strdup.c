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


	new_str = malloc(sizeof(char) * i);

	if (*new_str > 0)
	{
		for (j = 0; j <= i; j++)
		{
			new_str[j] = str[j];
		}
	}
	else
		return (NULL);
return (0);
}





