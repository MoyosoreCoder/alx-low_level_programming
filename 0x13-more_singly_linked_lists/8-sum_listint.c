#include "lists.h"
/**
 * sum_listint - function that add all nodes
 * @head: pointer to the first node
 *
 * Return: sum of all nodes
 */
int sum_listint(listint_t *head)
{
	int add = 0;
	listint_t *temp = head;

	while (temp)
	{
		add += temp->n;
		temp = temp->next;
	}
	return (add);
}
