#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - Prints all the elements of a dlistint_t list.
 * @h: Pointer to the head of the doubly linked list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_dlistint(const dlistint_t *h)
{
    size_t count = 0;

    while (h != NULL)
    {
        printf("%d\n", h->n);  /* Print the current node's value */
        count++;                /* Increment the node count */
        h = h->next;           /* Move to the next node */
    }

    return count;              /* Return the total count of nodes */
}
