#include <stdlib.h>
#include <string.h>

/**
 * _realloc - This function reallocates a memory block using malloc and free
 * @ptr: This is the old block made
 * @old_size: This is the size allocated for the old block
 * @new_size: This is the size that is to be allocated for the new block
 * Return: The function returns a pointer to the newly allocated memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;

	if ((new_size == 0) && (ptr != NULL))
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		return (malloc(new_size));
	}
	if (new_size == old_size)
	{
		return (ptr);
	}

	new_ptr = malloc(new_size);

	if (new_size > old_size)
	{
		if (new_ptr == NULL)
		{
			return (NULL);
		}
		else
		{
			memcpy(new_ptr, ptr, new_size);
			free(ptr);
		}
		return (new_ptr);
	}
	return (NULL);
}
