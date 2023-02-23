#include <stdio.h>
#include <time.h>
#include "main.h"

/**
 *print_line - print line in terminal
 *@n:number of times character is printed
 */

void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}

	while (n > 0)
	{
		_putchar('_');

		n--;
	}

	_putchar('\n');
}
