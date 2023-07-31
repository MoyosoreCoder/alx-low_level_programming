#include "lists.h"

/**
 *listint_len - a function that returns the number of elements
 *@h: the head pointer
 *Return: the number of elements in linked list
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}
	return (num);
}
