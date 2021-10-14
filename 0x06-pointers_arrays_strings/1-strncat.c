#include "main.h"
#include <stdio.h>
/**
 * _strncat -  Concatenates two strings
 *
 * @dest: Destination string
 *
 * @src: Origin string
 *
 * @n: How many bytes to take from src
 * Return: Always 0
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j = 0;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}
	for (j = 0; src[j] != '\0' && j < n; j++)
	{
		dest[i] = src[j];
		i++;

	}
return (dest);


}
