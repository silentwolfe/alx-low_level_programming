#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - This function allocates blocks of memory for an
 * array of elements
 * @nmemb: The number of elements to allocate for
 * @size: The size in byte of each element
 * Return: The calloc function returns a pointer to the allocated
 * memory block. if the allocation fails it returns NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	ptr = malloc(nmemb * size);
	
	if (ptr != NULL)
	{
		memset(ptr, 0, nmemb * size);
	}

	if (ptr == NULL)
	{
		return (NULL);
	}

	return (ptr);
}
