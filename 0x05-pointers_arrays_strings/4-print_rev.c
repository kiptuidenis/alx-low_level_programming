#include <stdio.h>
#include "main.h"

/**
 * print_rev - Prints string in reverse
 * @s: string to be printed
 */

void print_rev(char *s)
{
	int str_val = 0;
	int str_len = 0;

	while (s[str_val] != '\0')
	{
		str_len++;
		str_val = str_val + 1;
	}

	while (str_len >= 0)
	{
		_putchar(s[str_len]);
		str_len--;
	}

	_putchar('\n');
}
