#include "main.h"

/**
 * is_prime_number - returns if n is a prime number, 0 if otherwise
 * @n: the number to check
 * Return: 1 if integer is prime, 0 if otherwise
 */
int is_prime_number(int n)
{
	int i;

	if (n == 1)
	{
		return (0);
	}
	else if (n <= 3)
	{
		return (1);
	}
	if (n % 2 == 0 || n % 3 == 0)
	{
		return (0);
	}
	for (i = 5; i * i <= n; i += 2)
	{
		if (n % i == 0 || n % (i + 2) == 0)
		{
			return (0);
		}
	}
	return (1);
}
