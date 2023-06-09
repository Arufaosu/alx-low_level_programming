#include "main.h"

/**
 * factorial - normal facorial
 * @n: input
 * Return: factorial value
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
