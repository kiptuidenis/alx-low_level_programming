#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 *free_list - frees a list
 *@head: head of the list
 *
 */

void free_list(list_t *head)
{
	list_t *temp;

	if (head == NULL)
		return;
	temp = head;
	while (temp->next)
	{
		temp = temp->next;
		free(head);
		head = temp;
	}
	free(head);
}
