#include "main.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * malloc_checked - allocates memory
 *
 * @b: an unsigned int
 * Return: Always 0
 */


void *malloc_checked(unsigned int b)
{
	unsigned int *s;

	s = malloc(sizeof(s) * b);
	if (s == NULL)
		_putchar(98);
	return (s);






}

