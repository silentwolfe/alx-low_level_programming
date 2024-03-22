#include "lists.h"

/**
 * sum_dlistint - This function return the addition of all data in a list
 * @head: Head parameter
 *
 * Return: returns integer
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
