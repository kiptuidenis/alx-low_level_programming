#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 *times_table - prints timetable
 */

void jack_bauer(void)
{
	int i;
	int j;
	int k;
	int l;

	for (i = 0; i <= 2; i++)
	{
		for (j = 0; j <=9 ; j++)
		{
			for (k = 0; k <= 5; k++)
			{
				for (l = 0; l <= 9; j++)
				{
					printf("%d", i);
					printf("%d", j);
					printf(":");
					printf("%d", k);
					printf("%d\n", l);
				}
			}
		}
	}
}
