#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - This function executes a function given as
 * a parameter on each element of an array.
 * @array: A pointer to the first element of the array.
 * @size:  The number of elements in the array.
 * @action:  A pointer to a function that takes an integer
 * as a parameter and returns void.
 * Return: Nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
	{
		return;
	}

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
