#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node - adds a new node to the begining of the list
 * @head: pointer to pointer node
 * @str: string to be added
 * Return: pointer to new node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;

	if (str == NULL)
	{
		return (NULL);
	}
	newNode = malloc(sizeof(list_t));
	newNode->str = strdup(str);
	newNode->len = strlen(str);
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

