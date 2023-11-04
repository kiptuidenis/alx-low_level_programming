#include <stdio.h>
#include <stdlib.h>
#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size of the array
 * 
 * Return: pointer to the newly created array or Null if sth went wrong
*/

hash_table_t *hash_table_create(unsigned long int size)
{
    hash_table_t *new_table = NULL;
    unsigned long int i;

    if (size < 1)
    {
        return (NULL);
    }

    /*Instantiates a new table*/
    new_table = malloc(sizeof(hash_table_t));
    if (new_table == NULL)
    {
        return (NULL);
    }

    /*Creates an array(of size @size) of pointers to first nodes of linked lists*/
    new_table->array = malloc(sizeof(hash_node_t *) * size);
    if (new_table->array)
    {
        return (NULL);
    }

    /*Fills each element of the array with NULL*/
    for(i = 0; i < size; i++)
    {
        new_table->array[i] = NULL;
    }

    new_table->size = size;
    return (new_table);

}
