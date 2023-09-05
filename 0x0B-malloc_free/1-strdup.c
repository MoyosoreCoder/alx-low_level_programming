#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - duplicates a string and allocate memoryto it
 * @str: given string in main
 *
 * Return: duplicate string using malloc
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
