#include "lists.h"
/**
 * free_dlistint - function that frees a dlistint_t list
 * @head: the first pointer to the dlistint_t
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	dlistint_t *next_node;

	while (current != NULL)
	{
		next_node = current->next;
		free(current);
		current = next_node;
	}
}
