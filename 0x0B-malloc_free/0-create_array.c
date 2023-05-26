#include <stdlib.h>

/**
 *create_array - creates an array of chars and initalize it to a specific size
 *@size: a positive value for size
 *@c: the charracter to initialize thr  array with
 *Return: a pointer to the created arry, (NULL) if it fails, else loop through
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	if (size == 0)
		return (NULL);

	array = malloc(size * sizeof(char));
		if (array == NULL)
			return (NULL);
	for (i = 0; i < size; i++)
		array[i] = c;

	return (array);
}
