#include "main.h"

/**
 * print_alphabet - Write a function that prints the alphabet, in
 * lowercase, followed by a new line.
 * Return: return the int 0 else  failure
 */

void print_alphabet(void)
{
	char i;

	for (i = 97; i <= 122; i++)
	{
		_putchar(i);
	}

	_putchar('\n');
}
