#include "main.h"

/**
 *_print_rev_recursion - prints string in reverse order
 *@s: the actual parameter in main function
 *Return: the reversed string
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
