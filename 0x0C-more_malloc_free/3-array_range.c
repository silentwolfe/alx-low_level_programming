#include <stdlib.h>

/**
 * array_range - This function creates an array of integers
 * @min: Minimum value
 * @max: maximum Value
 * Return: The function returns the array created
 */

int *array_range(int min, int max)
{
	int *arr;
	int size;
	int i;

	i = 0;

	if (min > max)
	{
		return (NULL);
	}
	size = max - min + 1;
	arr = malloc(sizeof(int) * size);

	if (arr == NULL)
	{
		return (NULL);
	}

	for (; i < size; i++)
	{
		arr[i] = min + i;
	}
	return (arr);
}
