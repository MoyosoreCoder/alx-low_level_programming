#include "lists.h"
/**
 * pop_listint - function that deletes node
 * @head: pointer to the first node in list
 *
 * Return: the 0 if list is empty
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
