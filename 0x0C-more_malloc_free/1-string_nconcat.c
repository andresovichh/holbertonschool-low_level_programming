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
	for (i = 0; s1[i] != 0; i++) /** Measure string*/
		;
	for (j = 0; s2[j] != 0; j++) /** Measure other string*/
		;
	if (n < j)
	{
		new_s = malloc(sizeof(char) * (i + n + 1));
		if (new_s == (NULL))
			return (NULL);
	}
	else
	{
		new_s = malloc(sizeof(char) * (i + j + 1));
		if (new_s == NULL)
			return (NULL);
	}

	for (k = 0; k <= i; k++)
	{
		new_s[k] = s1[k];
	}
	while (l <= n)
	{
		new_s[k++] = s2[l++];
	}
	new_s[k] = 0;

	return (new_s);
}
