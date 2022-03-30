#include <stdlib.h>
#include "main.h"
/**
 * print_diagsums - print the sum of the diagonals
 * Description: for loop, conditional
 * @a: array
 * @size: array size
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int m, n;
	int i = 0, j = 0, k = 0;
	int count, total = size *size;

	for (count = 0; count < total; count++)
	{
		if (count % size == 0)
		{
			j++;
			n = j - 1;
			m = size - j;
			i += *(a + count + n);
			k += *(a + count + n);
		}
	}
	printf("%d, %d", i, k);
}
