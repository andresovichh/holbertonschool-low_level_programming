#include "main.h"

/**
 * _strcmp - Compares two strings
 *
 * @s1: a string
 * @s2: Another string
 *
 * Return: multiple returns
 *
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0'; i++)
	{
		if (s1[i] == s2[i])
		{
			return (0);
		}
		else if (s1[i] > s2[i])
		{
			return (s1[i] - s2[i]);
		}
		else if (s1[i] < s2[i])
		{
			return (-(s2[i] - s1[i]));
		}
	}
	return (0);
}
