#include "lists.h"
#include <stdlib.h>
/**
 * insert_nodeint_at_index - inserts new node at given
 * position
 * @head: pointer to first index
 * @idx: index of insertion
 * @n: number to be inserted
 * Return: pointer to new insertion
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newNode, *temp;
	unsigned counter = 0;

	temp = *head;
	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return(NULL);
	newNode->n = n;
	while (counter < idx-1)
	{
		temp = temp->next;
		counter++;
	}
	newNode->next = temp->next;
	temp->next = newNode;
	return (newNode);
}
