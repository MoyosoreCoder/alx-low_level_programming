#include "lists.h"

/**
 *pop_listint - a function that deletes the head node
 *@head: the pointer to the first node
 *Return: the num after freeing head
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}
