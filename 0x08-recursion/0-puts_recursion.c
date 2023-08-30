#include "main.h"
/**
 * _puts_recursion - function that prints a string recursively
 * @s: the string to print
 * Return: the string
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
