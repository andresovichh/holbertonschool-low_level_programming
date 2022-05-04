#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers
 * @array: array of integers
 * @size: size of the array
 * @value: value to search for
 * Return: index of the value or -1 if not found
 */
int binary_search(int *array, size_t size, int value)
{
size_t L = 0, R = size - 1;
size_t m, i = 0;


if (array == NULL || L > R)
return (-1);

while (L <= R)
{
printf("Searching in array: ");
for (i = L; i <= R; i++)
{
if (i == R)
{
printf("%d", array[i]);
break;
}
printf("%d, ", array[i]);
}
printf("\n");
m = ((L + R) / 2);


if (array[m] < value)
{
L = m + 1;


}
else if (array[m] > value)
R = m - 1;
else
return (m);
}
return (-1);
}
