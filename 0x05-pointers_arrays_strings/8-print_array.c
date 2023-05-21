#include "main.h"
#include <stdio.h>

/**
 * print_array -  a function that prints n elements of an array of integers
 * @n: the integer to print
 * @a: array where the elements of array are stored
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i  != n -  1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
