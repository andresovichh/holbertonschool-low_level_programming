#include "main.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * _realloc - allocates memory
 * @ptr: dami
 * @old_size: mkkmmsa
 * @new_size: an unsigned int
 * Return: Always 0
 */


void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int *s;

	s = malloc(sizeof(new_size));
	old_size = new_size;

	while (old_size)
	{
		old_size = 0;
		return (ptr);
	}
	if (s == NULL)
	{
		exit(98);
	}
	return (s);

}

