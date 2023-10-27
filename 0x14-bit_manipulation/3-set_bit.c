#include "main.h"
/**
 * set_bit - set the value of a bit to 1 at index
 * @n: number to set
 * @index: index at which to set bit
 *
 * Return: 1 if success or -1 if error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int setbits;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	setbits = 1 << index;
	*n = *n | setbits;
	return (1);
}
