#include "main.h"

/**
 * print_alphabet_x10 -  This prints the alphabets in small letters 10 times
 * void: no return type
 */

void print_alphabet_x10(void)
{
	char i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}

	_putchar('\n');
	}
}
