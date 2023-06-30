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


	temp = head;
	while (temp->next)
	{
		if (head == NULL)
		return;

		temp = temp->next;
		free(head);
		head = temp;
	}
}
