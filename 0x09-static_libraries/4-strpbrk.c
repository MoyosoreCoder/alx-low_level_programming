#include "main.h"
/**
 *_strpbrk - function that search for a string of any bytes in it
 *@s: string for the first occurance of vowel in bytes
 *@accept: the final string showing the position
 *Return: pointer to thein @s or null if no match
 */
char *_strpbrk(char *s, char *accept)
{
	int k;

	while (*s)
	{
		for (k = 0; accept[k]; k++)
		{
			if (*s == accept[k])
				return (s);
		}
		s++;
	}
	return ('\0');
}
