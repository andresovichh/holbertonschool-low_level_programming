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
	int len, i, l = 0;
	char tmp;

	while (s[len] != '\0')
	{
		len++;
	}

	l = len;

	for (i = 0; i < l / 2; i++)
	{

		tmp = s[i];

		s[i] = s[l - 1 - i];

		s[l - 1 - i] = tmp;
	}




}
