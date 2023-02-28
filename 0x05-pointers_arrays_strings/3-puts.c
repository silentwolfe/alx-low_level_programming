#include "main.h"
#include <stdio.h>
/**
 * _puts - This program prints a string to the stdoutput
 * @str: prototype declaration
 * Return: (0);
 */

void _puts(char *str)
{

	while (*str != '\0')
	{
		putchar (*str);
		str++;
	}
	putchar('\n');
}
