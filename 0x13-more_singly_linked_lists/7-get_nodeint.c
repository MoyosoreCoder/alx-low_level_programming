#include "lists.h"
/**
 *get_nodeint_at_index - a function that return the nth node
 *@head: pointer to the first node
 *@index: nth unknown index
 *Return: temp if avaialble or NULL if empty
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	listint_t *temp = head;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}

	return (temp ? temp : NULL);
}
