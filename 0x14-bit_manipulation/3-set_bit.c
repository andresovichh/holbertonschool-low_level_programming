#include "main.h"

/**
 * set_bit - stest value of bit to 1 at index
 * @n: pointer to nmbr
 * @index: index
 * Return: 1 if worked -1 if error
 *
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (*n > (sizeof(unsigned int) * 8))
		return (-1);

	/**
	 * take number 1 = 0000 0001, and
	 * move it to the position of index.
	 * Then use | operator that would produce this in
	 * a random example (1010)|(0110) = (1110),
	 * therefore setting the one if there was a zero in
	 * the place of index.
	 */
	else
	{
		*n = *n | (1 << index);
		return (1);
	}
}
