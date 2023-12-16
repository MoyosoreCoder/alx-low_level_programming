#include <stdio.h>
#include "main.h"

/**
 * _puts - function that prints a string
 * @str: pointer to the variable char type
 * Return: strings of complete sentence
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		putchar(*str);
		str++;
	}
	putchar('\n');
}
