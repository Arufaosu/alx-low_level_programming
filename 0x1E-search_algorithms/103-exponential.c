#include "search_algos.h"

/**
  * _binary_search - searches for a value in a sorted array
  * @array: pointer to the first element
  * @left: starting index of array to search
  * @right: ending index of array to search
  * @value: value to search for
  *
  * Return: returns value or null
  */
int _binary_search(int *array, size_t left, size_t right, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	while (right >= left)
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);
		i = left + (right - left) / 2;

		if (array[i] == value)
			return (i);
		if (array[i] > value)
			right = i - 1;
		else
			left = i + 1;
	}

	return (-1);
}


/**
 * exponential_search - searches for a value in a sorted array
 * @array: pointer to the first element
 * @size: number of elements
 * @value: value to search for
 *
 * Return: returns number or NULL
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t i = 0, right;

	if (array == NULL)
		return (-1);

	if (array[0] != value)
	{
		for (i = 1; i < size && array[i] <= value; i = i * 2)
			printf("value checked [%ld] = [%d]\n", i, array[i]);
	}
	right = i < size ? i : size - 1;
	printf("values found between indexes [%ld] and [%ld]\n", i / 2, right);
	return (_binary_search(array, i / 2, right, value));
}
