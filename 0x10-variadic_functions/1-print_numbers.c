#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 *print_numbers - function that prints a string
 *@separator: the string to print
 *@n: the number of integers passed to the function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	unsigned int i;

	va_start(nums, n);


	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(nums, int));

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(nums);
}
