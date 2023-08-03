#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * delete_nodeint_at_index - This function that inserts a new node at a
 * given position.
 * @head: The pointer to the first node of the element
 * @index: Destination Index
 * Return: return 1 if success else return -1
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current = *head;
	listint_t *previous = NULL;
	unsigned int count = 0;

	while (current != NULL && count < index)
	{
		previous = current;
		current = current->next;
		count++;
	}

	if (current == NULL && count < index)
	{
		return (-1);
	}

	if (previous != NULL)
	{
		previous->next = current->next;
	}
	else
	{
		*head = current->next;
	}

	free(current);

	return (1);
}
