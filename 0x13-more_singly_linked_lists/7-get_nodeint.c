#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_nodeint_at_index - This function  returns the nth node of a listint_t
 * linked list.
 * @head: The pointer to the first node of the element
 * @index: Destination
 * Return: return the head pointer
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (head != NULL && count < index)
	{
		head = head->next;
		count++;
	}

	if (head == NULL)
	{
		return (NULL);
	}

	return (head);
}
