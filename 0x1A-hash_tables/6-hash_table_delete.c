#include <stdlib.h>
#include "hash_tables.h"
#include <stdio.h>

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

    if (ht == NULL)
        return;

    /*Goes through all buckets in the table*/
    for (i = 0; i < ht->size; i++)
    {
        /*Jumps an empty bucket*/
        if (ht->array[i] == NULL)
        {
            continue;
        }
        else
        {
            prev = ht->array[i];

            /*Deletes the linked list associated with ith bucket*/
            while(prev)
            {
                current = prev->next;
                free(prev->key);
                free(prev->value);
                free(prev);
                prev = current;
            }
        }
    }
    /*Delete the entire hash table*/
    free(ht->array);
    free(ht);
}
