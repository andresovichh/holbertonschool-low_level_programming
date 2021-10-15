#include "main.h"

/**
 * cap_string - Makes lower, uppercase
 *
 * @s: a string
 *
 * Return: multiple returns
 *
 */

char *cap_string(char *s)
{
	int i = 0;

	for (i = 0; s[i] != 0; i++)
	{
		if (s[i + 1] > 96 && s[i + 1] < 122)
		{
			s[i] = s[i] - 32;
		}

	}
	s[0] = s[0] - 32;

return (0);
}
