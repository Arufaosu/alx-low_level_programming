#include "lists.h"

/**
 * free_dlistint - it will free a linked list
 * @head: head of the linked lists
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
