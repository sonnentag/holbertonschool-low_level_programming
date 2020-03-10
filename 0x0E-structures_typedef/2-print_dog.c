#include "dog.h"
#include <stdio.h>

/**
 * print_dog - function to print dog details
 * @d: dog structure
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		if (!(d->name))
			printf("Name: <nil>\n");
		else
			printf("Name: %s\n", d->name);

		printf("Name: %f\n", d->age);

		if (!(d->owner))
			printf("Name: <nil>\n");
		else
			printf("Name: %s\n", d->owner);
	}
}
