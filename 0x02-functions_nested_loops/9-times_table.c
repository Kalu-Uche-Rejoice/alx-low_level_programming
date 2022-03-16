#include <stdio.h>
#include "main.h"
/**
 * times_table - generates times table
 * Description: uses nested for loops
 * Return: void
 */
void times_table(void)
{
	int i = 0;

	while (i <= 9)
	{
		int j = 0;
		
		while (j <= 9)
		{
			int p = i * j;

			if (p > 9)
			{
				_putchar('0' + (p / 10));
				_putchar('0' + (p % 10));
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar('0' + p);
				_putchar(',');
				_putchar(' ');
			}
			j++;
		}
		_putchar('\n');
		i++;
	}
}
