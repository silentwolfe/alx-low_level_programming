#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - This function prints out all the elements of a DLL
 *
 * @h: Parameter to be passed as argument for the function
 * Return: returns an integer
 */

size_t dlistint_len(const dlistint_t *h)
{
        size_t node_count = 0;


        while (h != NULL)
        {
                h = h->next;
                node_count++;
        }

        return (node_count);
}
