#include "lists.h"

/**
 *print_list - prints elements of a list
 *@h: pointer to the first element of the list
 *
 *Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t num_of_nodes = 0;
	const list_t *temp;

	temp = h;

	while (temp != NULL)
	{
		if (temp->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", temp->len, temp->str);

		num_of_nodes++;
		temp = temp->next;
	}

	return (num_of_nodes);
}
