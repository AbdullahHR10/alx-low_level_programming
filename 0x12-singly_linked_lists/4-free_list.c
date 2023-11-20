#include "lists.h"

/**
 * free_list - Frees a list_t list
 * @head: list ptr
 * Return: Nothing
 */

void free_list(list_t *head)
{
	list_t *t
	while (head != NULL)
	{
		if (head->str != NULL)
		{
			free(head->str);
		}
	t = head;
	head = head->next;
	free(t);
	}
}
