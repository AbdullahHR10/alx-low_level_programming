#include "lists.h"

/**
 * add_node - Adds a new node at the beginning of a list_t list
 * @head: struct ptr
 * @str: char
 * Return: Address of new element or NULL if failed
 */

list_t *add_node(list_t **head, const char *str)
