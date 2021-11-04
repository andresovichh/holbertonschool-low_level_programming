#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * int_index - returns index of coincidence
 * @array: an array
 * @size: size of the array
 * @cmp: Ptr to function that checks for coincidence
 * Return: Returns the index of the coincidence if succesful
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0)
		return (-1);
	if (cmp && array)
	{
		for (i = 0; i <= size; i++)
		{
			if ((*cmp)(array[i]) != 0)
				return (i);
		}
	}
	return (-1);





}
