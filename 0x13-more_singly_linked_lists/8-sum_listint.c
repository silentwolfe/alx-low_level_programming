#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * sum_listint - This function returns the sum of all the data (n) of a
 * listint_t linked list.
 * @head: The pointer to the first node of the element
 * Return: return the sum
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
