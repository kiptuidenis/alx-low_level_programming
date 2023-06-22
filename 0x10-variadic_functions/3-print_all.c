#include <stdio.h>
#include <stdarg.h>

/**
 *print_all - prints all arguments
 *@format: string of all format types to be printed
 *
 */

void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0;
	char c;
	int num;
	float f;
	char *s;

	va_start(args, format);

	while (format[i] != '\0')
	{
		if (format[i] == 'c')
		{
			c = (char)va_arg(args, int);
			printf("%c", c);
		}
		else if (format[i] == 'i')
		{
			num = va_arg(args, int);
			printf("%d", num);
		}
		else if (format[i] == 'f')
		{
			f = (float)va_arg(args, double);
			printf("%f", f);
		}
		else if (format[i] == 's')
		{
			s = va_arg(args, char *);

			if (s == NULL)
			{
				printf("(nil)");
			}
			else
			{
				printf("%s", s);
			}
		}
		if (format[i + 1] != '\0' && (format[i] == 'c' ||
					      format[i] == 'i'
		    || format[i] == 'f' || format[i] == 's'))
		{
			printf(", ");
		}

		i++;
	}

	va_end(args);
	printf("\n");
}
