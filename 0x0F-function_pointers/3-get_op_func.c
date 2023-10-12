#include "3-calc.h"
#include <stdlib.h>
/**
 * get_op_func - selects the correct function to parameter
 * @s: the pointer that point to a character array
 *
 * Return: the calculation according to the symbol between the two numbers
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
		};

	int i;

	i = 0;

	while (ops[i].op != NULL && *(ops[i].op) != *s)
		i++;
	return (ops[i].f);
}
