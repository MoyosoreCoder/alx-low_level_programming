#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *
 * free_dog - frees the memory allocated to the parameter
 * @d: the pointer to typedef dog_t
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
