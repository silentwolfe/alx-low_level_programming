#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_nodeint - This function that adds a new node at the beginning
 * of a listint_t list.
 * @head: The pointer to the beginning of the new node
 * @n: integer
 * Return: returns Null is failed else return the pointer
 * to the new node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode = malloc(sizeof(listint_t));

	if (newNode == NULL)
	{
		return (NULL);
	}
	newNode->n = n;
	newNode->next = *head;
	*head = newNode;
	return (newNode);
}
