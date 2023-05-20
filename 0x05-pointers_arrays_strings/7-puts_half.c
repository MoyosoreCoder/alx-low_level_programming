#include "main.h"
#include <stdio.h>
/**
 * puts_half - prints half of a string
 * @str: string to check before printing
 * Return: half of the istring
 */
void puts_half(char *str)
{
	int length = 0;
	int i;
	int n;

	while (str[length] != '\0')
	{
		length++;
	}

	n = (length + 1) / 2;

	for (i = n; i < length; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
