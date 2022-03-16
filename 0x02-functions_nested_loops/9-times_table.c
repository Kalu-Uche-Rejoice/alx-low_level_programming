#include <stdio.h>
#include "main.h"
/**
 * times_table - generates times table
 * Description: uses nested for loops
 * Return: void
 */
void times_table(void)
{
	for (int i = 0; i <= 9; i++)
	{
		for (int j = 0; j <= 9; j++)
		{
			if ( (i * j) > 9)
			{
				_putchar('0' + ((i * j) / 10);
				_putchar('0' + ((i * j) % 10);
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar('0' + (i * j));
				_putchar(',');
				_putchar(' ');
			}
		}
	}
}
