#include <stdlib.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - This function inserts a node at a given position
 * @h: Parameter
 * @idx: Parameter
 * @n: Parameter
 *
 * Return: returns integer
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{    
	if (*h == NULL && idx == 0)
	{

		dlistint_t *new_node = malloc(sizeof(dlistint_t));

		if (new_node == NULL)
		{
			return (NULL);
		}

		new_node->n = n;
		new_node->prev = NULL;
		new_node->next = NULL;

		*h = new_node;
		return (new_node);
	}

	dlistint_t *current = *h;

	while (idx > 1 && current != NULL)
	{
		current = current->next;
		idx--;
	}

	if (idx > 1 || current == NULL)
	{
		return (NULL);
	}

	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;

	new_node->prev = current;
	new_node->next = current->next;

	if (current->next != NULL)
	{
		current->next->prev = new_node;
	}
	current->next = new_node;

	return (new_node);
}

