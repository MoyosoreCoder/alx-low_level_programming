#include <unistd.h>

/**
 *_putchar - write a character to stdout
 * @c: character to print
 * 
 * Return: 1 on succsess, -1 on error
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

