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
		if (s[i] == accept[j])
		{
			s[i] = accept[j];
			j++;
		}
			else
			{
			}

		}
return (s);
}

