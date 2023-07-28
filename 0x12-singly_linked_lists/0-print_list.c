#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *print_list - a function of linked list that prints elements in data structure
 *@h: pointer to list_t
 *Return: the number of element
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		count++;
		h = h->next;
	}

	return (count);
}
