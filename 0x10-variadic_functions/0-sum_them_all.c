#include<stdarg.h>
/**
 * sum_them_all - returns the sum of all its parameters
 * @n: number of parameters
 * Return: int sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int count;
	int sum = 0;
	va_list args;
	va_start(args, n);

	for(count = 0; count < n; count++)
	{
		sum += va_arg(args, int);
	}
	va_end(args);
	return (sum);
}
