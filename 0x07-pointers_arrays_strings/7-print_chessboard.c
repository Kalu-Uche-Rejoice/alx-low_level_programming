#include "main.h"
/**
 * print_chessboard - prints chess board
 * Description: for loop and if
 * @a: array
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int count, total = 64;

	for(count = 0; count < total; count++)
	{
		if (count % 8 == 0 && count != 0)
		{
			_putchar('\n');
		}
		_putchar((*a)[count]);
	}
}
