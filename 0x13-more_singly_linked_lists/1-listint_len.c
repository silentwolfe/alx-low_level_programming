#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * listint_len - This function prints out the length of elements
 * @h: The pointer to the first node
 * Return: returns the pointer of the length counted
 */

size_t listint_len(const listint_t *h)
{
	if (h == NULL)
	{
		return (0);
	}

	const listint_t *current = h;
	size_t count = 0;

	while (current != NULL)
	{
		current = current->next;
		count++;
	}
	return (count);
}
