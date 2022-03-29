#include "main.h"
/**
 * memset - fills memory with a constant byte
 * Description: uses a while loop
 * @s: pointer to address to be filled
 * @b: pointer with address containing filler
 * @n: number of bytes to be filled
 * Return: *s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int count = 0;

	while(count < n)
	{
		s[count] = b;
		count++;
	}
	return (s);
}
