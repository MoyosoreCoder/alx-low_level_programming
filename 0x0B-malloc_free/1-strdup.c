#include <stdlib.h>
#include <string.h>

/**
 *_strdup - duplicate string str
 *@str: original string
 *Return: the (duplicate)
 */
char *_strdup(char *str)
{
	char *duplicate;

	if (str == NULL)
		return (NULL);

	duplicate = malloc((strlen(str) + 1) * sizeof(char));

	if (duplicate == NULL)
		return (NULL);

	strcpy(duplicate, str);
	return (duplicate);
}
