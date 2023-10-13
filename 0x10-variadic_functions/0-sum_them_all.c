#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - adds up all sets of numbers
 * @n: total number in the list
 *
 * Return: Return the sum of all numbers
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list numbs;
	int sum = 0;
	unsigned int i;

	if (n == 0)
	{
		return (0);
	}

	va_start(numbs, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(numbs, int);
	}
	va_end(numbs);
	return (sum);
}
