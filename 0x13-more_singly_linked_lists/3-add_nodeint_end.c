#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_nodeint_end - This function adds a node at the end of the element lists
 * @head: The pointer to the first node of the element
 * @n: integer
 * Return: returns the pointer of the newNode
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *current;

	listint_t *newNode = malloc(sizeof(listint_t));

	if (newNode == NULL)
	{
		return (NULL);
	}

	newNode->n = n;
	newNode->next = NULL;

	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}

	current = *head;

	while (current->next != NULL)
	{
		current = current->next;
	}
	current->next = newNode;

	return (newNode);
}
