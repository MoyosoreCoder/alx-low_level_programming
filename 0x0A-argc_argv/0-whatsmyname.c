#include "main.h"
#include <stdio.h>

/**
 * main - prints the arguments passed to main
 * @argc: argument count
 * @argv: argument vecttor
 *
 * Return: the asrgument passed to the main program
 */
int main(int argc, char *argv[])
{
	(void)argc;

	printf("%s\n", argv[0]);

	return (0);
}
