#include <stdio.h>

/**
 * rev_string - reverses a string
 *
 * @s: length of string
 *
 * Return: Always 0
 *
 */

void rev_string(char *s)
{
	int i, j, l = 0;
	int tmp;


	for (i = 0; s[i] != '\0'; i++)
		;

	l = i;

	for (j = 0; j < (l / 2); j++)
	{
		tmp = s[j];
		s[j] = s[l - 1 - j];
		s[l - 1 - j] = tmp;
	}
}
