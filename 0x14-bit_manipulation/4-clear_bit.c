#include "main.h"
#include <stdlib.h>
/**
 * clear_bit - function that sets value of a bit to 0
 * @n: the number given in main function as argument
 * @index: index
 *
 * Return: 1 if success and -1 on error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
