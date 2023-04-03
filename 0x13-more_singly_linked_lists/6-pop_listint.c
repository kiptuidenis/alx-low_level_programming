#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t linked list
 *               and returns the head node's data (n)
 * @head: Pointer to a pointer to the head of the list to be modified
 *
 * Return: The data of the head node that was deleted,
 *         or 0 if the list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *temp_node;
	int data;

	if (head == NULL || *head == NULL)
		return (0);

	temp_node = *head;
	data = temp_node->n;
	*head = (*head)->next;
	free(temp_node);

	return (data);
}
