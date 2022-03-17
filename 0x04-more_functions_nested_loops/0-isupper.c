#include <stdio.h>
/**
 * _isupper - function to detect upper case of ASCII letter
 * Description: uses conditional statements
 * Return: integer
 * @c: argument to check
 */
int _isupper(int c)
{
	if ((c >= 65) & (c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
