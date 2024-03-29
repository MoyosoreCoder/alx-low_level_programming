#include "lists.h"
/**
 * print_dlistint - a function that print element in a node
 * @h: pointer to the head or first node in a list
 *
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
