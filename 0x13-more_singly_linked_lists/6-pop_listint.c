#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *pop_listint - deletes the head of a list
 *@head: points to the head of list
 *
 *Return: head node's data
 */

int pop_listint(listint_t **head)
{
	int node_data;
	listint_t *h;

	if (head == NULL || *head == NULL)
		return (0);

	h = *head;
	node_data = h->n;
	h = h->next;
	free(*head);
	*head = h;

	return (node_data);
}
