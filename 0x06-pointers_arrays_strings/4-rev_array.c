#include "main.h"

/**
 *reverse_array - function that reverse array
 *@a: the array to reverse
 *@n: number of corresponding element in the array
 */
void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];

		a[i] = a[n - 1 - i];
		a[n - 1 - i] = temp;
	}
}
