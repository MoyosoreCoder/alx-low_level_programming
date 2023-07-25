#include "function_pointers.h"
/**
 * int_index - a function that set comparison of index
 * @cmp: pointer that compares an array in a function
 * @array: array declared
 * @size: the size of array
 * Return: if no element matches return  -1 and if sizze <=0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
