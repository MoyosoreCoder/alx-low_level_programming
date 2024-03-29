#include "main.h"
/**
 * get_bit - program returns a value of bit at index
 * @n: nymber to check bits in
 * @index: index at which to check
 *
 * Return: valueof bit or -1 if an error occur
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int divisor, check;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	divisor = 1 << index;
	check = n & divisor;
	if (check == divisor)
		return (1);
	return (0);
}
