#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_nodeint - adds a new node to the begining of the list
 * @head: pointer to pointer node
 * @str: string to be added
 * Return: pointer to new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	if (head == NULL)
	{
		newNode->next = NULL;
	}
	else
	{
		newNode->next = *head;
	}
	*head = newNode;
	return (newNode);
}

