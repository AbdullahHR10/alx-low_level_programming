#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node - Adds a new node at the beginning of a list_t list
 * @head: struct ptr
 * @str: char
 * Return: Address of new element or NULL if failed
 */

list_t *add_node(list_t **head, const char *str)
{
    // Allocate memory for the new node
    list_t *new_node = malloc(sizeof(list_t));
    if (new_node == NULL) {
        return NULL; // Memory allocation failed
    }

    // Duplicate the string
    new_node->str = strdup(str);
    if (new_node->str == NULL) {
        free(new_node); // Memory allocation for the string failed
        return NULL;
    }

    // Set values for the new node
    new_node->len = strlen(str);
    new_node->next = *head;

    // Update the head of the list
    *head = new_node;

    return new_node;
}

