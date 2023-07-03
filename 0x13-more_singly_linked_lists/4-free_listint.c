#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *free_listint - frees a list
 *@head: head of list
 *
 */

void free_listint(listint_t *head)
{
	listint_t *temp = head;

	if (head == NULL)
		return;
	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
