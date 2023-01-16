#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees an instance of struct dog from the memory
 * @d: the dog to be freed
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->name);
	free(d->owner);
	free(d);
}
