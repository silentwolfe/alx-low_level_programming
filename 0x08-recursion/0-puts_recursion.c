#include "main.h"

/**
 * _puts_recursion - This function prints strings followed
 * by a new line
 * @s: The string to be printed
 * Return: Void
 */

void _puts_recursion(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s);
		s++;
	}
	_putchar('\n');
}
