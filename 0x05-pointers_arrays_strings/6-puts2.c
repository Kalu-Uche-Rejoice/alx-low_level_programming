#include "main.h"
/**
 * puts2 - prints every other character from the first
 * @str: argument representing string
 * Description: uses while loops
 * Return: void
 */
void puts2(char*str)
{
	int i = 0;

	while (i >= 0)
	{
		if (str[i] == '\0')
		{
			_putchar('\n');
			break;
		}
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}
}
