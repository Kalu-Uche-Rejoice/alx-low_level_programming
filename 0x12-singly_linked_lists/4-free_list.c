#include "lists.h"
#include <stdlib.h>
/**
 * free_list - freaas a list_t
 * @head: pointer to first element of list
 * Return: void
 */
void free_list(list_t *head)
{
	while (head != NULL)
	{
		free(head->str);
		free(head);
		head = head->next;
	}
}
