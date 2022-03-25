#include "main.h";
/**
 * _strncpy - function copies a string
 * Description: simmilar to strncpy built C function, uses for loops
 * @dest: destination pointer
 * @src: source pointer
 * @n: number of characters to be copied
 * Return: destination pointer
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return dest;
}
