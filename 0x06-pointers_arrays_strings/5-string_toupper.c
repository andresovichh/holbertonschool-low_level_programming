#include "main.h"

/**
 * string_toupper - Makes lower, uppercase
 *
 * @str: a string
 *
 * Return: multiple returns
 *
 */

char *string_toupper(char *str)
{
	int i = 0;

	for (i = 0;  str[i] != '\0'; i++)
	{
		if (str[i] < 123 && str[i] > 96)
		{
			str[i] = str[i] - 32;
		}
		else
		{
		}

	}
return (str);
}
