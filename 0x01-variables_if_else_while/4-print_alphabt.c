#include <stdio.h>


/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int i = 0;
	char alphabet[26] = {'a', 'b', 'c', 'd', 'f', 'g', 'h', 'i', 'j',
			     'k', 'l', 'm', 'n', 'o', 'p', 'r', 's', 't'
			     , 'u', 'v', 'w', 'x', 'y', 'z'};
	for (i = 0; i <= 25; i++)
	{
		putchar(alphabet[i]);
	}

	putchar('\n');
	return (0);
}
