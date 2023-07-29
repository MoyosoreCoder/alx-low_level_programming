#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 *add_node - function that adds new node
 *@head: the first node
 *@str: the string inside each nde
 *Return: address of the new element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;
	int length = 0;

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);

	while (str[length])
		length++;

	temp->len = length;
	temp->str = strdup(str);
	temp->next = *head;
	*head = temp;
	return (temp);
}
