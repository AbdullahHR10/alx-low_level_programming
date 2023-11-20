#include "lists.h"

/**
 * free_list - Frees a list_t list
 * @head: list ptr
 * Return: Nothing
 */

void free_list(list_t *head)
{
	if (head != NULL)
	{
		if (head->str != NULL)
		{
			free(head->str);
		}
	free(head->next);
	free(head);
	}
}
