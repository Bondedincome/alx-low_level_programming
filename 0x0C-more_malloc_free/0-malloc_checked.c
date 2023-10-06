#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - allocates memory
 * @b: number of bytes
 *
 * Return: void
 */

void *malloc_checked(unsigned int b)
{
	void *k;

	k = malloc(b);

	if (k == NULL)
	{
		exit(98);
	}
	return (k);
}
