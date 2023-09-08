#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - memeory that concatenated two strings
 * @s1: the first string
 * @s2: the second strin
 * @n: the number of bytes of s2
 *
 * Return: If the function fails, it should return NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int s1_len = 0, s2_len = 0, i, j;


	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[s1_len])
		s1_len++;
	while (s2[s2_len])
		s2_len++;

	ptr = malloc((s1_len + n + 1) * sizeof(char));

	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < s1_len; i++)
		ptr[i] = s1[i];
	for (j = 0; j < n && s2[j]; j++)
		ptr[i + j] = s2[j];
	ptr[i + j] = '\0';

	return (ptr);
}
