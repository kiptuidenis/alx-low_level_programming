#include <stdio.h>
#include "main.h"

/**
 *_strlen_recursion - finds the length of a string
 *@s: string whose length is to be calculated
 *
 *Return: length of the string.
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}

int main(void)
{
	int len = _strlen_recursion("I am done");
	printf("%d\n", len);

	return (0);
}
