#include <stdio.h>
#include <stdlib.h>
#include "hash_tables.h"

/**
 * key_index - Gives index of a key
 * @key: String to converted to index
 * @size: Size of the array
 *
 * Return: Index at which key/value pair should be stored in the array
*/

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2(key);

	/*Normalizes the index value to be within the size of array/table*/
	index = index % size;

	return (index);
}
