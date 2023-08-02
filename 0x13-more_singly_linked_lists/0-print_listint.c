#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * print_listint - This prints all the element of listint
 * @h: The first node (head node)
 *
 * Return: return the pointer to node
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *current = h;

	size_t nodeCount = 0;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
		nodeCount++;
	}

	return (nodeCount);
}
