#include "lists.h"
/**
 * free_listint2 - frees listint_t list
 * @head: pointer to the contents of the list
 *
 * Return: NULL for pointer head
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;
	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
	*head = NULL;
}
