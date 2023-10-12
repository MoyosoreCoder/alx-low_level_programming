#include "variadic_functions.h"
#include <stdio.h>
#include <stddef.h>
#include <stdarg.h>
/**
 *print_strings - function that prints only string
 * @separator: the first argument
 * @n: the number of parameters
 *
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	unsigned int i;
	const char *new_str;

	va_start(strings, n);

	for (i = 0; i < n; i++)
	{
		new_str = va_arg(strings, char *);

		if (new_str != NULL)
		{
			printf("%s", new_str);

		}
		else
		{
			printf("(nil)");
		}
		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(strings);

	printf("\n");
}
