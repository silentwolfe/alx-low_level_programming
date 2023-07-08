#include "main.h"

/**
 * _puts - This is an empty function
 * @s: prototype parameter
 * Return: (0) success
 */

void _puts(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	else
	{
		_putchar(*s);
		_puts(s + 1);
	}
}
