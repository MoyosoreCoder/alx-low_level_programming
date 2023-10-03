#include "main.h"
#include <stdlib.h>
/**
 * _strdup - duplicate a string and allocates memory
 * @str - string given in the main to duplicate
 *
 * Return: duplicated string after using malloc function
 */
char *_strdup(char *str)
{
	int length, i;
	char *duplicate;

	if (str == NULL)
	{
		return (NULL);
	}
	length = 0;

	
	while (str[length] != '\0')
	{
		length++;
	}
	duplicate = malloc((length + 1) * sizeof(char));

	if (duplicate == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= length; i++)
	{
		duplicate[i] = str[i];
	}
	return (duplicate);
}
