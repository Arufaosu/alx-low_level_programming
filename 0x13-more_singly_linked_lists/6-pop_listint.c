#include "lists.h"

/**
 * pop_listint - this func deletes the head node of a linked list
 * @head: pointer to the first element in the linked list
 *
 * Return: data inside the elements otherwise 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int number;

	if (!head || !*head)
		return (0);

	number = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (number);
}
