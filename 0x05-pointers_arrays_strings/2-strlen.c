#include "main.h"

/**
 * _strlen - function that calculate the length of a string
 * @s: character to be printed
 * Return: lrngth of the string
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s !=  '\0')
	{
		len ++;
		s++;
	}
	return (len++);

}
