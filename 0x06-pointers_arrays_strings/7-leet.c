#include <stdio.h>
#include "main.h"

/**
 *leet - encodes letters to numbers
 *@str: The string to be encoded
 *
 *Return: encoded string
 */

char *leet(char *str)
{
	int str_len = 0;

	while (str[str_len] != '\0')
	{
		str_len++;
	}

	char *encoded_str = (char *)malloc(sizeof(char) * (str_len + 1));

	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] == 'a' || str[i] == 'A')
			encoded_str[i] = '4';
		else if (str[i] == 'e' || str[i] == 'E')
			encoded_str[i] = '3';
		else if (str[i] == 'o' || str[i] == 'O')
			encoded_str[i] = '0';
		else if (str[i] == 't' || str[i] == 'T')
			encoded_str[i] = '7';
		else if (str[i] == 'l' || str[i] == 'L')
			encoded_str[i] = '1';
		else
			encoded_str[i] = str[i];
		i++;

	}

	encoded_str[i] = '\0';

	return (encoded_str);
}
