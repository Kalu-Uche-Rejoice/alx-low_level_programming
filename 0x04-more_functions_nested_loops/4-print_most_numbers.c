#include "main.h"
#include <stdio.h>
/**
 * print_most_numbers - prints all numbers except two and 4
 * Description: uses while loop and if conditional
 * Return: void
 */
void print_most_numbers(void)
{
	int i = 0;

	while (i < 10)
	{
		if (i != 2 && i != 4)
		{
			_putchar('i');
		}
		i++;
	}
	_putchar('\n');
}
