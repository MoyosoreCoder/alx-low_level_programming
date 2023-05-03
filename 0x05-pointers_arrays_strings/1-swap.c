#include "main.h"

/**
 *  swap_int - a function that returns the length of a string
 * @a: pointer of an integer a
 * @b: pointer of an integer b
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
