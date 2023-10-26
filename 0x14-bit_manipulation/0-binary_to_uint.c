#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - This function converts binary to unsigned int
 * @b: The pointer to the binary passed in by the user
 * Return: returns the result of the operation
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	unsigned int i = 0;

	if (b == NULL)
	{
		return (0);
	}

	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}

		result <<= 1;

		if (b[i] == '1')
		{
			result += 1;
		}

		i++;
	}

	return (result);
}
