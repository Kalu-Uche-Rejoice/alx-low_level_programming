#include "main.h"
/**
 * _puts - function to print a string then a new line
 * Desctription: uses a while loop
 * @str: string to be printed
 * Return: void
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
