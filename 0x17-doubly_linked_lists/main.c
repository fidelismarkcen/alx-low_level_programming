#include "lists.h"

int main(void)
{
    dlistint_t *head = NULL;

    // Adding nodes to the list
    add_dnodeint(&head, 10);
    add_dnodeint(&head, 20);
    add_dnodeint_end(&head, 30);
    
    // Printing the list
    printf("List contents:\n");
    print_dlistint(head);

    // Freeing the list
    free_dlistint(head);
    
    return 0;
}
