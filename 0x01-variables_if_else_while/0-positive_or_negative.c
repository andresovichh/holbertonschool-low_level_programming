#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
 * main - Tdasda sdasd
 *
 * Return: always zero
 */
int main(void) /*this is a function*/
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
if (n == 0)
printf("%d is zero\n", n);
else if (n < 0)
printf("%d is negative\n", n);
else 
	printf("%d is positive\n", n);
return (0);
}
