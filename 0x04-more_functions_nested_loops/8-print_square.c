#include "main.h"
/**
 * print_square - prints equal row by columns of #
 * Description: uses nested for loops
 * @size: tells number of rows or columns to print
 * Return: void
 */
void print_square(int size)
{
	int i = 0;

	if (size > 0)
	{
		while (i < size)
		{
			int j = 0;

			while (j < size)
			{
				_putchar('#');
				j++;
			}
			_putchar('\n');
			i++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
