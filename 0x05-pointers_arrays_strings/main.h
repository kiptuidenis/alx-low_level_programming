void reset_to_98(int *n);
int main(void);
int _putchar(char c);
void swap_int(int *a, int *b);
int _strlen(char *s);
void _puts(char *str);


#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
