#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - Prints number with a new line after.
 * @separator: The string printed between numbers.
 * @n: The number of ints passed.
 * @...: A variable number of numbers will be printed.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int list;

	va_start(args, n);

	for (list = 0; list < n; list++)
	{
		printf("%d", va_arg(args, int));

		if (list != (n - 1) && separator != NULL)
		{
			printf(("%s", separator);
		}
	}

	printf("\n");

	va_end(args);

}
