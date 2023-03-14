#include <stdio.h>
#include "main.h"

/**
 *main - main function
 *@argc: argument count
 *@argv: array of arguments
 *Return: 0 if success
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
