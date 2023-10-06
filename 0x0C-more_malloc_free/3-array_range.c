#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of ints
 * @min: minimum numb
 * @max: maximum numb
 *
 * Return: An array of ints
 */

int *array_range(int min, int max)
{
	int *p, n, i;

	if (min > max)
	{
		return (NULL);
	}

	n = max - min;
	p = malloc((sizeof(int) * n) + sizeof(int));

	if (p == NULL)
	{
		return (NULL);
	}

	for (i = 0; i <= n; i++)
	{
		if (min <= max)
		{
			p[i] = min;
			min++;
		}
		else
		{
			break;
		}
	}
	return (p);
}
