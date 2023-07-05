#include "main.h"

/**
 * _print_rev_recursion - This function prints strings in reverse
 * @s: The string to be passed in
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	else
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);

	}
}
