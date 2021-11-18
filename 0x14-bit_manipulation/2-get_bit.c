#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: number
 * @index: index starting from 0
 * Return: value of a bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	n = (n >> index);
	if (n)
		return (n & 1);

	else if (!n || n > (sizeof(unsigned int) * 8))
		return (-1);
return (0);
}
