#include "main.h"

/**
 * _puts - junsjnds
 *
 *
 *
 * @str: minnas
 *
 */


void _puts(char *str)
{
	int c = 0;

	c = str[c];

	for (c = 0; str[c] != '\n'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');

}
