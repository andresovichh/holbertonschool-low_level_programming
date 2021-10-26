#include "main.h"

/**
 * *_memcpy - Fills memory with constant type  byte
 * @dest: Destination memory area
 * @src: Origin of memory area
 * @n: Bytes to be filled
 *
 * Return: multiple returns
 *
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

return (dest);
}
