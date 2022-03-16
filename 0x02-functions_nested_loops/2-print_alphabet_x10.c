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
 * Description: it calls function print_alphabet 10 times
 * Return: 0
 */
int main(void)
{
	int n = 0;
	while (n < 10 )
	{
		print_alphabet();
		putchar('\n');
		n++;
	}
	return (0);
}
