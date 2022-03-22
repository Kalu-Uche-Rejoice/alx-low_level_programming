#include "main.h"
/**
 * print_rev - prints reverse of a string input
 * Description: uses while loops
 * @s: string to reverse
 * Return: void
 */
void print_rev(char *s)
{
	int i = 0;
	int k;

	while (*s != '\0')
	{
		i += 1;
		s++;
	}
	for (i--; i >= 0; i--)
	{
		char temp = *(s + i);
		
		_putchar(temp);
	}
	_putchar('\n');
}
