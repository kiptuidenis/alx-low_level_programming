#include <stdio.h>
#include <stdlib.h>
#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: pointer to the hash table
 * 
 * Return: Void
*/

void hash_table_print(const hash_table_t *ht)
{
    hash_node_t *temp;
    unsigned long int i;

    if (ht == NULL)
    {
        return;
    }

    printf("{");
    for (i = 0; i < ht->size; i++)
    {
        temp = ht->array[i];
        while (temp)
        {
            printf("'");
            while(*(temp->key) != '\0')
            {
            printf("%c", *(temp->key));
            (temp->key)++;
            }
            printf("': ");


            printf("'");
             while(*(temp->value) != '\0')
            {
            printf("%c", *(temp->value));
            (temp->value)++;
            }
            if (i == ht->size - 1)
            {
                printf("'");
            }
            else
            {
                printf("', ");
            }
            temp = temp->next;
        }
    }
    printf("}\n");
    return;
}
