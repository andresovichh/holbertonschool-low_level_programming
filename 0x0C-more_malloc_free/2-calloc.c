#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc -  Calloc
 * @nmemb: number of elementes
 * @size: in bytes of each element
 * Return: Always 0
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i = 0;
	unsigned int *arr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	arr = malloc(nmemb * size);
	if (arr == NULL)
		return (NULL);
	if (arr != NULL)
	for (i = 0; i < nmemb * size; i++)
		arr[i] = 0;
return (arr);
}


