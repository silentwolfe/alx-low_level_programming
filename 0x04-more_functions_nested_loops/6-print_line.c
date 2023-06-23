#include "main.h"

/**
 * print_line - This function draws a straight line
 * in the terminal
 * @n: prototype def
 * Return: void;
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (n <= 0)
		{
			_putchar('\n');
		}
		else
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
