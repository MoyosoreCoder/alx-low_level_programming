#include "main.h"
int actual_prime(int n, int i);

/**
 * is_prime_number - checks to the last number if its an integer
 * @n: the number to check
 * Return: 1 if the input integer is a prime number
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}

/**
 * actual_prime - recursively checks if number is a prime number
 * @n: the number
 * @i: the iterator
 * Return: boolean true or false
 */
int actual_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (actual_prime(n, i - 1));
}
