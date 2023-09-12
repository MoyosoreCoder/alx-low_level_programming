#include "dog.h"
#include <stdlib.h>

int _strlen(char *str);
char *_strcpy(char *dest, char *src);
dog_t *new_dog(char *name, float age, char *owner);
/**
 * _strlen - function that prints length of the string
 * @str: the given string
 *
 * Return: length of string
 */
int _strlen(char *str)
{
	int len = 0;

	while (*str++)
		len++;
	return (len);
}

/**
 * _strcpy - function that copies a string
 * @dest: the destination string
 * @src: the source string
 *
 * Return: the dest string
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	for (i = 0; i < src[i]; i++)
		dest[i] = src[i];
	dest[i] = '\0';

	return (dest);
}
/**
 *new_dog - function that creates a new dog
 * @name: name given
 * @age: the age
 * @owner: the owner
 *
 * Return: the pointer to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog_ptr;

	if (name == NULL ||  owner == NULL)
		return (NULL);

	dog_ptr = malloc(sizeof(dog_t));
	if (dog_ptr == NULL)
		return (NULL);
	dog_ptr->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (dog_ptr->name == NULL)
	{
		free(dog_ptr);
		return (NULL);
	}
	dog_ptr->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (dog_ptr->owner == NULL)
	{
		free(dog_ptr->name);
		free(dog_ptr->owner);
		return (NULL);
	}
	dog_ptr->name = _strcpy(dog_ptr->name, name);
	dog_ptr->age = age;
	dog_ptr->owner = _strcpy(dog_ptr->owner, owner);

	return (dog_ptr);
}
