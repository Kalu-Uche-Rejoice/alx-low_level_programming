#include "main.h"
/**
 * puts_recursion - function that prints a string
 * Description: uses recursion to print string and loop as well
 * @s: string to be recursed
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}
}
