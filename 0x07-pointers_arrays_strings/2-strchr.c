#include "main.h"

/**
 * *_strchr - Finds a character in a string
 * @s: Name of string
 * @c: Character to look for
 *
 * Return: multiple returns
 *
 */

char *_strchr(char *s, char c)
{
	int i = 0;


	for (i = 0; s[i] != 0; i++)
	{
		if (s[i] == c)
		{
			return (&s[i - 1]);
		}
		else
			return (0);
	}
	return (0);
}
