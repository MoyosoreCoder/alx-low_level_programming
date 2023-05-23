#include <stdio.h>
#include <stdlib.h>

/**
 *is_positive_number - checks if each a string is a symbol or number
 *@str: string to check
 *Return: (1) if digit, (0) if otherwise
 */
int is_positive_number(const char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
	}
	return (1);
}

/**
 *main- Entry position
 *@argc: argument count
 *@argv: argument array/vector
 *Return: (0) on success, 1 error
 */
int main(int argc, char *argv[])
{
	int i, sum;

	if (argc < 2)
	{
		printf("0\n");
	}
	for (i = 1; i < argc; i++)
	{
		if (!is_positive_number(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}


