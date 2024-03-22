#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint - This function frees unused memory from the list
 * @head: Head parameter
 *
 * Return: return void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current);
	}
}
