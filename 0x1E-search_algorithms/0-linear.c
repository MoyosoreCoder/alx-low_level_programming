#include "search_algos.h"
/**
 * linear_search - uses linesr search algorithm
 *
 * @array: Pointer to the first element in the array
 * @size: the number of elements in the array
 * @value: the value to search for at its index
 *
 * Return: the index of the element
 */
int linear_search(int *array, size_t size, int value)
{
	int i;

	if (array == NULL)
		return (-1);
	for (i = 0; i < (int)size; i++)
	{
		printf("Value checked array[%u] = [%d]\n", i, array[i]);
		if (value == array[i])
			return (i);
	}
	return (-1);
}
