#include "main.h"
#include <stdio.h>

/**
 * factorial - calculate factorial value
 * @n: number to be factorialed
 *
 * Return: an integer result of the factorial
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}

