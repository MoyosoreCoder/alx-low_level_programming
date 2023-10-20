#include <stdlib.h>
#include "lists.h"
/**
 * free_list - frees a linked list
 * @head: the first pointer to the linked list
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
