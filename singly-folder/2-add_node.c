#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include "lists.h"
/**
 * add_node - adds new node
 * @head: pointer to the first node
 * @str: the given string
 *
 * Return: the new added node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	if (str == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);

	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->len = strlen(str);

	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
