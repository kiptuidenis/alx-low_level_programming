#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *insert_nodeint_at_index - inserts a new node at a given position
 *@head: points to head of the list
 *@idx: index where the new node should be added
 *@n: contents of new node
 *
 *Return: address of the new node, NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node;
	listint_t *temp = *head;
	unsigned int i = 0;
	unsigned int list_size;

	list_size = size_listint(*head);
	if (idx > list_size)
	{
		(void)new_node;
		return (NULL);
	}

	if (idx == 0)
	{
		new_node = add_node_head(head, n);
		return (new_node);
	}

	if (idx == list_size)
	{
		new_node = add_node_end(head, n);
		return (new_node);
	}

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	while (i < idx - 1)
	{
		temp = temp->next;
		i++;
	}

	new_node->next = temp->next;
	temp->next = new_node;

	return (new_node);
}

/**
 *size_listint - prints all elements of a list
 *@h: head of the list
 *
 *Return: the number of nodes
 *
 */

unsigned int size_listint(listint_t *h)
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

/**
 *add_node_head - adds a new node at the beginning of a list
 *@head: pointer to head of list
 *@n: content of list(integer)
 *
 *Return: address of the new element, NULL if failed
 *
 */

listint_t *add_node_head(listint_t **head, int n)
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

/**
 *add_node_end - adds a node at the end of a list
 *@head: pointer to head of list
 *@n: content of list
 *
 *Return: address of the new element, Null if it failed
 */

listint_t *add_node_end(listint_t **head, int n)
{
	listint_t *temp;
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	temp = *head;
	new_node->next = NULL;

	if (*head ==  NULL)
	{
		*head = new_node;
		return (new_node);
	}

	while (temp->next != NULL)
		temp = temp->next;

	temp->next = new_node;

	return (new_node);
}
