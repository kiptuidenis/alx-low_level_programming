#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - prints contents of a list
 * @h: points to first node
 *
 *Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
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
		printf("%d\n", temp->n);
		temp = temp->next;
	}

	return (num_nodes);
}
