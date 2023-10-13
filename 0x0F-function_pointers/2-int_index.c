#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - finds conditions that satisfies cmp
 * @array: array of integers
 * @size: size of array
 * @cmp: pointer of function
 *
 * Return: returns index if correct else -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array != NULL && cmp != NULL && size > 0)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
			{
				return (i);
			}
		}
	}
	return (-1);
}
