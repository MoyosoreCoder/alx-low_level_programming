#include  <stdio.h>
#include "lists.h"
/**
 *free_list - function that frees a list_t
 *@head: the pointer to the first node or new node
 */
void free_list(list_t *head)
{
	list_t *current_node;

	while ((current_node = head) != NULL)
	{
		head = head->next;
		free(current_node->str);
		free(current_node);
	}
}
