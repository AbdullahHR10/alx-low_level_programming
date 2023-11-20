#include "lists.h"

/**
 * free_list - Frees a list_t list
 * @head: list ptr
 * Return: Nothing
 */

void free_list(list_t *head)
{
	free(head->str);
	free(head->next);
	free(head);
}
