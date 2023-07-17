#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - function that concatenate 2 strings in byte
 * @s1: destination string in byte
 * @s2: the source string
 * @n: the number in byte to use in concatenating
 * Return: the pointer to the memory allocated
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *res;
	size_t len1, len2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len1 = strlen(s1);
	len2 = strlen(s2);

	if (n >= len2)
		n = len2;

	res = (char *)malloc((len1 + n + 1) * sizeof(char));
	if (res == NULL)
		return (NULL);
	strcpy(res, s1);

	strncpy(res + len1, s2, n);
	res[len1 + n] = '\0';

	return (res);
}
