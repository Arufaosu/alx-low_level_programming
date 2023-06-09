#include "main.h"

/**
 * _memset - allocate a specific value to a block of memory
 * @s: address of block of memory
 * @b: specific value
 * @n: amount of bytes that will change
 *
 * Return: the new array with a new value of n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
