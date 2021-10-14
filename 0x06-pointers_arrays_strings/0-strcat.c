#include "main.h"
#include <stdio.h>
/**
 * _strcat -  Concatenates two strings
 *
 * @dest: Destination string
 *
 * @src: Origin string
 * Return: Always 0
 */


char *_strcat(char *dest, char *src)
{
	int i, j = 0;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}
	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;

	}
return (dest);


}
