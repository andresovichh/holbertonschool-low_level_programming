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
	int c;

	for (c = 0; str[c] <= '\n'; c++)
	{
		_putchar(str[c]);
	}
	_putchar('\n');

}
