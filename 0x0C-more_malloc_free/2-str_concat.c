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
	for (i = 0; s1[i] != 0; i++)
	{
	}
	for (j = 0; s2[j] != 0; j++)
	{
	}
	/** Allocate memory for both strings*/
	new_s = malloc(sizeof(char) * (i + j + 1));

	if (new_s == NULL)
		return (NULL);
	/** Concatenate strings*/
	for (k = 0; k <= i; k++)
	{
		new_s[k] = s1[k];
	}
	for (k = i; k <= (i + j); k++)
	{
		new_s[k] = s2[l];
		l++;
	}

	return (new_s);
}







