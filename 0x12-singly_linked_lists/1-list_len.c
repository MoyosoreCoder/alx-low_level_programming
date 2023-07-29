#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * list_len - a function returns the number of elements in a linked list_t list
 *@h: the pointer to the head element
 *Return: the number of elements
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}
