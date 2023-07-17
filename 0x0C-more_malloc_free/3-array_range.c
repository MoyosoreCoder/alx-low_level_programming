#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - function that creates an array of integers
 * @min: the minimum range value
 * @max: the maximum range
 *
 * Return: pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *arr;
	int i;
	int num_elements;

	if (min > max)
	{
		return (NULL);
	}

	num_elements = max - min + 1;

	 arr = (int *)malloc(num_elements * sizeof(int));
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < num_elements; i++)
	{
		arr[i] = min + i;
	}
	return (arr);

}
