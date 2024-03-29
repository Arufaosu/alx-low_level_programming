#include "lists.h"

/**
 * dlistint_len - gets number of elements in a linked list
 * @h: head of the list
 *
 * Return: returns num of elements in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}
