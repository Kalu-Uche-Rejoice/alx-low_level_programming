#include "main.h"
/**
 * _isalpha - function to detect an ASCII letter
 * Description: uses conditional statements
 * @c: argument to be tested
 * Return: integer
 */
int _isalpha(int c)
{
	if ((c >= 97) & (c <= 122))
	{
		return (1);
	}
	if ((c >= 65) & (c < 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
