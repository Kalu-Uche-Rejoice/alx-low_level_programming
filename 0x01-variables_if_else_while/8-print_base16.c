#include <stdio.h>
#include <stdlib.h>
/**
 * main - the program starts here
 * Description: This program prints numbers in base 16
 * Return: 0
 */
int main(void)
{
	int n = '0';
	char c = 'a';

	while (n <= '9')
	{
		putchar(n);
		n++;
	}
	while (c <= 'z')
	{
		putchar(c);
		if (c == 'f')
		{
			break;
		}
		c++;
	}
	putchar('\n');
	return (0);
}
