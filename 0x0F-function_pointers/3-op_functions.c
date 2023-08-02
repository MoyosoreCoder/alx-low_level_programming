#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 *op_add - adds two int
 *@a: first integer
 *@b: second integer
 *Return: addition
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 *op_sub - subtraction of two integer to main
 *@a: first integer
 *@b: second integer
 *Return: subtraction
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 *op_mul - multiplication
 *@a: first integer
 *@b: second integer
 *Return: the result
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division of two integers as argument to main
 *@a: first integer
 *@b: second integer
 *Return: division
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - modulus to get remainder
 *@a: first integer
 *@b: second integer
 *Return: the result
 */
int op_mod(int a, int b)
{
	return (a % b);
}
