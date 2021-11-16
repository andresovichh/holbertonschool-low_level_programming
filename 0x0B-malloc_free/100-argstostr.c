#include "main.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * alloc_grid - returns pointer to 2 dim array of int
 *
 * @width: width of array
 * @height: height of array
 * Return: Always 0
 */


int **alloc_grid(int width, int height)
{
	int **arr;
	int i, j = 0;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}


	arr = malloc(sizeof(*arr) * height);

	if (arr == NULL)
	{
		free(arr);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		arr[i] = malloc(sizeof(int) * width);
		if (arr[i] == NULL)
		{
			for (j = width; j >= 0; j--)
			{
				free(arr[j]);
			}
			free(arr);
			return (NULL);
		}
	}
	return (arr);
}
