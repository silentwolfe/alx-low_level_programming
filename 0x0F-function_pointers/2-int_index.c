#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - This function searches for an integer and
 * takes three characters.
 * @array: A pointer to the first element of the array.
 * @size: The number of elements in the array.
 * @cmp: A pointer to a function that takes an integer
 * as a parameter and returns an integer
 * (usually 0 or non-zero).
 *
 * Return: 0 (success) and returns -1 if no element
 * matches
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	if (array == NULL || cmp == NULL || size <= 0)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}

	return (-1);
}
