#include "main.h"
#include <stdio.h>

/**
 *print_diagsums - function that prints the sum of the two diagonals
 *@a: the array
 *@size: specific size
 *Return: sum
 */
void print_diagsums(int *a, int size)
{
	int index, sum1 = 0, sum2 = 0;

	for (index = 0; index < size; index++)
	{
		sum1 += a[index];
		a += size;
	}
	a -= size;

	for (index = 0; index < size; index++)
	{
		sum2 += a[index];
		a -= size;
	}
	printf("%d, %d\n", sum1, sum2);
}
