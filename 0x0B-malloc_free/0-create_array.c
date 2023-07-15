#include "main.h"
#include <stdlib.h>

/**
 * create_array - a function that creeates an array of chrs
 * @size: the size of the array
 * @c: the character to initialize array with
 * Return: pointer to the array or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloic(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		str[i] = c;
	return (str);
}
