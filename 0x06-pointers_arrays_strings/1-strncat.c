#include "main.h"
/**
 * _strncat - appends a portion of src
 * string to dest string
 * Description: uses while loops to determine string
 * length, uses for loop
 * @dest: destination
 * @src: source string
 * @n: number of characters to copy from src
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int count = 0;
	int i = 0;
	
	while (count >= 0)
	{
		if (dest[count] == '\0')
		{
			break;
		}
		count++;
	}
	for (; i < n && src[i] != '\0'; i++)
	{
		if(dest[count + i] == '\0')
		{
			dest[count + i] = src[i];
		}
	}
	return (dest);
}
