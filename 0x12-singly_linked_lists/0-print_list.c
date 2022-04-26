#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h->next != NULL)
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
