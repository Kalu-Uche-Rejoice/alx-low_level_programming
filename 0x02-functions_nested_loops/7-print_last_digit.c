#include "main.h"
/**
 * print_last_digit - computes last digit of a number
 * Description: uses modulus of 10 logic
 * @n: argumen containing number
 * Return: x
 */
int print_last_digit(int n)
{
	n = n % 10;
	_putchar(n);
	return (n);
}
