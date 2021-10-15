#include "main.h"

/**
 * cap_string - Makes lower, uppercase
 *
 * @str: a string
 *
 * Return: multiple returns
 *
 */

char *cap_string(char *str)
{
	int i = 0;

	for (i = 0;  str[i] != '\0'; i++)
	{

		if (str[i] < 123 && str[i] > 96)
		{
			if (str[i] = (','; ';', '.', '!', '?', '"', '(', ')', '{', '}'))
					{
						str[i] = str[i] - 32;
						continue;
					}
					else
					{
					}

	}
return (str);
}
