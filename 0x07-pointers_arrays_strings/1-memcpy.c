#include "main.h"
/**
 * memcpy - copies memory from src to dest
 * Description: uses a while loop
 * @dest: pointer to address to be filled
 * @src: pointer with address containing filler
 * @n: number of bytes to be filled
 * Return: *dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int count = 0;

	while(count < n)
	{
		dest[count] = src[count];
		count++;
	}
	return (dest);
}
