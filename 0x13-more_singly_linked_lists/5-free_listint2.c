#include "lists.h"

/**
 *free_listint2 - afunction that frees linked lif
 *@head: the pointer to hard resources
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (*head == NULL)
		return;
	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
	*head = NULL;
}
