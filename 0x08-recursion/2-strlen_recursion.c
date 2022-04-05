#include "main.h"
/**
 * _strlen_recursion - returns the length of a string
 * Description: recursion, conditional
 * @s: string whose length is to be computed
 * Return: int
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	else
	{
		return (0);
	}
}
