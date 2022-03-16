#include "main.h"
/**
 * print_alphabet_x10 - it returns alphabets to main
 * Description: The function uses put char and while loops
 * Retun: void
 */
void print_alphabet_x10(void)
{
	char alpha;
	int n;

	for (n = 0; n < 10; n++)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			_putchar(alpha);
		}
		_putchar('\n');
	}
}
