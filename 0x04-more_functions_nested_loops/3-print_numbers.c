#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 *print_numbers - print numbers 0-9
 *Return: 0
 */

void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		_putchar(i + '0');
	}

	_putchat('\n');
}
