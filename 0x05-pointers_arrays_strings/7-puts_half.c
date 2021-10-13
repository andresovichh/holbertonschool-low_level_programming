#include "main.h"

/**
 * puts_half - reverses a string
 *
 * @str: length of string
 *
 * Return: Always 0
 *
 */

void puts_half(char *str)
{
	int i, l = 0;

	for (i = 0; str[i] != '\0'; i++)
		;
	l = i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (l % 2 != 0 && i > l / 2)
			_putchar(str[i]);
		else if (l % 2 == 0 && i >= l / 2)
			_putchar(str[i]);
	}
	_putchar('\n');
}
