#include "main.h"
/**
 * print_alphabet - it returns alphabets to main
 * Description: The function uses put char and while loops
 * Retun: void
 */
void print_alphabet(void)
{
	char alpha = 'a';
	int n = 0;
	while (n < 10)
	{
		while (alpha <= 'z')
		{
			_putchar(alpha);
			alpha++;
		}
		n++;
	}
	_putchar('\n');
}
