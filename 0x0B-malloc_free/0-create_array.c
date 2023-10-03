#include "main.h"
#include <stdlib.h>
/**
 * create_array - function that allocate space for an array
 * @size: size of the array
 * @c: the character of array
 *
 * Return: the array on success, NULL if memory fails
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	if (size == 0)
	{
		return (NULL);
	}
	arr = malloc(size * sizeof(char));

	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
