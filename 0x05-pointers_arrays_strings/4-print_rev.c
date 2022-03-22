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
	char *t;
	int j = 0;
	int k = i - 1;

	while (*s != '\0')
	{
		i += 1;
		s++;
	}
	while (j < k)
	{
		*t = *(s + j);
		*(s + j) = *(s + k);
		*(s + k) = *t;
		j++, k--;
	}
}
