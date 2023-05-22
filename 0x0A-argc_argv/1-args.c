#include <stdio.h>

/**
 *main - Entry point
 *@argc: argument count
 *@argv: argument array of strings
 *Return: always (0) on success
 */
int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);

	return (0);
}
