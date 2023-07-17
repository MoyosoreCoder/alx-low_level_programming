#include "main.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * _calloc -  function allocates memory for an array of nmemb
 * @nmemb: the number of elements in an array
 * @size: the size of the data type in an array
 * Return: the nmemb or size  equals zero, if malloc fails then _calloc is NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int total_size;
	void *ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	total_size = nmemb * size;

	ptr = malloc(total_size);

	if (ptr == NULL)
	{
		return (NULL);
	}
	memset(ptr, 0, total_size);

	return (ptr);
}
