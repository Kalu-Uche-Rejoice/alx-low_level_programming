#include "main.h"
/**
 * print_diagonal - prints a diagonal line to screen
 * Description: uses nested loops and conditionals
 * @n: length of line
 * Return: zero
 */
void print_diagonal(int n)
{
	int i = 0;

	while (i < n)
	{
		int j = n;

		while (j > 0)
		{
			if (j == (n - i))
			{
				_putchar('\\');
			}
			else
			{
				_putchar(' ');
			}
		j++;
		}
		_putchar('\n');
		i++;
	}
}

