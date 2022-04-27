#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * printint_list - pfunction to print the content of a list
 * @h: pointer to structure describing list node
 * Return: length of list
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (count);
}
