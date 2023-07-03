#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *sum_listint - calculates the sum of all data
 *@head: first element of the list
 *
 *Return: sum of all data, 0 if list is empty
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp;

	if (head == NULL)
		return (sum);

	temp = head;
	while (temp != NULL)
	{
		sum = sum + temp->n;
		temp = temp->next;
	}

	return (sum);
}
