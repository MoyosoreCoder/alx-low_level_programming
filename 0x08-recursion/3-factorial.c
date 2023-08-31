#include "main.h"

/**
 * factorial - calculate factorial
 *@n: the inpt number
 *Return: the factorial of n
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
