#include <stdio.h>

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
		for (j = 0; j <= 9; j++)
		{
			for (k = 0; k <= 9; k++)
			{
				if (j > i && k > j && i != k)
				{
					putchar(48 + i);
					putchar(48 + j);
					putchar(48 + k);
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
return (0);
}
