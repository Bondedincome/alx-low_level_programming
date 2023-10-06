#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array
 * @nmemb: total number of that specific data type
 * @size: type of data type
 *
 * Return: void
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *k;
	int i = 0, p = 0;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	p = nmemb * size;
	k = malloc(p);

	if (k == NULL)
	{
		return (NULL);
	}
	while (i < p)
	{
		k[i] = 0;
		i++;
	}

	return (k);
}
