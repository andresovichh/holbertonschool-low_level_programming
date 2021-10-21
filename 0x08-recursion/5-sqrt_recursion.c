#include "main.h"

/**
 * aux - Auxiliary function
 * @n: n
 * @i: i
 * Return: Awlays 0
 */



int aux(int n, int i)
{
	if (i * i == n)
		return (i);
	else if (i * i > n)
		return (-1);
	else
		return (aux(n, i + 1));
}


/**
 * _sqrt_recursion - dasd
 * @n: das
 *
 * Return: always 0
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	return (-1);
	else if (n == 0)
	return (0);
	else
	return (aux(n, 1));



}
