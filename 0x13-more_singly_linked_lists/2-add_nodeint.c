#include "lists.h"
/**
 * add_nodeint - adds new node at the beginning
 * @n: the parameter n in the added new node
 * @head: the pointer to first node
 * Return: the new added nodes
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (!new)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
