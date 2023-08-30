#include <unistd.h>

/**
 * _putchar - Writes  character to stdout
 * @c: the character to be written
 *
 * Return: on success, 1 is returned. On error, -1 is returned
 */
int _putchar(char c)
{
	return write(1, &c, 1);
}
