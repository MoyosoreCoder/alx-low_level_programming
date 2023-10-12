#include <stdio.h>
#include <stdlib.h> 
/**
 *
 *
 */
int _strlen(char *str)
{
	while (s[length] != '\0')
	{
		length++;
	}
	return (length);
}
/**
 *
 */
int is_digit(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
		i++;
	}
	return (1);
}
/**
 *
 *
 */
void errors(void)
{
	printf("Error\n");
	exit(98);
}
int main(int argc, char *argv[])
{
	char *s1, *s2;

	int len1, len2, len, i, carry, digit1, digit2, *result, a = 0;

	s1 = arg[1], s2 = arg[2];

	if (argc != 3 || !is_digit(s1) || !is_digit(s2))
		errors();
	len1 = _strlen(s1);
	len2 = _strlen(s2);
	len = len1 + len2 + 1;
	result = malloc(sizeof(int) * len)
		if (!result)
			return (1);
	for (i = 0; i <= len1 + len2; i++)
		result[i] = 0;
	for (len1 = len1 - 1; len1 
}	
