#include "main.h"
/**
  * print_diagonal - draws a straih "n", followed by a new line
  * @n: input for length of the line
  * Return: void
  */
void print_diagonal(int n)
{
	int i;
	int j;

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n; j++)
			if (j == i)
				_putchar('\\');
			else
				_putchar(' ');
		_putchar('\n');


	}

}
