#include "main.h"

/**
 * _pow_recursion - Returns x raised to the value of y
 *
 * @x: Value to be raised
 * @y: Power
 *
 * Return: the power
 *
 */


int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
		return (x * _pow_recursion(x, y - 1));

}
