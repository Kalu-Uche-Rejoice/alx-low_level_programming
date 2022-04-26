#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_list - pfunction to print the content of a list
 * @h: pointer to structure describing list node
 * Return: length of list
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		if ((h->str) == NULL)
		{
			printf("[0] (nil)");
		}
		else
		{
			printf("[%d] %s", h->len, h->str);
		}

		h = h->next;
	}
	return (count);
}
