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
	int i = 1;

	for (i = 1; s[i] != '\0'; i++)
	{
		if ((s[i - 1] == ','
				|| s[i - 1] == ';'
				|| s[i - 1] == '.'
				|| s[i - 1] == '!'
				|| s[i - 1] == '?'
				|| s[i - 1] == '"'
				|| s[i - 1] == '('
				|| s[i - 1] == ')'
				|| s[i - 1] == '{'
				|| s[i - 1] == 9
				|| s[i - 1] == '\n'
				|| s[i - 1] == 32
				|| s[i - 1] == '}')
				&& (s[i] < 123 && s[i] > 96) && i > 1)
		{
			s[0] = s[0] - 32;
			s[i] = s[i] - 32;
		}
	}

return (s);
}
