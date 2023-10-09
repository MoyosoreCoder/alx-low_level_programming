#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _realloc - function that reallocates a memory block using malloc and free
 * @old_size: the old size
 * @new_size: new size
 * @ptr: the pointer to the old allocated memory
 * Return: new_size > old_size, added memory should be initilized
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	unsigned int copy_size;

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		return (malloc(new_size));
	}
	new_ptr = malloc(new_size);

	if (new_ptr == NULL)
	{
		return (NULL);
	}
	if (new_size == old_size)
		return ptr;

	copy_size = (old_size <= new_size) ? old_size : new_size;

	memcpy(new_ptr, ptr, copy_size);
	free(ptr);
	return (new_ptr);
}
