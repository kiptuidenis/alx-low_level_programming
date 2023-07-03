#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 *free_listint2 - frees a list
 *@head: points to head of list
 *
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;
	listint_t *h;

	if (*head == NULL || head == NULL)
	{
		return;
	}
	h = *head;

	while (h != NULL)
	{
		temp = h->next;
		free(h);
		h = temp;
	}

	*head = NULL;
}
