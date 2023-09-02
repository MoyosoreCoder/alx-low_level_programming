#include "main.h"
#include <stdio.h>
/**
 * main - Entry point
 * @argc: the argument count
 * @argv: the argument vector
 *
 * Return: always 0 on success
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);

	return (0);
}
