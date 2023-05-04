#include "main.h"

/**
 * positive_or_negative - checks i a number is positive or negative or 0
 * @i: an integer
 * Return: is positive, negative or zero
 */

void  positive_or_negative(int i)
{
	if (i > 0)
		printf("%d is positive\n", i);

	else if (i < 0)
		printf("%d is negative\n", i);

	else
		printf("%d is zero\n", i);
}
