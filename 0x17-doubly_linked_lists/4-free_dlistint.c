#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_dlistint - deletes entire list
 * @head: points to first node
 *
 *Return: void
 */
void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
	{
		return;
	}

	else
	{
		while (head->next)
		{
			head = head->next;
			free(head->prev);
		}

		free(head);
	}
}
