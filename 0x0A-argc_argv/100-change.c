#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 *main - main function, finds number of change coins
 *@argc: argument count
 *@argv: array of arguments
 *Return: 0 if success
 */

int main(int argc, char *argv[])
{
	int i;
	int change = 0;
	int coins[5] = {25, 10, 5, 2, 1}; 
	int amt_to_change;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	amt_to_change = atoi(argv[1]);

	if (amt_to_change <= 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; i <= 4; i++)
	{
		while (amt_to_change >= coins[i])
		{
			amt_to_change = amt_to_change - coins[i];
			change++;
		}
	}

	printf("%d\n", change);

	return (0);
}
