#include "main.h"
/**
 *_strcmp -  a function that compares two strings
 *@s1: first string
 *@s2: second string
 *Return: negative if s1 is less than s2, positive if s1 is greater or 0 if they are equal
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
