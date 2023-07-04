#include "lists.h"

/**
 * add_nodeint_end - func adds a node at the end of the linked list
 * @head: pointer to the first element in the list
 * @n: data to insert in the new element
 *
 * Return: pointer to the new node otherwise NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *nnode;
	listint_t *temp = *head;

	nnode = malloc(sizeof(listint_t));
	if (!nnode)
		return (NULL);

	nnode->n = n;
	nnode->next = NULL;

	if (*head == NULL)
	{
		*head = nnode;
		return (nnode);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = nnode;

	return (nnode);
}
