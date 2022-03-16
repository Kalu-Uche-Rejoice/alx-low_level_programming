#include <stdio.h>
/**
 * _islower - function to detect case of ASCII letter
 * Description: uses conditional statements
 * Return: integer
 * @c: argument to check
 */
int _islower(int c)
{
	if ((c >= 97) & (c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
