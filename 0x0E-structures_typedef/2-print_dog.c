#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints the content of struct dog
 * @d: the struct to be printed
 */

void print_dog(struct dog *d)
{
	char *name = d->name == NULL ? "(nil)" : d->name;
	char *owner = d->owner == NULL ? "(nil)" : d->owner;

	if (d == NULL)
	{
		return;
	}

	printf("Name: %s\n", name);
	if (d->age < 0)
		printf("Age: (nil)\n");
	else
		printf("Age: %f\n", d->age);
	printf("Owner: %s\n", owner);
}
