#include "lists.h"

/**
 * listint_t - this func inserts a new node at a specefic position
 * @head: pointer to the first node in the list
 * @idx: the index of the list where a new node should be added
 *
 * Return: pointer to the new node otherwise a NULL 
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new;
	listint_t *temporary = *head;

	new = malloc(sizeof(listint_t));
	if (!new || !head)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	for (i = 0; temporary && i < idx; i++)
	{
		if (i == idx - 1)
		{
			new->next = temporary->next;
			temporary->next = new;
			return (new);
		}
		else
			temporary = temporary->next;
	}

	return (NULL);
}
