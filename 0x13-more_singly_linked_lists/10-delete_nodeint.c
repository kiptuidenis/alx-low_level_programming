#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *delete_nodeint_at_index - deletes node at specific index
 *@head: pointer to head of list
 *@index: node to be deleted
 *
 *Return: 1 if success, -1 otherwise
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current_node = *head;
	listint_t *next_node = *head;
	unsigned int list_size;
	unsigned int i = 0;

	list_size = size_list(*head);
	if (list_size == 0 || index >= list_size)
		return (-1);

	if (index == 0)
	{
		current_node = current_node->next;
		free(*head);
		*head = current_node;
		return (1);
	}

	while (i < index - 1)
	{
		current_node = current_node->next;
		i++;
	}

	next_node = current_node->next;
	current_node->next = next_node->next;
	free(next_node);

	return (1);
}

/**
 *size_list - prints all elements of a list
 *@h: head of the list
 *
 *Return: the number of nodes
 *
 */

unsigned int size_list(listint_t *h)
{
	unsigned int num_of_nodes = 0;
	listint_t *temp = h;

	if (h == NULL)
		return (0);
	while (temp !=  NULL)
	{
		temp = temp->next;
		num_of_nodes++;
	}

	return (num_of_nodes);
}

