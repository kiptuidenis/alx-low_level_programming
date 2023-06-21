#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *print_name - prints a name
 *@name: name to be printed
 *@f: pointer to function
 *
 */

void print_name(char *name, void (*f)(char *))
{
	while (*name++)
		f(name);
}
