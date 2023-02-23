#include <stdio.h>
#include <time.h>
#include "main.h"

/**
 *print_line - print line in terminal
 *@n:number of times character is printed
 */

void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
	}
	
	_putchar('\n');
}
