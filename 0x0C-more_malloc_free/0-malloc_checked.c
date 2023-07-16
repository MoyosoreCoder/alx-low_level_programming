#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - function that cause termination
 * @b: the number of bytes to alloacte
 * Return: exit value of 98
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);

	return (ptr);
}
