#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *add_nodeint - adds a new node at the beginning of a list
 *@head: pointer to head of list
 *@n: content of list(integer)
 *
 *Return: address of the new element, NULL if failed
 *
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (*head == NULL)
	{
		*head = new_node;
		new_node->next = NULL;
	}
	else
	{
		new_node->next = *head;
		*head = new_node;
	}

	return (*head);
}
