#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len - finds number of elements in a list
 * @h: points to first node
 *
 *Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t num_nodes = 0;
	const dlistint_t *temp = h;

	if (h == NULL)
	{
		return (num_nodes);
	}

	while (temp)
	{
		num_nodes++;
		temp = temp->next;
	}

	return (num_nodes);
}
