#include<stdio.h>
#include "lists.h"

/**
 * myStartupFun - to be excecuted before main
 * @constructor: something
 */

/**
 * Apply the constructor attribute to myStartupFun() so that it
 * is executed before main()
 */


void __attribute__((constructor)) myStartupFun(void);
void myStartupFun(void)
{
	printf("You're beat! and yet, you must allow,\n
			I bore my house upon my back!\n");
}



/**
 * main - do nothing
 * Return: Always 0;
 */
int main(void)
{
	return (0);
}
