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
		putchar(alphabet);
		alphabet++;
		if ((alphabet == 'q') || (alphabet == 'e'))
		{
			break;
		}
	}
	putchar('\n');
	return (0);
}
