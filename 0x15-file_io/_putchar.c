#include <unistd.h>

/**
 * _putchar - write a character to the standard output 
 * @c: character to be written
 * Return: return 1 on success, on error -1 and error is set appropriately
 */
int _putchar(char c)
{
	return write(1 , &c, 1);
}
