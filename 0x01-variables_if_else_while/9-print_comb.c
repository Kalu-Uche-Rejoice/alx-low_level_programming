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
	char a = ' ';
	char b = ',';

	while (n <= '9')
	{
		putchar(n);
		putchar(b);
		putchar(a);
		n++;
	}
	putchar('\n');
	return (0);
}
