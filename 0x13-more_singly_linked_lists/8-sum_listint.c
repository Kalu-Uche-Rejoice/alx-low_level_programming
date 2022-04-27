#include "lists.h"
#include <stdlib.h>
/**
 * sum_listint - adds data in singly linked list
 * @head: pointer to first element
 * Return: int sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
