#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - Finds the length of a string.
 * @str: The string to be measured.
 *
 * Return: The length of the string.
 */
int _strlen(char *str)
{
	int len = 0;

	while (*str++)
		len++;

	return (len);
}

/**
 *str_concat - concatenates two strings
 *@s1: string 1
 *@s2: string 2
 *
 *Return: pointer to concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int size1, size2, tot_size, i;
	char *concat;
	int j = 0;

	if (s1 == NULL)
	{
		s1 = (char *)malloc(sizeof(char) + 1);
		s1[1] = '\0';
	}
	if (s2 == NULL)
	{
		s2 = (char *)malloc(sizeof(char) + 1);
		s2[1] = '\0';
	}
	size1 = _strlen(s1);
	size2 = _strlen(s2);

	if (n >= size2)
	{
		tot_size = size1 + size2 + 1;
	}
	if (n < size2)
	{
		tot_size = size1 + n + 1;
	}

	concat = malloc(tot_size * sizeof(char));
	if (concat == NULL)
		return (NULL);

	for (i = 0; i <= tot_size - 1; i++)
	{
		if (i == tot_size - 1)
			concat[i] = '\0';

		if (i >= size1 && i < tot_size - 1)
		{
			concat[i] = s2[j];
			j++;
		}
		if (i < size1)
			concat[i] = s1[i];
	}

	return (concat);

}
