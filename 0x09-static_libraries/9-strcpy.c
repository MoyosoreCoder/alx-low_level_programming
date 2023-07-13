#include "main.h"
/**
*_strcpy - a function that copies the string pointed to by src
*@dest: the destination buffer
*@src: the source string
*Return: (ptr)
*/
char *_strcpy(char *dest, char *src)
{
	char *ptr = dest;

	while (*src != '\0')
	{
		*dest = *src;

		dest++;
		src++;
	}
	*dest = '\0';

	return (ptr);
}

