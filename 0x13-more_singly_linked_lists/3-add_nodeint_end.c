#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_nodeint_end - function to add a node at the end of a list
 * @head: pointer indicating start of list
 * @n: int to be added to list
 * Return: pointer to new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode, *temp;

	newNode = malloc(sizeof(listint_t)); /*reserves memory for new node*/
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->next = NULL;
	if (*head == NULL)
	{
		*head = newNode;
	}
	else
	{
		temp = *head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = newNode;
	}
	return (newNode);
}
