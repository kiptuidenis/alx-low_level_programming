#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main (void)
{
char char_size;
int int_size;
long int long_int;
long long int long2_int;
float float_size;

printf("Size of a char: %d byte(s)\n", (int)sizeof(char_size));
printf("Size of an int: %d byte(s)\n", (int)sizeof(int_size));
printf("Size of a long int: %d byte(s)\n", (int)sizeof(long_int));
printf("Size of a long long int: %d byte(s)\n", (int)sizeof(long2_int));
printf("Size of a float: %d byte(s)\n", (int)sizeof(float_size));

return (0);
}
