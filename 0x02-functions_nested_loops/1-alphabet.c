#include "main.h"
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
		_putchar(alpha);
		alpha++;
	}
	_putchar('\n');
}
