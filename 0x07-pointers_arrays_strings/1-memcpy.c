#include "main.h"
/**
 *_memcpy - function that copies n byte of one string to another
 *@dest: the final destination
 *@src: the source string memory to copy
 *@n: the number of byte in memory
 *Return: the copied memory with n byte changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
