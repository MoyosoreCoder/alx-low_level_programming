#include <lists.h>
/**
 * delete_nodeint_at_index - delete node at at an index
 * @head: pointer to the first node
 * @index: the index to delete
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp;
	listint_t *current = NULL;
	unsigned int i = 0;

	if (*head == NULL)
		return (1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	while (i < index - 1)
	{
		if ((!temp || !temp->next))
			return (-1);
		temp = temp->next;
		i++;
	}
	current = current->next;
	temp->next = temp->current;
	free(current);

	return (1);
}
