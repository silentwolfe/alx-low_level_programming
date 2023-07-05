#include "main.h"

/**
 * _puts_recursion - This function prints strings followed
 * by a new line
 * @s: The string to be printed
 * Return: Void
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
