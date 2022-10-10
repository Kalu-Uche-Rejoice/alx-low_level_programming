#include <stdio.h>
#include <stdlib.h>
/**
 * main - the program starts here
 * Description: This program prints numbers in base 10
 * Return: 0
 */
int main(void)
{
	int n = '0';
	int count = '0';

	while (n <= '9')
	{
		while (count <= '9')
		{
			if (count != n)
			{
				putchar(n);
				putchar(count);
				putchar(',');
				putchar(' ');
			}
			count ++;
		}
		n++;
	}
	putchar('\n');
	return (0);
}
