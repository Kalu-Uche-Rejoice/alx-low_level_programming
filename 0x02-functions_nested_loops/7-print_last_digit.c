#include "main.h"
/**
 * print_last_digit - computes last digit of a number
 * Description: uses modulus of 10 logic
 * @n: argumen containing number
 * Return: x
 */
int print_last_digit(int n)
{
	if (n < 0)
	{
		n = n * -1;
	}
	_putchar('0' + n % 10);
	return (n % 10);
}
