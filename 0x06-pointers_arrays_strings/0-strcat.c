#include "main.h"

/**
*_strcat -pointer that concatenates two strings
*@dest: pointer to the destination string
*@src: the source string to b copied at the end of dest
*Return: pointer to the resulting dest
*/
char *_strcat(char *dest, char *src)
{
	char *ptr = dest;

	while(*ptr)
	{
		ptr++;
	}
	while(*src)
	{
		*ptr = *src;
		ptr++;
		src++;
	}
	*ptr = '\0';

	return dest;
}

