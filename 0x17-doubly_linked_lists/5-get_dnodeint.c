#include "lists.h"
/**
 * get_dnodeint_at_index - a function that returns the nth node of a dlistint_t
 * @head: a pointer to a dlistint_t linked list
 * @index: index to return the data at the end
 * Return: the node does not exist, return NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;

	unsigned int count = 0;

	while (current != NULL)
	{
		if (count == index)
		{
			return (current);
		}
		current = current->next;
		count++;
	}
	return (NULL);
}
