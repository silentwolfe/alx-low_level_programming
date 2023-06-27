#include "main.h"

/**
 * _puts - This is a function that prints a
 * string with a new line to it
 *
 * @str: prototype declaration
 * Return: void
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
