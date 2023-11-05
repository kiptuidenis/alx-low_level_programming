#include "hash_tables.h"
#include <string.h>
#include <stdlib.h>

/**
 * hash_table_set - Add or update an element in the hash table.
 * @ht: The hash table to add/update the key/value pair.
 * @key: The key (cannot be an empty string).
 * @value: The value associated with the key (can be an empty string).
 *
 * Return: 1 if it succeeds, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	char *new_value;
	hash_node_t *new_node, *current;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	current = ht->array[index];
	/**
	 *1. Checks if an index is occupied
	 *2. If it is occupied, it traverses the list cheking if key already
	 *exists
	 *3. If key exists, it updates the value corresponding
	 *to key and returns 1
	 *4. Breaks out of loop if key does not exist
	 */
	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
		{
			new_value = strdup(value);
			if (new_value == NULL)
				return (0);
			free(current->value);
			current->value = new_value;
			return (1);
		}
		current = current->next;
	}

    /*Create a new node to store key value pair*/
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);
	if (set_value(new_node, key, value) == 0)
		return (0);
    /*Insert new node at the beginning of the list*/
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}

/**
 * set_value - copies values to the table
 * @key: Key to be copied
 * @value: Value to be copied
 * @new_node: new node created. Represents the new element to be inserted.
 *
 * Return: 1 on success, 0 otherwise
*/

int set_value(hash_node_t *new_node, const char *key, const char *value)
{
    /*Copies  Key to newly created node(new_node->key)*/
	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (0);
	}

    /*Copies Value to newly created node*/
	new_node->value = strdup(value);
	if (new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node);
		return (0);
	}
	return (1);
}
