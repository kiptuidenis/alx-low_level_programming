#include <stdlib.h>
#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: the hash table
 * 
*/

void hash_table_delete(hash_table_t *ht)
{
    hash_node_t *prev;
    hash_node_t *current;
    unsigned long int i;

    for (i = 0; i < ht->size; i++)
    {
        if (ht->array[i] == NULL)
        {
            continue;
        }
        else
        {
            prev = ht->array[i];
            while(prev)
            {
                current = prev->next;
                free(prev);
                prev = current;
            }
            free(prev);
        }
    }
    free(ht->array);
    free(ht);
}