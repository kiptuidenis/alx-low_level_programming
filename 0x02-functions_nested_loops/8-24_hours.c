#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "main.h"

/**
 *jack_bauer - prints all minutes of the day
 */

void jack_bauer(void)
{
	int hours;
	int minute;

	for (hours = 0; hours <= 23; hours++)
	{
		for (minute = 0; minute <= 59; minute++)
		{
			int hour_tens = hours / 10;
			int hour_ones = hours % 10;

			int min_tens = minute / 10;
			int min_ones = minute % 10;

			_putchar(hour_tens + '0');
			_putchar(hour_ones + '0');
			_putchar(':');
			_putchar(min_tens + '0');
			_putchar(min_ones + '0');
			_putchar('\n');
		}
	}
}
