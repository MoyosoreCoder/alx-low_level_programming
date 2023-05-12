#include "main.h"
/**
 * factorial - prints factorial of a given number
 * @n: number of the factorial
 * Return: -1 if n < 0, 1 if n = 0
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * fsctorial(n - 1));
	}
}
