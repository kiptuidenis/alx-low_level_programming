#include <stdio.h>


/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int i;
	char alphabet[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j',
			     'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't'
			     , 'u', 'v', 'w', 'x', 'y', 'z'};
	for (i=26; i >= 0; i--)
	{
		putchar(alphabet[i]);
	}

	putchar('\n');
	return (0);
}
