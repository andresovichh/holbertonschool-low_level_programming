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
	int i, l = 0;
	char tmp;

	for (i = 0; s[i] != '\0'; i++)
	{
		l = i++;
	}

	for (i = 0; i < ((l + 1) / 2); i++)
	{

		tmp = s[i];
		s[i] = s[l - 1 -  i];

		s[l - 1 - i] = tmp;
	}




}
