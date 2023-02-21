#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 *print_alphabet_x10 - prints lower case 10 times followed by new line
 */

void print_alphabet_x10(void)
{
	int i;
	int j;
	int tmp;

	for (j = 0; j <= 9; j++)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
		putchar(i);
		}
	putchar('\n');
	}
}
