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

	for (i = 0; i <= l; i += 2)
	{
		_putchar(str[i]);



	}
	 _putchar('\n');

}
