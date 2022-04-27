#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node_end - function to add a node at the end of a list
 * @head: pointer indicating start of list
 * @str: string to be added to list
 * Return: pointer to new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode, *temp;

	if (str == NULL)
	{
		return (NULL);
	}
	newNode = malloc(sizeof(list_t)); /*reserves memory for new node*/
	if (newNode = NULL)
		return (NULL);
	newNode->str = strdup(str);
	newNode->len = strlen(str);
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

