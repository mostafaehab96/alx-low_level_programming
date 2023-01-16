#ifndef _DOG_H_
#define _DOG_H_
/**
 * struct dog - a dog structure
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of the owner of the dog
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif