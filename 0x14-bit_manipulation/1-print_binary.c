#include <stdio.h>
#include "main.h"

/**
 * print_binary - This function converts integers into binary
 * @n: The unsigned int passed in by the user
 */

void print_binary(unsigned long int n)
{
	unsigned long int mask = 1UL << (sizeof(unsigned long int) * 8 - 1);
	int flag = 0;

	while (mask > 0)
	{
		if ((n & mask) == mask)
		{
			_putchar('1');
			flag = 1;
		}
		else if (flag)
		{
			_putchar('0');
		}
		mask >>= 1;
	}

	if (!flag)
	{
		_putchar('0');
	}
}

