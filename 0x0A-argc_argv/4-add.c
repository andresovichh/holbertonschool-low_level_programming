#include <stdio.h>
#include <stdlib.h>

/**
 * main - mdasin
 * @argc: das
 *
 * @argv: kmkmsd
 *
 * Return: Always 0
 *
 */

int main(int argc, char **argv)
{

	int caracter, bloque, sum = 0;

	for (bloque = 0; bloque <= argc; bloque++)
	{
		for (caracter = 0; caracter != 0; caracter++)
		{
			if (*argv[caracter] > 48 && *argv[caracter] < 57)
			{
				sum = sum + atoi(argv[caracter]);
				printf("%d", sum);
			}
			else
				printf("Error\n");
			return (1);
		}

}
return (0);
}

