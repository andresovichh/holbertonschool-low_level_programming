#include "main.h"

/**
 * print_last_digit - check the code.
 * @i: dasdas
 * Return: Always 0.
 */

int print_last_digit(int i)
{
	if (i >= 10)
	{
	int last = (i / 10) % 10;

	return (last);

	}
	else
	{
	return (i);
	}

}
