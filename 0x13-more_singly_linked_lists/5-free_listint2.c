#include "lists.h"
#include <stdlib.h>
/**
 * free_listint - freaas a list_t
 * @head: pointer to first element of list
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *ptr;
	while (*head != NULL)
	{
		ptr = *head;
		*head = ptr->next;
		free(ptr);
	}
}
