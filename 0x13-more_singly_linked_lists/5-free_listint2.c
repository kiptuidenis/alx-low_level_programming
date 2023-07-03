#include <stdlib.h>
#include <string.h>
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
	listint_t *h = *head;

	if (*head == NULL)
	{
		*head = NULL;
		return;
	}
	temp = *head;

	while (h != NULL)
	{
		temp = h->next;
		free(h);
		h = temp;
	}

	*head = NULL;
}
