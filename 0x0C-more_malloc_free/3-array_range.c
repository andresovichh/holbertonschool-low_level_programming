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
	arr = malloc(sizeof(int) * j + sizeof(int));
	if (!arr)
		return (NULL);
	for (i = 0; min <= max; i++)
	{
		arr[i] = min++;
	}

return (arr);
}
