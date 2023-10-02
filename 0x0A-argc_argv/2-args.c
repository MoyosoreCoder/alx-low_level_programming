#include <stdio.h>
/**
 * main - Entry point
 * @argc: argument count
 * argv: argument vector
 *
 * Return: the arguments passed on a new line
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
