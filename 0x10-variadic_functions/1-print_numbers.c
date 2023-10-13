#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers
 * @separator: Separeter between numbers
 * @n: total number of integer in the list
 *
 * Return: Void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numbs;
	unsigned int i;

	va_start(numbs, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(numbs, int));
		if (i != n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	va_end(numbs);
	printf("\n");
}
