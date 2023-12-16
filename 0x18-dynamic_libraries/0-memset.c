#include "main.h"
/**
 * _memset - a function that fills a memeory with a constant byte
 *@s: pointer to the memory to be filled
 *@b: the constant byte to fill the mmemory
 *@n: number of byte to fill
 *
 * Return: pointer to the filled memory
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
	s[i] = b;
	}
	return (s);
}
