#include "main.h"
/**
 * _strncpy -  Copies a string
 *
 * @dest: Destination string
 *
 * @src: Origin string
 *
 * @n: How many bytes to take from src
 * Return: Always 0
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	for (i = 0; src[i] != '\0' && i <= n; i++)
	{
		dest[i] = src[i];
	}
	dest[i + 1] = '\0';
return (dest);
}

/** Check if the output is the right one */
