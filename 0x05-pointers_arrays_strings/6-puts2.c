#include "main.h"

/**
 * puts2 - reverses a string
 *
 * @str: length of string
 *
 * Return: Always 0
 *
 */

void puts2(char *str)
{
	int i, l;

	for (i = 0; str[i] != '\0'; i++)
		;
	l = i;

	for (i = 0; i <= l; i++)
	{
		if (i == 0)
		{
			_putchar(str[i]);
		}
		else if (i == 1)
		{
		}
		else if (i % 2)
		{
			_putchar(str[i]);
		}
		else
		{
		}

	}
	 _putchar('\n');

}
