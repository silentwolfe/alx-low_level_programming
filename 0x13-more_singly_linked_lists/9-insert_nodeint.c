#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * insert_nodeint_at_index - This function that inserts a new node at a
 * given position.
 * @head: The pointer to the first node of the element
 * @idx: Destination Index
 * @n: integer
 * Return: return the pointer of the new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node = NULL;
	listint_t *current = *head;
	unsigned int count = 0;

	while (current != NULL && count < idx - 1)
	{
		current = current->next;
		count++;
	}

	if (current == NULL && count < idx - 1)
	{
		return (NULL);
	}

	new_node = (listint_t *)malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = (current != NULL) ? current->next : NULL;


	if (current != NULL)
	{
		current->next = new_node;
	}
	else
	{
		*head = new_node;
	}

	return (new_node);
}
