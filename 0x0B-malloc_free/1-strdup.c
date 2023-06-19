#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strcopy - Copies a string pointed to by src, including the
 *            terminating null byte, to a buffer pointed to by dest.
 * @dest: The buffer storing the string copy.
 * @src: The source string.
 *
 * Return: The pointer to dest.
 */
char *_strcopy(char *dest, char *src)
{
	int index = 0;

	for (index = 0; src[index]; index++)
		dest[index] = src[index];

	dest[index] = '\0';

	return (dest);
}

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
 *_strdup -  allocates space containing a copy of the
 *string given as a parameter.
 *
 *@str: string given
 *
 *Return: pointer to copy of string
 */

char *_strdup(char *str)
{
	char *copy;
	int size;

	if (str == NULL)
		return (NULL);

	size = _strlen(str) + 1;
	copy  = malloc(size * sizeof(char));

	if (copy == NULL)
		return (NULL);

	_strcopy(copy, str);

	return (copy);
}
