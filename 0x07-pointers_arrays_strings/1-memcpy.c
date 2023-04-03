#include "main.h"
/**
 * memcpy a function that copies memory area
 * @dest memory where is stored
 * @src memory where it is copied
 * @n number of bytes
 *
 * return copied memory with n bytes changed
 */
char 8_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
