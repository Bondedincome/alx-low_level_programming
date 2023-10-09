#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints the dogs data
 * @d: Data on the dog like name, age and owner.
 *
 * Return: Void
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", (d->name) ? d->name : "(nil)");
		printf("Age: %f\n", (d->age) ? d->age : 0);
		printf("Owner: %s\n", (d->owner) ? d->owner : "(nil)");
	}
}
