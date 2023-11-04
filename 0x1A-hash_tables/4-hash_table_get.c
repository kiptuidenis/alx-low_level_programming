#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

/**
 * hash_table_get - Retrieves a value given a Key
 * @ht: hash table to be searched
 * @key: Key
 * 
 * Return: Value if present else NULL
*/

char *hash_table_get(const hash_table_t *ht, const char *key)
{
    unsigned long int index;
    hash_node_t *temp;

    if (ht == NULL || key == NULL || *key == '\0')
    {
        return (NULL);
    }

    index = key_index((const unsigned char *)key, ht->size);
    temp = ht->array[index];

    while (temp)
    {
        if (strcmp(temp->key, key) == 0)
        {
            return (temp->value);
        }
        temp = temp->next;
    }

    return (NULL);
    
}
