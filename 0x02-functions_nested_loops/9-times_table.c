#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 *times_table - prints timetable
 */

void times_table(void)
{
	int i;
	int j;

	for (i = 0; i <= 9; i++)
	{
		int num;

		for (j = 0; j <= 8; j++)
		{
			num = i * j;
			printf("%d", num);

			if (j < 8)
			{
				putchar(',');
				putchar(' ');
			}
		}

		putchar('\n');
	}
}
