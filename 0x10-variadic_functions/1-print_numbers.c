#include "variadic_functions.h"

/**
 * print_numbers - Prints n separated by separator
 * @separator: Separator
 * @n: number of args
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap; /** Declare variable of type va_list*/
	unsigned int i;

	va_start(ap, n); /** Call va_start macro with var va_list and las param"*/

	for (i = 0; i < n; i++)/** Run through the list*/
	{
		/** Should I check if incoming is an unisgned in? */
		/**
		 * if (typeof(va_start(ap,n) == unsigned int))
		 *
		 *
		 *
		 *
		 *
		 */
		printf("%d", va_arg(ap, unsigned int)); /** Print each iteration*/
		if (separator != NULL)/** Print separator only if exists*/
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(ap); /** Free the list*/
}
