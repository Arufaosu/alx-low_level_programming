#include "main.h"

/**
 * _strstr - the entry point
 * @haystack: input value
 * @needle: input value
 * 
 * Return: always 0 for success
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *l = haystack;
		char *p = needle;

		while (*l == *p && *p != '\0')
		{
			l++;
			p++;
		}

		if (*p == '\0')
			return (haystack);
	}

	return (0);
}
