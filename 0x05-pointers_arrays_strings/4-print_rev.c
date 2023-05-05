#include "main.h"
#include <stdio.h>

/**
 * print_rev - function that reverses a string
 * @s: characters to be reversed
 * Return: reverse of the string
 */
void print_rev(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	for (i--; i > 0; i--)
		putchar(s[i]);
	putchar('\n');
}
