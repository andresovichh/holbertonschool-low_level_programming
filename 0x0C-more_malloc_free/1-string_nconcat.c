#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - String concatenations
 *
 * @s1: string 1.
 * @s2: string 2
 *
 * @n: unsigned int
 *
 * Return: Always 0
 */


char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j = 0;

	char *new_s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s2)
		i++;
	while (s1)
		j++;
	if (n >= i)
	{
		new_s = malloc(sizeof(char) * (i + j));
		if (new_s == NULL)
		{
			return (NULL);
			free(new_s);
		}
		new_s = str_concat(s1, s2);
	return (new_s);
	}
	else
	{
		new_s = malloc(sizeof(char) * (i + n));
		if (new_s == NULL)
		{
			return (NULL);
			free(new_s);
		}
		new_s = str_concat(s1, s2);
		return (new_s);
	}

}
