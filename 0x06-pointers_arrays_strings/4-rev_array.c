#include "main.h"
/**
 * reverse_array - function reverses
 * content of an array of integers
 * Description: uses while loop
 * @a: point to array to be reversed
 * @n: size of arry to be reversed
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int tmp, i = 0, beg = 0;
	int end = n - 1;

	while (beg < end)
	{
		tmp = *(a + beg);
		*(a + beg) = *(a + end);
		*(a + end) = tmp;
		beg++, end--;
	}
	while (i < n)
	{
		_putchar('0' + *(a + i));
		if (i != (n - 1))
		{
			_putchar(',');
			_putchar(' ');
		}
		i++;
	}
	_putchar('\n');
}
