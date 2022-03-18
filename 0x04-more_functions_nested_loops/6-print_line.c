#include "main.h"
#include <stdio.h>
/**
 * print_line - prints a specified number of _ to form a line
 * Description: uses while loops and if conditional
 * @n: specifies number of times _ should be printed
 * Return: void
 */
void print_line(int n)
{
	int i = 0;
	
	if (n > 0)
	{
		while (i < n)
		{
			_putchar('_');
			i++;
		}
		_putchar('\n');
	}
	else
	{
		_puthchar('\n');
	}
}
