#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <stddef.h>


/**
 *_strdup - duplicates a given string
 *@str: size of array
 *Return: A pointer to the string
 */

char *_strdup(char *str)
{
	int str_val = 0;
	int str_len = 0;
	char *str_copy;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[str_val] != '\0')
	{
		str_len++;
		str_val = str_val + 1;
	}

	str_copy = (char *) malloc(str_len * sizeof(char));

	for (str_val = 0; str_val < str_len; str_val++)
	{
		str_copy[str_val] = str[str_val];
	}

	return (str_copy);
}
