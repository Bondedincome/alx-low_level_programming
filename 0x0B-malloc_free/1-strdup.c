#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - contains copy of the string
 * @str: string to be copied
 *
 * Return: returns a pointer containing str
 */

char *_strdup(char *str)
{
	int i = 1, k;
	char *p;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[i])
	{
		i++;
	}

	p = malloc(i * sizeof(char) + 1);

	if (p == NULL)
	{
		return (NULL);
	}

	for (k = 0; k < i; k++)
	{
		p[k] = str[k];
	}
	p[k] = '\0';

	return (p);
}
