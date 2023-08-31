#include "main.h"

/**
 * _print_rev_recursion - this use recursion to print string in reverse
 *@s: the input string
 * Return: the reversed string
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar(*s);
		return;
	}
	else
		_print_rev_recursion(s + 1);
	_putchar(*s);
}
