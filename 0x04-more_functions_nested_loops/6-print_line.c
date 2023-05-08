#include "main.h"

/**
 * print_line - a function that draw a straight line
 *Return: void
 *@n: number used
 */
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar('-');
		}
	}
	_putchar('\n');
}
