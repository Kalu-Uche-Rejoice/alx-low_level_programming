#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_char - prints char
 *  @valist: valist
 */
void print_char(va_list valist)
{
	printf("%c", va_arg(valist, int));
}

/**
 * print_int - prints int
 * @valist: valist
 */
void print_int(va_list valist)
{
	printf("%d", va_arg(valist, int));
}

/**
 * print_float - prints float
 * @valist: valist
 */
void print_float(va_list valist)
{
	printf("%f", va_arg(valist, double));
}

/**
 * print_string - prints string
 * @valist: valist
 */
void print_string(va_list valist)
{
	char *s;

	s = va_arg(valist, char *);
	if (s == NULL)
	{
		printf("(nil)");	
		return;
	}
	printf("%s", s);
}
/**
 * print_all - function to print anything
 * @format: string to list argument types
 * Return: void
 */
void print_all(const char *const format, ...)
{
	va_list valist;
	char *separator = "";
	int i = 0, j = 0;
	
	data_type select[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_string}
	};
	va_start(valist, format);
	while (format !=NULL && format[j] !='\0')
	{
		while (select[i].letter != '\0')
		{
			if (select[i].letter == format[j])
			{
				printf("%s", separator);
				select[i].func(valist);
				separator = ", ";
			}
			i++;
		}
		j++;
	}
	va_end(valist);
	printf("\n");
}
