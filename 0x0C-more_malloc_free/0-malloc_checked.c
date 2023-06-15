#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - this function allocates memory using malloc
 * @b: the amount of bytes to allocate
 *
 * Return: it will return a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
