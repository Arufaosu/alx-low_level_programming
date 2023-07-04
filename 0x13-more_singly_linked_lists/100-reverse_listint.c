#include "lists.h"
#include <stdlib.h>

/**
 * reverse_listint - func reverses a linked list
 * @head: pointer to the first node in the list
 *
 * Return: points to the first node in the new list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *previous = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = previous;
		previous = *head;
		*head = next;
	}

	*head = previous;

	return (*head);
}
