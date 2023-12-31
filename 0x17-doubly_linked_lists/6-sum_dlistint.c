#include "lists.h"
/**
 * sum_dlistint - a function that returns the sum of all the data (n)
 * @head: the first pointer to a linked list
 *
 * Return: the sum of all nodes
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
