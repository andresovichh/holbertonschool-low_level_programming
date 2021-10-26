#include "main.h"

/**
 * *_strpbrk - Finds a character in a string
 * @s: Name of string
 * @accept: Character to look for
 *
 * Return: multiple returns
 *
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j = 0;

	for (i = 0; s[i] != 0; i++)
	{
		for (j = 0; accept[j] != 0; j++)
	{
		if (*s == accept[j])
		{
			return (s);
		}

	}
	s++;
	}
return (0);
}

