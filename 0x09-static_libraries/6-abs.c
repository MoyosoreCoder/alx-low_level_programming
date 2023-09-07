#include "main.h"
/**
 *_abs - checks the absolute value of n
 *@n: number to be checked
 *Return: always 0 on success
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (-n);
	}
	else
	{
		return (n);
	}
}
