#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 **_strcat - concantenate two strings
 *@*dest: First string
 *@*src: Second string
 *Return: concatinated string
 */

char *_strcat(char *dest, char *src)
{
	static char cat_str[];
	int i;
	int j = 0;
	int size_1 = *(&dest + 1) - dest;
	int size_2 = *(&src + 1) - src;

	for (i = 0; i <= size_1 - 1; i++ )
	{
		cat_str[i] = dest[i];
	}

	for (i = size_1 - 1; i <= size_2 - 1; i++)
	{
		cat_str[i] = src[j];
		j++;
	}

	return (cat_str);
}
