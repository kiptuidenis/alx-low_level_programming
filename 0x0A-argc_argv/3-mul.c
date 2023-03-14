#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 *main - main function, multiplies two numbers
 *@argc: argument count
 *@argv: array of arguments
 *Return: 0 if success
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");

		return (1);
	}

	int result;
	int num1;
	int num2;

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	result = num1 * num2;
	printf("%d\n", result);

	return (0);
}
