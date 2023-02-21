#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 *times_table - prints timetable
 */

void times_table(void)
{
	int tmp = 1;
	int i;
	int j;

	for (i = 0; i <= 9; i++)
	{
		int num = 0;

		tmp = tmp * i;

		for (j = 0; j <= 8; j++)
		{
			num = tmp * j;
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
