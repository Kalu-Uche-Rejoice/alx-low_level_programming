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
	char alphabets = 'A';

	while (alphabet <= 'z')
	{
		putchar(alphabet);
		alphabet++;
	}
	while (alphabets <= 'Z')
	{
		putchar(alphabets);
		alphabets++;
	}
	putchar('\n');
	return (0);
}
