#include <stdio.h>
#include "main.h"

/**
 * print_array - This program prints n elements of integers of an array
 * @a: pointer to integer
 * @n: An array
 * Return: void
 */
void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		printf("%i", a[i]);
		if (i != n - 1)
		{
			putchar(',');
			putchar(' ');
		}
		i++;
	}
	putchar('\n');
}
