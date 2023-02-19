#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num_comb3[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int i = 0;
	int j;
	int k;

	for (i = 0; i <= 9; i++)
	{
		for (j = i + 1; j <= 9; j++)
		{
			for (k = j + 1; k <= 9; k++)
			{
				putchar(num_comb3[i] + '0');
				putchar(num_comb3[j] + '0');
				putchar(num_comb3[k] + '0');
				if (i < 7)
				{
				putchar(',');
				putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
