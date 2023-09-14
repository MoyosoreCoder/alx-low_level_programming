#include "function_pointers.h"
#include <stddef.h>
/**
 * int_index - function that searches for an integer
 * @array: an array
 * @size: size of the array
 * @cmp: the function that compares
 * Return: the index of the first matching element
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array != NULL && cmp != NULL && size > 0)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
			{
				return (i);
			}
		}
	}
	return (-1);
}
