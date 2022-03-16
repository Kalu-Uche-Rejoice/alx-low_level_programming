#include <stdio.h>
/**
 * print_alphabet - it returns alphabets to main
 * Description: The function uses put char and while loops
 * Retun: void
 */
void print_alphabet(void)
{
	char alpha = 'a';
	
	while (alpha <= 'z')
	{
		putchar(alpha);
		alpha++;
	}
}
/**
 * main - program executes here
 * Description: it calls function print_alphabet
 * Return: 0
 */
int main(void)
{
	print_alphabet();
	putchar('\n');
	return (0);
}
