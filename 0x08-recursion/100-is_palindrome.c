#include "main.h"

int actual_is_palindrome(char *s, int start, int end);
/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not
 * @s: the input string
 *
 * Return: 1 if string is palindrome and 0 if otherwise
 */
int is_palindrome(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	return (actual_is_palindrome(s, 0, len - 1));
}

/**
 * actual_is_palindrome - confirm the actual palindrome
 * @s: the inouted string
 * @s: start of index position
 * @end: the end of the string
 *
 *Return: 1 if palindrome and 0 if otherwise
 */
int actual_is_palindrome(char *s, int start, int end)
{
	if (start >= end)
	{
		return (1);
	}
	if (s[start] != s[end])
	{
		return (0);
	}
	return (actual_is_palindrome(s, start + 1, end - 1));
}
