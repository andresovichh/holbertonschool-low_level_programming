#include "variadic_functions.h"

/**
 * print_strings - Prints strings separated by separator
 * @separator: Separator
 * @n: number of args
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap; /** Declare variable of type va_list*/
	unsigned int i;
	char *name;

	va_start(ap, n); /** Call va_start macro with var va_list and las param"*/

	for (i = 0; i < n; i++)/** Run through the list*/
	{
		name = (va_arg(ap, char*));

		if (name != NULL)
			printf("%s", name);
		else
			printf("(nil)");

		if (separator != NULL && i != (n - 1))
			/** Don't print in the last case*/
			printf("%s", separator);


	}
	printf("\n");
	va_end(ap); /** Free the list*/
}
