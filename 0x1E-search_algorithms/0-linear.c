#include "search_algos.h"

/**
 * linear-search - searches for a value in an array
 * @array: a pointer to the first element
 * @size: number of elements
 * @value: value to search for
 *
 * Return: either returns the value or NULL
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return -1;

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);

		if (array[i] == value)
			return i;
	}
	
	return -1;
}
