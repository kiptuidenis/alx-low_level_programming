#include <stdio.h>
#include "main.h"
#include "main.c"

/**
 *_print_rev_recursion - prints string in reverse
 *@s: string to be printed
 *
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;
	_print_rev_recursion(s + 1);

	_putchar(*s);
}

int main(void)
{
	_print_rev_recursion("blue");

	return (0);
}
