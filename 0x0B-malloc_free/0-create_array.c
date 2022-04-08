#include <stdlib.h>
#include "main.h"
/**
 * create_array - function creates an array of chars,
 * and intializes it with a specific char.
 * @size: size of array
 * @c: initializing character
 * Return: pointer
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int count = 0;

	if (size == 0 )
	{
		return (NULL);
	}
	arr = malloc(sizeof(char) * size);
	if (arr == NULL)
	{
		return (NULL);
	}
	while (count < size)
	{
		*(arr + count) = c;
		i++;
	}
	*(arr + count) = '\0';
	return (arr);
}
