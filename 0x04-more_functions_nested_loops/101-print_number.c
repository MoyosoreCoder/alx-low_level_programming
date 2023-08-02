#include "main.h"
/**
*print_number - a function that prints integer
*@n: numbers pecified
*Return: void
*/
void print_number(int n)
{
	unsigned long int i, n = 612852475143;

	for (i = 3; i < 782849; i = i + 2)
	{
		while ((n % i == 0) && (n != i))
			n = n / i;
	}
	printf("lu\n", n);
	return (0);
}
