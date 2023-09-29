#include "main.h"
#include <stdio.h>

/**
 * _print_rev_recursion - print a string in reverse
 * @s: set of string to be reveresed
 *
 * Return: ...
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	s++;
	_print_rev_recursion(s);
	s--;
	putchar(*s);
}
