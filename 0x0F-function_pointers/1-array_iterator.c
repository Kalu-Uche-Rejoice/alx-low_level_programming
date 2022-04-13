#include <stdlib.h>
#include<stdio.h>
#include <stddef.h>
#include "function_pointers.h"
/**
 * array_iterator - function that executes a
 * given function on each array element
 * @array: array to be worked on
 * @size: size of array
 * @action: function to be executed
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int));
{
	int i = 0;

	if (array != NULL && action != NULL)
	{
		while (i < size)
		{
			action(*(array + i));
			i++;
		}
	}
}
