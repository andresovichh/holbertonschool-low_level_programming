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

	if (s[i] == ',' || ' ' || ';' ||
		       	'.' || '!' || '?' || '(' || ')' || '{' || '}' && (s[i] < 90 
			&& s[i] > 65)
	{
		s[i] = s[i] - 32;
	}

return (0);
}
