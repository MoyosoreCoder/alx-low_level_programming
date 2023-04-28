#include <stdio.h>
/**
 *main - Entry point of data
 * Return: always 0 on success
 */
int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
	{
		putchar(c);
	}
	putchar('\n');

	return (0);
}
