#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - length of string
 * @s: The source code
 *
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	s++;
	return (_strlen_recursion(s) + 1);
}

