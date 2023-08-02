#include <stdio.h>
#include "main.h"
/**
*print_number - a function that prints integer
*@n: numbers pecified
*Return: void
*/
void print_number(int n)
{
	unsigned int nl;

	if (n < 0)
	{
		nl = -n;
		_putchar('-');
	}
	else
	{
		nl = n;
	}
	if (nl / 10)
	{
		print_number(nl / 10);
	}
	_putchar((nl % 10) + '0');
}
