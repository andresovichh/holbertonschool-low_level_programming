#include "main.h"

/**
 * main -  eras
 *
 * Return: dasd
 *
 */

int main(void)
{
	int i, j, k = 0;

	for (i = 0; i <= 9; i++)
	{
		_putchar(i);
		for (j = 0; j <= 9; j++)
		{
			if (j != i)
			{
				_putchar(j);
			}
			for (k = 0; k <= 9; k++)
			{
				if (k != j && k != i)
				{
					_putchar(k);
					_putchar(',');
					_putchar(' ');
				}
			}
		}
	}
return (0);
}
