#include "variadic_functions.h"

/**
 * sum_them_all - Adds its parameters
 * @n: unsigned int constatn
 * Return: Sum of parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum;

	va_start(ap, n); /** Initialize argument list*/

	sum = 0;
	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(ap, unsigned int);
		/** Get the next arg value*/
	}
	va_end(ap); /** Clean Up*/

	return (sum);

}


