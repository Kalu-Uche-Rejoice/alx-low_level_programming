#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers - function prints numbers then new line
 * @separator: string to separate numbers
 * @n: number of numbers
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int count;
	va_list args;
	int num;

	va_start(args, n);
	
	for (count = 0; count < n; count++)
	{
		num = va_arg(args, int);
		printf("%d", num);
		if (count < (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(args);
}
