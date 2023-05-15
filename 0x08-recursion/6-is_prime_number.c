#include "main.h"

/**
 * is_prime_helper - returns if n is a prime number, 0 if otherwise
 * @n: the number to check
 * @i: interatre through n
 * Return: 1 if integer is prime, 0 if otherwise
 */
int is_prime_helper(int n, int i)
{
	if (n <= 1)
	{
		return (0);
	}
	else if (i * i > n)
	{
		return (1);
	}
	else if (n % i == 0 || n % (i + 2) == 0)
	{
		return (0);
	}
	else
	{
		return (is_prime_helper(n, i + 6));
	}
}

/**
 * is_prime_number - checks if an input is protoype
 * @n: an integer
 * Return: 1 for prime numbres, 0 for others
 */
int is_prime_number(int n)
{
	if (n == 2 || n == 3)
	{
		return (1);
	}
	else if (n <= 1 || n % 2 == 0 || n % 3 == 0)
	{
		return (0);
	}
	else
	{
		return (is_prime_helper(n, 5));
	}
}
