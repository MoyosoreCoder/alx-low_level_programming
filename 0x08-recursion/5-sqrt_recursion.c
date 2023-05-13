#include "main.h"
#include <stdio.h>

/**
 * _sqrt_helper - returns the natural square root of a number
 *@sq: the current guess for square root
 * @n: a number
 * Return: natural square root of n or -1 if n is not a natural number
 *
 */
int _sqrt_helper(int n, int sq)
{
	if (sq * sq == n)
	{
		return (sq);
	}
	else if (sq * sq > n)
	{
		return (-1);
	}
	else
	{
		return (_sqrt_helper(n, sq + 1));
	}
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 *@n: natural square root of n or -1 if n is not a natural number
 *Return: square root of a number
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (_sqrt_helper(n, 0));
	}
}

