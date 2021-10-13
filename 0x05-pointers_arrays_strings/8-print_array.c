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

	for (n = 0; a[n] != '\0'; n++)
		;

	for (i = 0; i < n; i++)
	{
		printf("%d, ", a[i]);

	}
	printf("\n");
}
