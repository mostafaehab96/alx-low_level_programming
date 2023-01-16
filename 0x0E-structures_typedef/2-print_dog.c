#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints the content of struct dog
 * @d: the struct to be printed
 */

void print_dog(struct dog *d)
{

	if (d == NULL)
	{
		return;
	}

	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
