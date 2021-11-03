#include <stdio.h>

/**
 * main - hwas
 * @a: int to be printed
 * main - prints a number by calling ptr to fun
 * Return: Always 0;
 * fun - anod
 *
 */

void fun(int a)
{
	printf("Value of a is %d\n", a);
}

int main(void)
{
	/** fun_ptr is a pinter to function fun()*/
	void (*fun_ptr)(int) = &fun;
	/** Invoking fun() using fun_ptr*/
	(*fun_ptr)(10);

	return (0);
}
