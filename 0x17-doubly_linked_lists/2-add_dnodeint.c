#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list
 * @head: double pointer to the head of the list
 * @n: integer data for the new node
 *
 * Return: address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
    dlistint_t *new_node;

    /* Allocate memory for the new node */
    new_node = malloc(sizeof(dlistint_t));
    if (new_node == NULL)
        return (NULL);

    new_node->n = n; /* Assign data to the new node */
    new_node->prev = NULL; /* The new node will be the first node, so prev is NULL */
    new_node->next = *head; /* New node points to the current head */

    if (*head != NULL)
        (*head)->prev = new_node; /* If the list is not empty, set the previous head's prev to new node */

    *head = new_node; /* Update the head to the new node */
    return (new_node);
}
