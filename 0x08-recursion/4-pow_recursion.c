#include "main.h"
#include <stdio.h>

/**
 * _pow_recursion - prints the power of a constant
 * @x: constant
 * @y: Exponent(power of)
 *
 * Return: powered value of x
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}

	else if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
