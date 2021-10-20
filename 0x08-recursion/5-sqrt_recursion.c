#include "main.h"

/**
 * _sqrt_recursion - Square of a number
 *
 * @n: an int
 *
 * Return: Awlays 0
 */

int _sqrt_recursion(int n)
{
	int *n;

	if ((n / 2) * (n / 2)  == n)
	{
		return (n / 2);
	}
	else
	{
		++n;
		_sqrt_recursion(n - 1);
	}
return (n);
}
