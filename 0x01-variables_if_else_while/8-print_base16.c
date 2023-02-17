#include <stdio.h>


/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int i = 0;
	char alphabet[26] = {'0', '1', '2', '3', '4', '5', '6', '7', '8',
			       '9', 'a', 'b', 'c', 'd', 'e', 'f',};
	for (i = 0; i <= 25; i++)
	{
		putchar(alphabet[i]);
	}

	putchar('\n');
	return (0);
}
