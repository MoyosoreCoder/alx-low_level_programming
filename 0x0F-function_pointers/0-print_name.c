#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - pointer that function that print name
 * @name: name in the main function
 * @f: the paramwter function
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
