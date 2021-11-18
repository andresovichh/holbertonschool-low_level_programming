#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - converts a binary to an unsigned int
 * @b: pointer to binary
 * Return: the converted number
 *
 *
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0, t = 0;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		t = 2 * t + (b[i] - '0');

	}

	return (t);



}
