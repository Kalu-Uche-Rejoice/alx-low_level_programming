#include <stdio.h>
#include <stdlib.h>
/**
 * main - this is where the program starts
 * Description: The program prints the alphabet
 * Return: 0
 */
int main(void)
{
	char alphabet = 'z';

	while (alphabet >= 'a')
	{
		putchar(alphabet);
		alphabet--;
	}
	putchar('\n');
	return (0);
}
