#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - itereats integers
 * @array: array of integers
 * @size: amount of bytes able to hold
 * @action: pointer to a function
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array != NULL && action != NULL && size > 0)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
