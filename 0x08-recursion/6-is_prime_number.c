#include "main.h"

int prime(int n, int i);

/**
 * is_prime_number: if the integer is a prim num or no
 * @n: number to evaluate
 * return: 1 if n is a prime number and 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime(n, n - 1));
}

/**
 * prime: calculate if a number is prime recursively
 * @n: number to evaluate
 * @i: iterator
 * return: 1 if n is a prime num and 0 if not
 */
int prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (prime(n, i - 1));
}
