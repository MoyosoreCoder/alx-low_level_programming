#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * print_rev - function that reverses a string
 * @s: characters to be reversed
 * Return: reverse of the string
 */
void print_rev(char *s)
{
	int i;
	int temp;
	int len;

	len = strlen(s);

	for (i = 0; i < len / 2; i++)
	{
		temp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
	}
}
