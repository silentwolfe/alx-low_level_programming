#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * freelist_int - This function adds a node at the end of the element lists
 * @head: The pointer to the first node of the element
 * Return: returns the pointer of the newNode
 */

void free_listint(listint_t *head)
{
	listint_t *current;

	while (current != NULL)
	{
		current = current->next;
		head = head->next;
		free(current);
	}
}
