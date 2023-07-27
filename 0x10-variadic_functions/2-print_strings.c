#include <stdio.h>
#include <stdarg.h>

/**
* print_strings - function that prints string not the separatot
*@separator: the separator which is the string or comma
*@n: the number of argument passed to the function
*/
print_strings(const char *separator, const unsigned int n, ...)
{
va_list args;
unsigned int i;

va_start(args, n);

for (i = 0; i < n; i++)
{
const char *str = va_arg(args, const char*);

if (str == NULL)
{
printf("(nil)");
}
else
{
printf("%s", str);
}
if (i < n - 1 && separator != NULL)
{
printf("%s", separator);
}
}
va_end(args);
printf("\n");
}
