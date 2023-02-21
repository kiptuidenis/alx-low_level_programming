#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	print_alphabet();
	return (0);
}

/**
 *print_alphabet - prints alphabets in lower case followed by new line
 */

void print_alphabet(void)
{
	for (int i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}

	putchar('\n');
}
