#include <stdio.h>


/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int i = 0;
	char alphabet[52] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j',
			     'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't'
			     , 'u', 'v', 'w', 'x', 'y', 'z', 'A', 'B', 'C',
			     'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L',
			     'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U',
			     'V', 'W', 'X', 'Y', 'Z'};
	for (i = 0; i <= 51; i++)
	{
		putchar(alphabet[i]);
	}

	putchar('\n');
	return (0);
}
