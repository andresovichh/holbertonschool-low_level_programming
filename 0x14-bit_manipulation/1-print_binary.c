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
	/**
	 * When you perform right shifting operation
	 * you are effectively dividing by 2 ^righthand operator.
	 * In this case, that means you are dividing by 2, because
	 * 2^1 = 2.
	 */
	print_binary(n >> 1);
	_putchar((n & 1) + '0');
}
