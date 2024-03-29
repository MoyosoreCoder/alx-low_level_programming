#include <stdio.h>
#include <stddef.h>
#include "lists.h"
/**
 * list_len - list the length of node
 * @h: pointer to the first node
 *
 * Return: the length
 */
size_t list_len(const list_t *h)
{

	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
