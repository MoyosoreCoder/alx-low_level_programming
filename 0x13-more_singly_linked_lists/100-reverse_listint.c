#include "lists.h"

/**
 *reverse_listint - node that reverses a string
 *@head: pointer to the first node in list
 *Return: head after reverse
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}
	*head = prev;

	return (*head);
}
