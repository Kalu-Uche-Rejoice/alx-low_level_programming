#include <stdlib.h>
#include <stdio.h>
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
	int i = 0, j;

	if (size <= 0)
		return 1;
	if (array != NULL && cmp != NULL)
	{
		while(i < size)
		{
			j = cmp(*(array + i));
			if (j != 0)
				return (j);
			else
				return (-1);
			i++;
		}
	}
	else
		return (-1);
	return (-1);
}

