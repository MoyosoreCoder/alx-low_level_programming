#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 *_strlen - afunction that returns length of a string
 *@s: the string
 *Return: the length of the string
 */
int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 *_strcpy - a function that copies src string to dest string
 *@dest: the first string given that has a range in buffer already set byte
 *@src: the string to be copied to dest
 *
 *Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int len, i;

	len = 0;

	while (src[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; len++)
	{
		dest[i]	 = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
/**
 *new_dog - creates new dog identifier
 *@name: name of the dog
 *@age:age of the dog
 *@owner: the owner of the dog
 *Return: the dog struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int len1, len2;

	len1 = strlen(name);
	len2 = strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (len1 + 1));
	if (dog->name == NULL)
	{
		free(dog);

		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (len2 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}
