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

	for (i = l / 2; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
