#include <stdio.h>
#include "main.h"

/**
 * get_bit - This function returns the value of a bit at a given index
 * @n: The unsigned long int
 * @index: The index starting from 0 down to the number to be indexed
 * Return: returns the value of a bit at its index or -1 if an error occurs
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	mask = 1UL << index;

	if ((n & mask) == mask)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

