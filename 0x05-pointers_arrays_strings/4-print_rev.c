#include "main.h"

/**
 * _strlen - This returns the lengths of strings
 * @str: prototype declaration
 * Return: integer
 */

int _strlen(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * print_rev - This prints in reverse the string given
 * @s: prototype declaration
 * Return: void
 */

void print_rev(char *s)
{
	int i = _strlen(s) - 1;

	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
