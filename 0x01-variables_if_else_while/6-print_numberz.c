#include <stdio.h>
#include <stdlib.h>
/**
 * main - the program starts here
 * Description: This program prints numbers in base 10
 * Return: 0
 */
int main(void)
{
	int n = 0;

	while (n < 10)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
