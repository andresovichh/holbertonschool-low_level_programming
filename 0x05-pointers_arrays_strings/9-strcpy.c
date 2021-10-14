#include "main.h"
#include <stdio.h>

/**
 * _strcpy - reverses a string
 *
 * @dest: length of string
 * @src: dsd
 * Return: Always 0
 *
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	for (i = 0; src[i] != '\0'; i++)
	{
		src[i] = dest[i];
	}
	dest[i] = '\0';
	return (dest);
}
