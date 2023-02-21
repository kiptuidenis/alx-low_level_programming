#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 *print_alphabet - prints alphabets in lower case followed by new line
 */

void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}

	putchar('\n');
}
