#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * pop_listint - This function deletes a node from an element listing
 * @head: The pointer to the first node of the element
 * Return: Void
 */

int pop_listint(listint_t **head)
{
	if (*head == NULL)
	{
		return (0);
	}

	int data = (*head)->n;

	listint_t *temp = *head;

	*head = (*head)->next;

	free(temp);

	return (data);
}
