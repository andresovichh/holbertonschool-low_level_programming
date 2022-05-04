#include "search_algos.h"

/**
 * linear_search - searches for a value in a sorted array
 * @array: array to search
 * @size: size of array
 * @value: value to search for
 * Return: index of value or -1 if not found
 */
int linear_search(int *array, size_t size, int value)
{
size_t i = 0;

if (array == NULL || !value)
return(-1);

for (i = 0; i < size; i++)
{
if (array[i] == value)
{
printf("Value checked array[%lu] = [%d]\n", i, array[i]);
return(i);
}
else
{
printf("Value checked array[%lu] = [%d]\n", i, array[i]);
}
}

return(1);
}
