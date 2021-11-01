#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - Print the dog struct
 * @d: dog struct
 *
 */

void print_dog(struct dog *d)
{
	if  (d)
	{
		if (d->name == NULL)
			printf("(nil)\n");
		else
			printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);

		if (d->name == NULL)
		{
			printf("Name: (nil)\n");
		}
		else if (d->owner != NULL)
		{
			printf("Owner: %s\n", d->owner);
		}

	}
}
