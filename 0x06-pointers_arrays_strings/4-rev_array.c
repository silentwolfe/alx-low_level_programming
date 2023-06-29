#include "main.h"

/**
 * reverse_array - This function concatenates a string
 * @a: Represents the first string.
 * @n: Represents the second string
 *
 * Return: void.
 */

void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = temp;
	}
}
