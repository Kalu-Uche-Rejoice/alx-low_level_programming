#include "main.h"
/**
 * puts_half - prints half of a string
 * Description: uses for and while loops
 * @str: string argument
 * Return: void
 */
void puts_half(char *str)
{
	int i = 0;
	int j = 0;
	int check;

	while (*str != '\0')
	{
		i += 1;
		str++;
	}
	if (i % 2 == 0)
	{
		check = i / 2;
	}
	else 
	{
		check = (i - 1) / 2;
	}
	while (j < i)
	{
		if (str[j] == '\0')
		{
			_putchar('\n');
			break;
		}
		else
		{
			if (j >= check)
			{
				_putchar(*(str + j));
			}
		}
	}
}

