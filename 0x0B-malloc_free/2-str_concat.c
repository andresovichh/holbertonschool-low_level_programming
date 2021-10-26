#include "main.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * str_concat - Concatenates two strings
 *
 * @s1: a string
 * @s2: another
 *
 * Return: Always 0
 *
 */

char *str_concat(char *s1, char *s2)
{
	int i, j, k, l = 0;
	char *new_s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/** Measure both strings*/
	while (s1[i])
	{
		i++;
	}
	while (s2[j])
	{
		j++;
	}

	/** Allocate memory for both strings*/
	new_s = malloc(sizeof(char) * (i + j + 2));

	if (new_s == NULL)
		return (NULL);
	/** Concatenate strings*/
	if (s1)
	{
		for (k = 0; k <= i; k++)
		{
			new_s[k] = s1[k];
		}
	}
	if (s2)
	{
		for (l = 0; l <= j; l++)
		{
			new_s[k + l + 1] = s2[l];
		}
	}
	*(new_s + 1) = 0;
	return (new_s);
}







