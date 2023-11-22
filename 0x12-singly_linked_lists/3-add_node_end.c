#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node_end - Adds a new node at the end of a list_t list
 * @head: struct ptr
 * @str: char
 * Return: Address of new element or NULL if failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
        list_t *new_node = malloc(sizeof(list_t));

        if (new_node == NULL)
        {
                return (NULL);
        }
        new_node->str = strdup(str);
        if (new_node->str == NULL)
        {
                free(new_node);
                return (NULL);
        }
        new_node->len = strlen(str);
        new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
	}
        return (new_node);
}
