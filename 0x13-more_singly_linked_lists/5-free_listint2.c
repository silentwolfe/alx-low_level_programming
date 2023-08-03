#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * freelist_int - This function adds a node at the end of the element lists
 * @head: The pointer to the first node of the element
 * Return: Void
*/

void free_listint2(listint_t **head)
{
    listint_t* current;

    while (*head != NULL)
    {
        current = *head;
        *head = (*head)->next;
        free(current);
    }
}
