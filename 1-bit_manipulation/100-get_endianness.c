#include <stdio.h>
#include "main.h"

/**
 * get_endianness - This function checks the endianness given to it
 * Return: returns 0 if big edian or 1 if small edian
 */

int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *)&i;

	if (*c)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
