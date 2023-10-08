#include "main.h"
#include <stdlib.h>
/**
 * _calloc -  function that allocates memory for an array, using malloc
 * @nmemb: the number in byte
 * @size: size of the array
 *
 * Return: nmemb or size is 0, then _calloc returns NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned char *byte_ptr;
	unsigned int total_size, i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);
	byte_ptr = (unsigned char *)ptr;
	total_size = nmemb * size;

	for (i = 0; i < total_size; i++)
	{
		byte_ptr[i] = 0;
	}
	return (ptr);
}

