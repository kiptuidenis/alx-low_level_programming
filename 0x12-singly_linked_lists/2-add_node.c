#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 *add_node - adds node at the beginning of a list
 *@head: pointer to head of list
 *@str: contents of the list
 *
 *Return: address of the new node
 */

list_t *add_node(list_t **head, const char *str)
{
	unsigned int len_str = 0;
	list_t *new_node = malloc(sizeof(list_t));

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
	}
	else
	{
		new_node->next = *head;
		*head = new_node;
	}

	return (new_node);
}
