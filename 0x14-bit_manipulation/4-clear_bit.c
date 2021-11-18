#include "main.h"

/**
 *clear_bit - sets thevalue to 0 at a given index
 * @n: ptr
 * @index: index
 * Return: 1if it worked, 0 if it didn't
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > (sizeof(unsigned int) * 8))
		return (-1);

	/**
	 * You invert the bit string with the bitwise NOT
	 * operator ~, and only the, you AND it.
	 * Because the AND will only return the set
	 * bits.
	 */
	else
	{
		*n = *n & ~(1 << index);
		return (1);
	}



}
