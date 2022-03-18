#include "main.h"
#include <stdio.h>
/**
 * more_numbers - print number 0 to 14 ten times
 * Description: uses nested while loops
 * Return: void
 */
void more_numbers(void)
{
	int i = 0;

	while (i < 10)
	{
		int j = 0;
		
		while (j <= 14)
		{
			if (j > 9)
			{
				_putchar('0' + (j / 10));
				_putchar('0' + (j % 10));
			}
			else
			{
				_putchar('0' + j);
			}
			j++;
		}
		_putchar('\n');
		i++;
	}
}
