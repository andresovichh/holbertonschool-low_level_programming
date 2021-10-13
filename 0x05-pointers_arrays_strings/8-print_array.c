#include "main.h"
#include <stdio.h>

/**
 * print_array - reverses a string
 *
 * @a: length of string
 * @n: dasdkijmkmsakm
 * Return: Always 0
 *
 */

void print_array(int *a, int n)
{
	int i;


	for (i = 0; i < n - 1; i++)
	{
		printf("%d, ", a[i]);

	}
	for (i = n - 1; i < n; i++)
	{
		printf("%d", a[i]);
	}

	printf("\n");
}
