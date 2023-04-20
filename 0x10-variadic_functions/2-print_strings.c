#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - Print string with a new line after.
 * @separator: Printed between strings.
 * @n: Number of strings passed.
 * @...: Number of strings to print.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int list;
	char *str;

	va_start(args, n);

	for (list = 0; list < n; list++)
	{
		str = va_arg(args, char *);

		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}

		if (list != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
}
