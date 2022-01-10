#include "main.h"

/**
 * *_strstr - Finds a character in a string
 * @haystack: Name of string
 * @needle: Character to look for
 *
 * Return: multiple returns
 *
 */

char *_strstr(char *haystack, char *needle)
{
	const char *a = haystack, *b = needle;

	for (;;)
	{
		if (!*b)
			return (haystack);
		if (!*a)
			return (0);
		if (*a++ != *b++)
		{
			a = ++haystack;
			b = needle;
		}
	}
}
