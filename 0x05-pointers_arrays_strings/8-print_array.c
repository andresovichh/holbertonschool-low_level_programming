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
	int i, l;

	for (n = 0; a[n] != '\0'; n++)
		;
	l = n;

	for (i = 0; i <= l; i++)
	{
		printf("%d", a[i]);

	}
	printf("\n");
}
