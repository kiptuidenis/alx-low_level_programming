#include <stdio.h>
#include <stdlib.h>

/**
 *main - prints  arguments
 *@argc: argument count
 *@argv: strings passed
 *
 *Return: 0 on Success
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
