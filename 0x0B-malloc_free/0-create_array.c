#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * @size: total size of bytes size needed
 * @c: charcter to be duplicateed
 *
 * Return: an array of char
 */

char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i = 0;

	if (size == 0)
	{
		return (NULL);
	}

	p = malloc(size);
	if (p == NULL)
	{
		return (NULL);
	}

	while (size != 0)
	{
		p[i] = c;
		i++;
		size--;
	}
	return (p);
}
