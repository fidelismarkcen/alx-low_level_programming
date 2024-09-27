#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    hash_table_t *ht;

    /* Create a hash table */
    ht = hash_table_create(1024);
    if (ht == NULL)
    {
        fprintf(stderr, "Error: Unable to create hash table\n");
        return (EXIT_FAILURE);
    }

    /* Add key-value pairs to the hash table */
    if (hash_table_set(ht, "betty", "cool") == 0)
    {
        fprintf(stderr, "Error: Unable to add key-value pair\n");
        return (EXIT_FAILURE);
    }

    /* Test adding more key-value pairs, including those that would cause collisions */
    hash_table_set(ht, "hetairas", "value1");
    hash_table_set(ht, "mentioner", "value2");
    hash_table_set(ht, "heliotropes", "value3");
    hash_table_set(ht, "neurospora", "value4");

    /* You can add more tests here to check values in the hash table */

    /* Free the hash table and its contents here if necessary */

    return (EXIT_SUCCESS);
}
