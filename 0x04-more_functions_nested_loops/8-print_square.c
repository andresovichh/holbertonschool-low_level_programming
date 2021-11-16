#include "main.h"
/**
  * print_diagonal - draws a straih "n", followed by a new line
  * @n: input for length of the line
  * Return: void
  */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
		_putchar(10);
	else
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
			{
				_putchar(32);
			}
			_putchar(92);
			_putchar(10);
		}
	}
}


