#include "main.h"

/**
 * *_memset - Fills memory with constant type  byte
 * @s: Pointer to memory area
 * @b: Constant byte
 * @n: Bytes to be filled
 *
 * Return: multiple returns
 *
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

return (s);
}
