#include "variadic_functions.h"
#include <stddef.h>
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - prints all numbers and separator
 * @separator - the separator
 * @n: the numbers passed as arguments
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
		{
			printf("%s", separator);
		}
		printf("\n");
		va_end(nums);
	}
}
