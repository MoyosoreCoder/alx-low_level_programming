#include <stdio.h>
/**
 * main - Entry point of all values
 * Return: always 0 on success
 */
int main(void)
{
	char i = 'a';

	while (i <= 'z')
	{
		if (i != 'q' && i != 'e')
		{
			putchar(i);
		}
		i++;
	}
	putchar('\n');

	return (0);
}
