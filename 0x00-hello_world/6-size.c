#include <stdio.h>
/**
 * main - tata
 * Return: always 0
 */


int main(void)
{
	int i;
	double d;
	char c;
	long long int li;
	long int lu;
	float f;



	printf("Size of a char: %lu.\n", (unsigned long)sizeof(c));
	printf("Size of an inr: %lu.\n", (unsigned long)sizeof(i));
	printf("Size of a long: %lu.\n", (unsigned long)sizeof(lu));
	printf("Size of a long long int: %lu.\n", (unsigned long)sizeof(li));
	printf("Size of a float: %lu.\n", (unsigned long)sizeof(f));
	return (0);
}
