#include <stdio.h>
#include <stdlib.h>

/**
 *main - prints the name of file
 *@argc: argument count
 *@argv: array containing strings passed to the commandline
 *
 *Return: 0 on Success
 */

int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);

	return (0);
}
