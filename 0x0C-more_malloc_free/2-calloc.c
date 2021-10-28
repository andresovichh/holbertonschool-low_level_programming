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
	char *arr;
	unsigned int i;
	/** Check if either is 0*/
	if (nmemb == 0 || size == 0)
		return (NULL);
	/** Allocate Memory*/
	arr = malloc(size * nmemb);
	/** Check if null*/
	if (arr == NULL)
		return (NULL);
	/** replace / fill with zeros */
	for (i = 0; i < nmemb * size; i++)
	{
		arr[i] = 0;
	}
	return (arr);
}
