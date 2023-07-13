#include "main.h"
#include <stdef.h>
/**
 *_strchr - afunction that clocate a character in a string
 *@s: the original string
 *@c: the character to search
 *
 *Return: null byte after search
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (*s == c)
		return (s);
	return (NULL);
}
