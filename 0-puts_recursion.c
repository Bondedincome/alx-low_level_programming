#include "main.h"
#include <stdio.h>

/*
 * puts_recursion - printss strings followed by new line
 * *s: strings to be printed
 *
 * Return: ...
 */
void _puts_recursion(char *s);
{
	if (*s == '\0')
	{
		putchar('\n')
		return;
	}
	putchar(*s);
	s++;
	_put_recursion(s);
}
