#include "main.h"

/**
 * *_strspn - Finds a character in a string
 * @s: Name of string
 * @accept: Character to look for
 *
 * Return: multiple returns
 *
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j = 0;
	int l = 1;


	for (i = 0; s[i] != ' '; i++)
	{
		for (j = 0; accept[j] != 0; j++)
		{
			if (s[i] == accept[j])
			{
				l++;
			}
		}
	}
	return (l - 1);
}

