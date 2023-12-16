#include "main.h"
/**
 *_strcmp -  a function that compares two strings
 *@s1: first string
 *@s2: second string
 *Return: negative if s1 is less than s2, positive if s1 is greater or 0 if they are equal
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}
