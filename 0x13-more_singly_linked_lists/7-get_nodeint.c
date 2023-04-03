#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node of a listint_t linked list
 * @head: Pointer to the head of the list
 * @index: Index of the node to be retrieved (starting at 0)
 *
 * Return: Pointer to the nth node of the list,
 *         or NULL if the node does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *current_node;

	current_node = head;
	for (i = 0; i < index && current_node != NULL; i++)
		current_node = current_node->next;

	if (i == index && current_node != NULL)
		return (current_node);
	else
		return (NULL);
}
