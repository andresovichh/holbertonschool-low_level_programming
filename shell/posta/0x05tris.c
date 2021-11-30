#include "main.h"

/**
 * main - a main
 * Return: Always 0
 */

int main(void)
{
	char buf[] = "abc/:qwe/:c:c/d";
	int i = 0;
	char *p = strtok(buf, "/:");
	char *array  = NULL;

	while (p != NULL)
	{
		array[i++] = p;
		p = strtok(NULL, "/:");
	}

	for (i = 0; i < 3; ++i)
		printf("%s\n", array[i]);
	return (0);
}
