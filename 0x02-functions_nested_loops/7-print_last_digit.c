#include "main.h"
/**
 *print_last_digit - this prints last digit of n
 *@num: number to be checked
 *Return: the value of the last digit
 */
int print_last_digit(int num)
{
	int ld = num % 10;

	if (ld < 0)
		ld = -ld;
	_putchar(ld + '0');
	return (ld);
}
