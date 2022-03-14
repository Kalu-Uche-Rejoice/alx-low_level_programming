#include <stdio.h>
#include <stdlib.h>
/**
 * main - this is where the program starts
 * Description: The program prints the alphabet excluding e and q
 * Return: 0
 */
int main(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		if ((alphabet != 'q') && (alphabet != 'e'))
		{
			putchar(alphabet);
		}
		alphabet++;
	}
	putchar('\n');
	return (0);
}
