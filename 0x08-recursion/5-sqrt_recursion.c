#include "main.h"
/**
 * _sqrt - finds the square root of a number
 * @n: number to be square root
 * @i: counter
 * Return: square root for numbers with a natural root
 */
int _sqrt(int n, int i)
{
	if ((n / i) == i)
	{
		return (i);
	}
	else if ((n / i) == 1)
	{
		return (-1);
	}
	else
	{
		return (1 * _sqrt(n, i + 1));
	}
}
/**
 * _sqrt_recursion - helps us add a counter
 * @n: number to find its square root
 * Return: sqrt
 */
int _sqrt_recursion(int n)
{
	int x;

	if (n < 0)
	{
		return (-1);
	}
	x = _sqrt(n, 1);
	return (x);
}
