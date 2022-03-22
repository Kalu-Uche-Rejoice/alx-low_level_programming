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

	while (s != '\0')
	{
		i += 1;
		s++;
	}
	char temp;
	int j = 0;
	int k = i - 1;
	
	while (j < k)
	{
		temp = *(s + j);
		*(s + j) = *(s + k);
		*(s + k) = temp;
		j++, k--;
	}
}	

