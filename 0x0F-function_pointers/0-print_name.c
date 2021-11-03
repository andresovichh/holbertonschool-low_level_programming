#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_name - Prints a name
 * @name: Name to be printed
 * @f: pointer to func char
 */


void print_name(char *name, void (*f)(char *))
{
	/**  name and char* have to exist*/
	if (name && f)
		(*f)(name);
}
