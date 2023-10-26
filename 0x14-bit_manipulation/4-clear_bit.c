#include "main.h"
#include <stdio.h>

/**
 * clear_bit - This function csets the value of a bit at any index given
 * @n: This function takes a pointer to an unsigned long integer n
 * @index: The index
 * Return: returns 1 if it works and -1 if an error occurs
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	mask = ~(1UL << index);
	*n &= mask;

	return (1);
}
