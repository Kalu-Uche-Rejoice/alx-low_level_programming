#include "main.h"
/**
 * _strlen - computes the length of a string
 * Description: uses while loops to count the number of characters till
 * string escape '\0'
 * @s: string whose characters are to be counted
 * Return: length
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length += 1;
		s++;
	}
	return (length);
}
