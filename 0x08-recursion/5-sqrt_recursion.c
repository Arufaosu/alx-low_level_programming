#include "main.h"

int real_sqrt_recursion(int n, int i);

/**
 * _sqrt_recursion - returns the natural squre root
 * @n: number to calculate the square root
 * Return: resulting square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (real_sqrt_recursion(n, 0));
}

/**
 * real_sqrt_recursion - recrusion to find the natrual squre root
 * @n: number to calculate the square root from
 * @i: iterator
 * Return: resulting square root
 */
int real_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (real_sqrt_recursion(n, i + 1));
}
