#include "lists.h"

/**
 * sum_dlistint - adds all the data of a list
 * @head: head of the list
 *
 * Return: sum od all data
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
