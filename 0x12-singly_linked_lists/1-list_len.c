#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * list_len - function to return the length of a list
 * @h: pointer to structure describing list node
 * Return: length of list
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
