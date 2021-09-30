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



	printf("The size of an int is: %lu.\n", (unsigned long)sizeof(i));
	printf("The size of an double is: %lu.\n", (unsigned long)sizeof(d));
	printf("The size of an c is: %lu.\n", (unsigned long)sizeof(c));
	printf("The size of an li is: %lu.\n", (unsigned long)sizeof(li));
	printf("The size of an lu is: %lu.\n", (unsigned long)sizeof(lu));
	printf("The size of an f is: %lu.\n", (unsigned long)sizeof(f));
	return (0);
}
