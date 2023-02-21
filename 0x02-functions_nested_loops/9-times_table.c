#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 *times_table - prints timetable
 */

void times_table(void)
{
	int tmp = 0;
	int i;
	int j;

	for (i = 0; i <= 9; i++)
	{
		int num = 0;
		int num2;

		printf("%d", num);
		putchar(',');
		putchar(' ');

		for (j = 0; j <= 8; j++)
		{
			if (i != )
				tmp++;
			
			num2 = num + tmp;

			printf("%d", num2);

			if (j < 8)
			{
				putchar(',');
				putchar(' ');
			}
		}

		putchar('\n');
	}
}
