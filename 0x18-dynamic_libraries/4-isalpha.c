#include "main.h"
/**
 *_isalpha - checks if an alphabet is lowercase or uppercase or not
 *@c: character to be checked
 *Return: 1 on success and 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

