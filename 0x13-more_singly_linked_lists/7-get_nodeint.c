#include "lists.h"
#include <stdlib.h>
/**
 * get_nodeint_at_index - function to get the nth node of a list
 * @head: pointer to first node
 * @index: number of node to retrieve
 * Return: pointer to nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int counter;

	if (head == NULL)
		return (NULL);
	while (counter < index)
	{
		head = head->next;
		counter++;
	}
	return (head);
}
