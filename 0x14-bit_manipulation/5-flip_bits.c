#include "main.h"
#include <stdio.h>

/**
 * flip_bits - This function returns the number of bits you would
 * need to flip to get from one number to another
 * @n: The bit to flip from
 * @m: The bit to flip to
 * Return: returns 1 if it works or -1 if error occurs
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m;
	unsigned int count = 0;

	while (xor > 0)
	{
		if ((xor & 1) == 1)
		{
			count++;
		}
		xor >>= 1;
	}

	return (count);
}
