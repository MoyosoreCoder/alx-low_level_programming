#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - the main entry
 * @argc: the argument count
 * @argv: the argument vector
 *
 * Return: the addition of digit,  return 1 if not is digit
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc == 1)
	{
		printf("Error\n");
	}
	else if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (!isdigit(*argv[i]))
			{
				printf("Error\n");
				return (1);
			}
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	return (0);
}
