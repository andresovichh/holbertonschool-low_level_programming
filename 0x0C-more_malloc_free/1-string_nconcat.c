#include "main.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * string_nconcat - Concatenates two strings
 *
 * @s1: a string
 * @s2: another
 * @n: length
 * Return: Always 0
 *
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, k, l = 0;
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
	if (n >= j)
	{
		new_s = malloc(sizeof(char) * (i + j + 1));
	}
	else
	{
		new_s = malloc(sizeof(char) * (i + n + 1));
	}
	if (new_s == NULL)
		return (NULL);
	/** Concatenate strings*/
	for (k = 0; s1[k] != 0; k++)
	{
		new_s[k] = s1[k];
	}
	for (k = i; k <= (i + n) && n < j; k++)
	{
		new_s[k] = s2[l];
		l++;
	}
	for (k = i; s2[k] != 0 && n >= j; k++)
	{
		new_s[k] = s2[l];
		l++;
	}
	return (new_s);
}
