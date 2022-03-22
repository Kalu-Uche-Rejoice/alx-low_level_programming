#include <stdio.h>
#include "main.h"
/**
 * print_array - prints n values of an array
 * Description: uses while loop
 * @a: array argument
 * @n: counter argument
 * Return: void
 */
void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		printf("%d", a[i]);
		if (i != (n - 1))
		{
			printf(", ");
		}
		i++;
	}
	printf("\n");
}

