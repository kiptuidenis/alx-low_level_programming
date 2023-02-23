#include <stdio.h>
#include <time.h>
#include "main.h"

/**
 *print_diagonal - print diagonal line in terminal
 *@n:number of times character is printed
 */

void print_diagonal(int n)
{
	int i;
	int j;

	if (n <= 0)
	{
		_putchar('\n');

		return;
	}

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}

		_putchar('\\');
		_putchar('\n');
	}
}
