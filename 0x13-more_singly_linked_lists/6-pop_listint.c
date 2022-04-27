#include "list.h"
#include <stdlib.h>
/**
 * pop_listint - function to delete head node of a list
 * @head: pointer to list
 * Return: value of head node
 */
int pop_listint(listint_t **head)
{
	listint_t *ptr;
	int content;

	ptr = *head;
	content = ptr->n;
	*head = ptr->next;
	free(ptr);
	return (content);
}


