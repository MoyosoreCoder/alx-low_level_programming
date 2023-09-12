#include "dog.h"
/**
 *
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog_ptr;

	if(name == NULL || age < 0 || owner === NULL)
		return (NULL);

	dog_ptr = malloc(sizeof(dog_t));
	if (dog_ptr == NULL)
		return (NULL);
	dog_ptr->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (dog_ptr->name == NULL)
	{
		free (dog_ptr);
		return (NULL);
	}
	dog_ptr->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (dog_ptr-> == NULL)
	{
		free(dog_ptr->name);
		free(dog_ptr->owner);
		return (NULL);
	}
	dog_ptr->name = _strcpy(dog->name, name);
	dog_ptr->age = age;
	dog_ptr->owner = _strcpy(dog->owner, owner);

	return (dog_ptr);
}

