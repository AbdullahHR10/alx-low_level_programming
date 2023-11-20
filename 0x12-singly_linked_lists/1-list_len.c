#include "lists.h"

/**
 * list_len - Returns the number of elements in a linked list_t list
 * @h: ptr to struct
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	int num = 0;

	while (h != NULL)
	{
		num++;
		h = h->next;
	}
	return (num);
}
