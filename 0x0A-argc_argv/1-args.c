#include <stdio.h>
/**
 * main - the Entry point
 * @argc: the argument count
 * @argv: argument vector
 *
 * Return: the number of arguments passed to main
 */
int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);

	return (0);
}
