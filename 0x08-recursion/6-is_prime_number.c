#include "main.h"
/**
 * is_prime_number - calls recursive function
 * @n: integer to be tested
 * @g: counter
 * Return: 1 for prime number 0 otherwise
 */
int prime(int n, int g);
int is_prime_number(int n)
{
	if (n == 1)
	{
		return (0);
	}
	return (prime(n, 2));
}

/**
 * prime - checks if a number is a prime number
 * @n: number to be checked
 * @g: counter
 * Return: 1 for prime number 0 otherwise
 */
int prime(int n, int g)
{
	if (n % g == 0)
	{
		if (n == g)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
	return (prime(n, g + 1));
}
