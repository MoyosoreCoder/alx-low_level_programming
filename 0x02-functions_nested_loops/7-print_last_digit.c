#include "main.h"
/**
 *print_last_digit - this prints last digit of n
 *@n: number to be checked
 *Return: the value of the last digit
 */
int print_last_digit(int n)
{
	int ld = n % 10;

	if (ld < 0)
	{
		ld = -ld;
		_putchar('-');
	}
	_putchar(ld + '0');
	_putchar('\n');
	return (ld);
}
