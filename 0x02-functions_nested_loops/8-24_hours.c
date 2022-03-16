#include <stdio.h>
#include "main.h"
/**
 * jack_bauer - computes every minute of the day
 * Description: uses nested loops
 * Retun: void
 */
void jack_bauer()
{
	int m;
	int h;
		;
	for (h = 0; h < 24; h++)
	{
		for (m = 0; m < 60; m++)
		{
			_putchar('0' + (h / 10));
			_putchar('0' + (h % 10));
			_putchar(':');
			_putchar('0' + (m / 10));
			_putchar('0' + (m % 10));
			_putchar('\n');
		}
	}
}

