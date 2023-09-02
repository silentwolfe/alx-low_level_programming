#include <stdio.h>
#include "main.h"

/**
 * set_bit - This function sets the value of a bit to 1 at a given index
 * @n: The number passed in by the user
 * @index: The index of
 * Return: returns 1 if it works or -1 if it fails
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	mask = 1UL << index;
	*n |= mask;

	return (1);
}
