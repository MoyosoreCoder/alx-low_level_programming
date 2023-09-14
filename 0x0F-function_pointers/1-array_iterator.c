#include "function_pointers.h"
#include <stddef.h>
#include <stdio.h>
/**
 * array_iterator - executes a function given as a parameter on each element of an array
 * @size: the size given
 * @action: function to pointer
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL)
	{
		for (i =  0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
