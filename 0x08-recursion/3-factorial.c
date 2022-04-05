#include "main.h"
/**
 * factorial - returns factorial of a given number
 * Description: conditional and recursion
 * @n: number for factorial
 * Return: factorial of n
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else 
	{
		return n * factorial(n - 1);
	}
}
