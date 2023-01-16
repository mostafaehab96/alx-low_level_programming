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
		return;
	if (age == NULL)
		printf("Name: %s\nAge: (nil)\nOwner: %s\n", name, owner);
	printf("Name: %s\nAge: %f\nOwner: %s\n", name, d->age, owner);
}
