 #include <stdlib.h>
#include <string.h>

/**
 *str_concat - concatenate two strings
 *@s1: first string
 *@s2: second string
 *Return: pointer to the (concatenated) string, NULL if failed
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int len1, len2, i, j;
	char *concatenated;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = strlen(s1);
	len2 = strlen(s2);

	concatenated = malloc((len1 + len2 + 1) * sizeof(char));
		if (concatenated == NULL)
			return (NULL);

	for (i = 0; i < len1; i++)
		concatenated[i] = s1[i];

	for (j = 0; j < len2; j++, i++)
		concatenated[i] = s2[j];
	concatenated[i] = '\0';

	return (concatenated);
}
