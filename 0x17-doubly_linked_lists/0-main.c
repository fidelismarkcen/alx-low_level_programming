#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    dlistint_t *head;
    dlistint_t *new;
    dlistint_t hello = {8, NULL, NULL};
    size_t n;

    head = &hello;

    /* Allocate memory for the new node */
    new = malloc(sizeof(dlistint_t));
    if (new == NULL)
    {
        dprintf(2, "Error: Can't malloc\n");
        return (EXIT_FAILURE);
    }

    /* Initialize the new node */
    new->n = 9;
    new->prev = NULL;  /* Since it's the new head */
    new->next = head;  /* Next points to the current head */

    /* Update the current head to point back to the new node */
    head->prev = new;

    /* Update head to point to the new head of the list */
    head = new;

    /* Print the list and store the number of nodes */
    n = print_dlistint(head);
    printf("-> %lu elements\n", n);

    /* Free the newly allocated node */
    free(new);

    return (EXIT_SUCCESS);
}
