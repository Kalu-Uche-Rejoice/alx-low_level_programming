#include <stdio.h>
#include <stdlib.h>
/**
 * main - this is where the program starts
 * Description: The program prints the alphabet
 * Return: 0
 */
int main(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		putchar(alphabet);
		alphabet++;
	}
	putchar('\n');
	return (0);
}
