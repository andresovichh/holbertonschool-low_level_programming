#include <stdio.h>

/**
 *
 * rev_string - reverses a string
 *
 * @len: length of string
 *
 *
 * Return: Always 0
 *
 */

void rev_string(char *s)
{
	int len, i, tmp = 0;

	while (len != '\0')
	{
		len++;
	}


	for (i = 0; i <= (len / 2); i++)
	{

		tmp = s[i];

		s[i] = s[len - 1 - i];

		s[len - 1 - i] = tmp;
	}




}
