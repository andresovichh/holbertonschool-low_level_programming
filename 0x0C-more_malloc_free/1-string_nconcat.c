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
	unsigned int i, j, k, l = 0;

	char *new_s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s2[i] != 0; i++) /** Measure string*/
		;
	for (j = 0; s1[j] != 0; j++) /** Measure other string*/
		;
	if (n >= i)
	{
		new_s = malloc(sizeof(char) * (i + j + 1));
		if (new_s == NULL)
		{
			return (NULL);
		}
	return (new_s);
	}
	else
	{
		new_s = malloc(sizeof(char) * (i + n + 1));
		if (new_s == NULL)
		{
		}
		return (new_s);
	}
	for (k = 0; s1[k] != 0; k++)
		new_s[k] = s1[k];
	for (l = 0; s2[l] != 0; l++)
	{
		new_s[k + 1] = s2[l];
		k++;
	}
	new_s[i + j] = 0;
	return (new_s);
}
