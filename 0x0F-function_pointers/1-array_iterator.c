#include "function_pointers.h"
#include <stdio.h>
#include <stddef.h>
/**
 *array_iterator -  a function that executes a function given as a parameter
 *@array: an array
 *@size: size of array
 *@action: the function ponter to int
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
