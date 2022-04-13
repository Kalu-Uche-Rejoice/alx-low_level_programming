#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include "function_pointers.h"
/**
 * int_index - function that searches for integer
 * @array: pointer to array to be searched
 * @size: size of array
 * @cmp: pointer to function to compare values
 * Return: -1 on failure, index in array on success
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0)
	{
		return -1;
	}
	if (array == NULL || cmp != NULL)
	{
		return (-1);
	}
	while(i < size)
	{
		if (cmp(*(array + i)))
		{
			return (i);
		}
		i++;
	}

	return (-1);

}

