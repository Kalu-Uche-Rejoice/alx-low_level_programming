#include "main.h"
/**
 * rev_string - reverses a string
 * Description: uses while loops
 * @s: argument to be reversed
 * Return: void
 */
void rev_string(char *s)
{
	int i = 0;
	char temp;
	int j = i - 1;
	int k = 0;

	while (*s != '\0')
	{
		i += 1;
		s++;
	}
	while (k < j)
	{
		temp = *(s + k);
		*(s + k) = *(s + j);
		*(s + j) = temp;
		k++, j--;
	}
}		
