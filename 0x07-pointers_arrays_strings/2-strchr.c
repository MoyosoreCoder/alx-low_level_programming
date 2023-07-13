#include "main.h"
/**
 *_strchr - afunction that clocate a character in a string
 *@s: the original string
 *@c: the character to search
 *
 *Return: null byte after search
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s[i]);
	}
	return (0);
}
