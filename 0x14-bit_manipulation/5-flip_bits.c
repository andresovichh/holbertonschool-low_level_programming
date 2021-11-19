#include "main.h"
#include <stdio.h>

/**
 * flip_bits - n of bits to change to get to another number
 * @n: a number
 * @m: another number
 * Return: n of bits flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int j = 0, ctr = 0;

	j = (n ^ m);
	while (j)
	{
		ctr += (j & 1);
		j >>= 1;
	}
	return (ctr);






}
