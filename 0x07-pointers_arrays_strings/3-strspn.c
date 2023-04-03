#include "main.h"
/**
 * -strspn entry point
 *  @s input
 *  @accept input
 *  return always 0 (success)
 */
unsigned int_strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int r;

	while (*s)
	{
		for (r = 0; accept[r]; r++)
		{
			if (*s == accept[r])
			{
				n++;
				break;
			}
			else if (accept[r + 1] == '\0')
				return (n);
		}
		s++;
	}
	return (n);
}
