#include "main.h"

/**
 * reverse_array - Reverses an array
 *
 * @a: a string
 * @n: Number of elements in the array
 *
 * Return: multiple returns
 *
 */

void reverse_array(int *a, int n)
{
	int i, tmp;

	for (i = 0; i < (n - 1) / 2; i++)
	{
		tmp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = tmp;

	}
}
