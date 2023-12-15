#include "lists.h"
/**
 * add_dnodeint - double linked list function that adds new node
 * @head: first pointer to first node
 * @n: the n value in the new node to be added
 * Return: the new added node with value n to the list
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;

	if (*head != NULL)
		(*head)->prev = new_node;
	*head = new_node;

	return (new_node);
}
