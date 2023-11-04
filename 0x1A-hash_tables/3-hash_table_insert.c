#include <stdio.h>
#include <stdlib.h>
#include "hash_tables.h"

/**
 * hash_table_set - Adds an element to hash table
 * @ht: hash table
 * @key: key, cannot be empty
 * @value: value to be stored
 * 
 * Return: 1 on success, 0 otherwise
*/

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
    unsigned long int index;
    hash_node_t *new_elem;

    if (ht == NULL || key == NULL || *key == '\0' || value)
    {
        return (0);
    }
    index = key_index(key, ht->size);

    new_elem = malloc(sizeof(hash_node_t));
    if (new_elem == NULL)
    {
        return (0);
    }

    new_elem->key = key;
    new_elem->next = NULL;
    new_elem->value = value;

    if (ht->array[index] == NULL)
    {
        ht->array[index] = new_elem;
        return (1);
    }
    else
    {
        new_elem->next = ht->array[index];
        ht->array[index] = new_elem;
        return (1);
    }


}