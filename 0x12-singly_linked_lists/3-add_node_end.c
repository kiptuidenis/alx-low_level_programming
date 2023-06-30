#include "lists.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 *add_node_end - adds a node at the end of list
 *@head: pointer to head of the list
 *@str: contents of the list
 *
 *Return: address of the new element, NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int len_str = 0;
	list_t *new_node = malloc(sizeof(list_t));
	list_t *temp;

	if (new_node == NULL)
		return (NULL);

	len_str = strlen(str);
	new_node->str = strdup(str);

	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->len = len_str;

	if (*head == NULL)
	{
		new_node->next = NULL;
		*head = new_node;
		temp = new_node;
	}

	else
	{
		temp->next = new_node;
		temp = new_node;
		new_node->next = NULL;
	}

	return (new_node);

}
