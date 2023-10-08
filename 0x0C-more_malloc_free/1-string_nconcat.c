#include "main.h"
#include <stdlib.h>
#include <stdlib.h>
/**
 * string_nconcat - a function that concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: the number in bytes of s2
 * Return: first n bytes of s2, and null terminated
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i, j, s1_len = 0, s2_len = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[s1_len])
		s1_len++;
	while (s2[s2_len])
		s2_len++;

	ptr = malloc((s1_len + n +  1) * sizeof(char));

	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < s1_len; i++)
		ptr[i] = s1[i];
	for (j = 0; j < n && s2[j]; j++)
		ptr[i + j] = s2[j];
	ptr[i + j] = '\0';

	return (ptr);
}
