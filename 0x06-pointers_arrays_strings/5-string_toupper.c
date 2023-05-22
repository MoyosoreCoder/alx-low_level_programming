#include "main.h"

/**
 *string_toupper -  changes all lowercase letters of a string to uppercase
 *@str:pointer to the string
 *Return: pointer to the modified string
 */
char *string_toupper(char *str)
{
	char *ptr = str;

		while (*ptr)
		{
			if (*ptr >= 'a' && *ptr <= 'z')
			{
				*ptr = *ptr - ('a' - 'A');

			}
			ptr++;
		}
	return (str);
}
