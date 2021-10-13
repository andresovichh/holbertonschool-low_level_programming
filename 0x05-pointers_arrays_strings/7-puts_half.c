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
	l = i + 1;

	if (l % 2 == 0)
	{
		for (i = l / 2; i <= l; i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		for (i = (l - 1) / 2; i <= l; i++)
		_putchar(str[i]);
	}
	 _putchar('\n');

}
