#include "main.h"
/**
 * _strcat - appends src string to dest string
 * Description: uses while loops to determine string
 * length, uses for loop
 * @dest: destination
 * @src: source string
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int count = 0;
	int n = 0;
	
	while (count >= 0)
	{
		if (dest[count] == '\0')
		{
			break;
		}
		count++;
	}
	while (n >= 0)
	{
		if (src[n] == '\0')
		{
			break;
		}
		n++;
	}
	n = count + n;
	for (int i = 0; i < n && src[i] != '\0'; i++)
	{
		if(dest[count + i] == '\0')
		{
			dest[count + i] = src[i];
		}
	}
	return (dest);
}
