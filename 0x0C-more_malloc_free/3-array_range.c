#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - min to max
 *
 * @min: min int
 * @max: max int
 * Return: Always 0
 */

int *array_range(int min, int max)
{
	int *arr, i, j;

	if (min > max)
		return (NULL);
	j =  (max - min);
	arr = malloc(sizeof(int) * j);
	if (arr == NULL)
		return (NULL);
	for (i = 0; i <= j; i++)
	{
		arr[i] += min;
		min++;
	}
return (arr);
}
