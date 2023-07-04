#include "lists.h"

/**
 * add_nodeint - this func adds a new node at the beginning of a linked list
 * @head: pointer to the first node
 * @n: data to insert in the new node
 *
 * Return: pointer to the new node otherwise a NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *nnode;

	nnode = malloc(sizeof(listint_t));
	if (!nnode)
		return (NULL);

	nnode->n = n;
	nnode->next = *head;
	*head = nnode;

	return (nnode);
}
