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
	int i, l;

	for (i = 0; str[i] != '\0'; i++)
		;
	l = i;

	for (i = (l / 2); i <= l; i++)
	{
		if (l % 2 == 0)
		{
			_putchar(str[i]);
		}
		else
		{
			_putchar(str[(i - 1) / 2]);
		}
	}
	_putchar('\n');
}
