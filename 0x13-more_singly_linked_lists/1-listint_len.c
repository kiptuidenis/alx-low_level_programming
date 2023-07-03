#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *listint_len - calculates the number of elements in a list
 *@h: head of the list
 *
 *Return: number of elements in the list
 */

size_t listint_len(const listint_t *h)
{
	size_t num_of_elem = 0;
	const listint_t *temp;

	temp = h;

	if (h == NULL)
		return (0);
	while (temp != NULL)
	{
		num_of_elem++;
		temp = temp->next;
	}

	return (num_of_elem);
}
