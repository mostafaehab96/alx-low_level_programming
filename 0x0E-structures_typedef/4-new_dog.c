#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - intializing a new intance of struct dog
 * @name: the name of dog
 * @age: age of the dog
 * @owner: owner name
 * Return: the new dog if success, NULL otherwise
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	char *dog_name;
	char *owner_name;
	dog_t *my_dog;

	if (name == NULL || owner == NULL || age < 0)
		return (NULL);

	my_dog = malloc(sizeof(dog_t));

	if (my_dog == NULL)
		return (NULL);

	dog_name = malloc(sizeof(char) * strlen(name) + 1);
	if (dog_name == NULL)
	{
		free(my_dog);
		return (NULL);
	}
	dog_name = strcpy(dog_name, name);
	my_dog->name = dog_name;

	owner_name = malloc(sizeof(char) * strlen(owner) + 1);
	if (owner_name == NULL)
	{
		free(dog_name);
		free(my_dog);
		return (NULL);
	}
	owner_name = strcpy(owner_name, owner);
	my_dog->owner = owner_name;
	my_dog->age = age;

	return (my_dog);
}


