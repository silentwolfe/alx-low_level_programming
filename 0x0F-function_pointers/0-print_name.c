#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - This function prints a name given to it
 * @name: The name argument
 * @f: A function pointer passed as an argument
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (f == NULL || name == NULL)
		return;

	f(name);

}
