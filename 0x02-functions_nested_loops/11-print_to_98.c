#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 *print_to_98 - prints numbers to 98
 *@n: The character to be checked
 */

void print_to_98(int n)
{
	if (n > 98)
	{
		while (n > 98)
		{
			printf("%d", n);
			putchar(',');
			putchar(' ');

			n--;
		}
	}
	if (n < 98)
	{
		while (n < 98)
		{
			printf("%d", n);
			putchar(',');
			putchar(' ');

			n++;
		}
	}
	if (n == 98)
	{
		printf("%d", n);
		putchar('\n');
	}
}
