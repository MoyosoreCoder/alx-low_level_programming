#include "3-calc.h"

int op_add(int a, int b);

/**
 * op_add - function that adds
 * @a: first interger
 * @b:second integet
 *
 * Return: sum
 */
int op_add(int a, int b)
{
	return (a + b);
}

int op_sub(int a, int b);
/**
 * op_sub - function that subtracts
 * @a: the first integer
 * @b: second inteher
 *
 * Return: subtraction
 */

int op_sub(int a, int b)
{
	return (a - b);
}

int op_mul(int a, int b);
/**
 * op_mul - function that multiplies
 * @a: first integer
 * @b: second integer
 *
 * Return: multiplication
 */
int op_mul(int a, int b)
{
	return (a * b);
}

int op_div(int a, int b);
/**
 * op_div - function that divides
 * @a: first integer
 * @b: second integer
 *
 * Return: division
 */
int op_div(int a, int b)
{
	return (a / b);
}

int op_mod(int a, int b);
/**
 * op_mod - function that calculates remainder
 * @a: first integer
 * @b: second integer
 *
 * Return: remainder of the division
 */
int op_mod(int a, int b)
{
	return (a % b);
}
