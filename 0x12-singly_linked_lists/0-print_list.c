#include "lists.h"

/**
 * print_list - Prints all the elements of a list_t list
 * @h: ptr to struct
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	int num = 0;

	while (h != NULL)
	{
	if (h->str == NULL)
	{
		printf("[0] (nil)\n");
		num++;
	}
	else
	{
		printf("[%u] %s\n", h->len, h->str);
		num++;
	}
	h = h->next;
	}
	return (num);
}
