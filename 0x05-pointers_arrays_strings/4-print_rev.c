#include <stdio.h>
#include "main.h"
/**
 * print_rev - this function prints a string in reverse mode
 * @s: prototype declaration
 * Return: (0);
 */

void print_rev(char *s)
{
	int len = 0;
	char *t = s;
	int i;

	while (*t != '\0')
	{
		len++;
		t++;
	}

	for (i = len - 1; i >= 0; i--)
	{
		putchar(s[i]);
	}

	putchar('\n');
}
