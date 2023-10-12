#include <stdio.h>
#include <string.h>
#include "lists.h"
/**
 * print_list - prints elements in a list
 * @h: the first node
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;

		count++;
	}
	return (count);
}

