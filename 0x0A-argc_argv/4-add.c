#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - Entry point
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: the addition of digit, 1 if not is digit
 */
int main(int argc, char *argv[])
{
	int i, sum = 0, j, num;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		 char *arg = argv[i];

		 for (j = 0; arg[j] != '\0'; j++)
		 {
			 if (!isdigit(arg[j]))
			 {
				 printf("Error\n");
				 return (1);
			 }
		 }
		 num = atoi(arg);

		 if (num < 0)
		 {
			 printf("Error\n");
			 return (1);
		 }
		 sum += num;
	}
	printf("%d\n", sum);
	return (0);
}
