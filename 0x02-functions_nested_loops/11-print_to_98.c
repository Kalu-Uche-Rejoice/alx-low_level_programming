#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - computes from a given number to 98
 * Description: use while loop
 * @n: argument representing number
 * Return: void
 */
void print_to_98(int n)
{
	while (n < 98)
	{
		printf("%d, ", n);
		n++;
	}
	while (n > 98)
	{
		printf("%d, ", n);
		n--;
	}
	if (n == 98)
	{
		printf("%d", n);
	}
	printf("\n);
}
