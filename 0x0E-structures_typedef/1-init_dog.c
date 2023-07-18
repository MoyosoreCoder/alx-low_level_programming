#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - a function that initializes a variable in struct dog file
 * @d: a pointer to struct dog
 * @name: name of dog
 * @age: age
 * @owner: the owner of a dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
