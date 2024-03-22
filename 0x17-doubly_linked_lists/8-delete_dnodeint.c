#include <stdlib.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - This function deletes at node
 * @head: parameter
 * @index: parameter
 * Return: return integer
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{

	if (*head == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		dlistint_t *temp = *head;

		*head = (*head)->next;

		if (*head != NULL)
		{
			(*head)->prev = NULL;
		}
		free(temp);
		return (1);
	}

	dlistint_t *current = *head;

	while (index > 0 && current != NULL)
	{
		current = current->next;
		index--;
	}

	if (index > 0 || current == NULL)
	{
		return (-1);
	}

	current->prev->next = current->next;

	if (current->next != NULL)
	{
		current->next->prev = current->prev;
	}

	free(current);
	return (1);
}
