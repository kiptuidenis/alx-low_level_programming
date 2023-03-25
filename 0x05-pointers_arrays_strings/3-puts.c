#include <stdio.h>
#include "main.h"

/**
 * _puts - prints string to stdout
 * @str: string to be printed
 */

void _puts(char *str)
{
	int str_val = 0;

	while (str[str_val] != '\0')
	{
		_putchar(str[str_val]);
		str_val = str_val + 1;
	}

	_putchar('\n');
}
