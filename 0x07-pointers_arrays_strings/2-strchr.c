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

	if (s[i] != c)
	{
		return (0);
	}
	return (s = &s[i]);
}
