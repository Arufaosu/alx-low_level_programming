#include "lists.h"

/**
 * add_dnodeint - adds a new node at the start of the list
 * @head: pointer to the head of the list
 * @n: integer for the new node
 *
 * Return: returns NULL if failed otherwise the address of the new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;
	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);
	
	new->n = n;
	new->prev = NULL;
	new->next = *head;

	if (*head != NULL)
		(*head)->prev = new;

	*head = new;
	return (new);
}
