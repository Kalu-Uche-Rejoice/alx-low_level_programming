#include "main.h"
#include <stdio.h>
/**
 * print_numbers - prints from 0 to 9
 * Description: uses while loop and if statements
 * Return: void
 */
void print_numbers(void)
{
	int i = 0;

	while (i < 10)
	{
		_putchar('0' + i);
		i++;
	}
	_putchar('\n');
}
