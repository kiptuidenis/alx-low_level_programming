#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *print_listint - prints all elements of a list
 *@h: head of the list
 *
 *Return: the number of nodes
 *
 */

size_t print_listint(const listint_t *h)
{
	size_t num_of_nodes = 0;
	const listint_t *temp = h;

	if (h == NULL)
		return (0);
	while (temp !=  NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		num_of_nodes++;
	}

	return (num_of_nodes);
}
