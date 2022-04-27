#include "lists.h"
#include <stdlib.h>
/**
 * free_listint - freaas a list_t
 * @head: pointer to first element of list
 * Return: void
 */
void free_listint(listint_t *head)
{
	while (head != NULL)
	{
		free(head->n);
		free(head);
		head = head->next;
	}
}
