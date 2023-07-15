#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 * malloc_checked - This function allocates memory using malloc
 * @b: The size
 * Return: returns the pointer to the function
 */
void *malloc_checked(unsigned int b)
{
	void *p = malloc(sizeof(b));

	if (p == NULL)
	{
		exit(98);
	}

	return (p);
}
