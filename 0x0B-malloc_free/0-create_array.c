#include "main.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * create_array - rray of chars and initializes it with a specific char.
 *
 * @size: The size of the char array
 * @c: the actual char
 *
 * Return: always 0
 */


char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *mal;

	mal = malloc(sizeof(c) * size);


	if (mal == 0 || size <= 0)
	{
		return (NULL);
	}
	else if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			mal[i] = c;
		}
	}

	return (mal);
}

