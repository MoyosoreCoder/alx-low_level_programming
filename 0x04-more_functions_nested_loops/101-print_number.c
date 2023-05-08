#include "main.h"
/**
*print_number - a function that prints integer
*@n: numbers pecified
*Return: void
*/
void print_number(int n)
{
	unsigned int k = 0;

	if (n < 0)
	{
		n *=  -1
		k = n;
		_putchar('-');
	}
	k / = 10;
	if (k != 0)
		print_numbers(k);
		_putchar((unsigned int) n % 10 + '0');
}
