#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    dlistint_t *head;
    dlistint_t *new_node;

    head = NULL;

    /* Add nodes to the end of the doubly linked list */
    new_node = add_dnodeint_end(&head, 10);
    if (new_node == NULL)
    {
        fprintf(stderr, "Error: Could not add node\n");
        return (EXIT_FAILURE);
    }

    new_node = add_dnodeint_end(&head, 20);
    if (new_node == NULL)
    {
        fprintf(stderr, "Error: Could not add node\n");
        return (EXIT_FAILURE);
    }

    /* Print the list to verify the additions */
    print_dlistint(head);

    /* Free the list (if applicable) */

    return (EXIT_SUCCESS);
}
