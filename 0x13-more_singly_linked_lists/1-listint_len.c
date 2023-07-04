#include "lists.h"

/**
 * listint_len - this func returns the number of elements
 * @h: linked list of type listint_t
 *
 * Return: amount of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t number = 0;

	while (h)
	{
		number++;
		h = h->next;
	}

	return (number);
}
