#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prts all args W/O ac
 * @ac: is the n of items in ac
 * @av: a NULL terminated array of strings
 * Return: Always 0
 *
 *
 * av[0] usually contains the name used to invoke the current
 * program.
 * av[1] is the first argument of the program.
 * av[2] the second, and so on.
 */

int main(int ac, char **av)
{
	/**
	 * we start iterating after 0,
	 * because, the av[0] contains the name
	 * used to invoke the current program
	 */
	int ctr = 1;

	ac = ac;
	for (ctr = 1; av[ctr] != 0; ctr++)
		printf("%s\n", av[ctr]);
	return (0);

}

