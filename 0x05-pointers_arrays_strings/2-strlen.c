#include <stdio.h>
#include "main.h"

/**
 * _strlen - Finds lenth of string
 * @s: string whose length is to be determined
 * Return: length of string
 */

int _strlen(char *s)
{
	int str_val = 0;
	int str_len = 0;

	while (s[str_val] != '\0')
	{
		str_len++;
		str_val = str_val + 1;
	}

	return (str_len);
}
