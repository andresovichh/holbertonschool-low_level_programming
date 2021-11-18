#include "main.h"

/**
 * print_binary - prints a number in binary
 * @n: a number
 */
void print_binary(unsigned long int n)
{
	if (n <= 1)
	{
		_putchar(n + '0');
		return;
	}
	print_binary(n >> 1);
	_putchar((n & 1) + '0');
}
