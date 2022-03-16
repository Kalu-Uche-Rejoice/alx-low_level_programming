# include "main.h"
/**
 * _abs - generates absolute value
 * Description: uses conditional if
 * @n : argument that results absolute
 * Return: absolute value of number
 */
int _abs(int n)
{
	if (n < 0)
	{
		n = n * -1;
		return (n);
	}
	else if (n == 0)
	{
		return (0);
	}
	else
	{
		return (n);
	}
}
