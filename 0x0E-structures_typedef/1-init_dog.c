#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initialize a struct dog instance
 * @d: a pointer to struct dog to be initialized
 * @name: the name of the dog
 * @age: age of the dog
 * @owner: name of the owner of the dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}

