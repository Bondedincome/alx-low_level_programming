#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - Prints the name of the name entered
 * @name: name entered
 * @f: Pointer of function
 *
 * Return: Void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
