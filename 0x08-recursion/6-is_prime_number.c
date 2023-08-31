#include "main.h"

int actual_prime(int n, int i);

/**
 * is_prime_number - returns 1 if the input integer is a
 * prime number, otherwise return 0
 * @n: the actual parameter in the main function
 *
 * Return: 0 or 1 depends on the condition
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}

/**
 * actual_prime - the function uses loop to iterate a specific number
 * @n: the number
 * @i: the iterator
 *
 * Return: 1 if n is prime and 0 if otherwise
 */
int actual_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (actual_prime(n, i - 1));
}
