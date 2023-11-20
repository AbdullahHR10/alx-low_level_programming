#include "lists.h"

/**
 * print_list - Prints all the elements of a list_t list
 * @h: ptr to struct
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	int num = 0;

	if (h == NULL)
	{
		return (NULL);
	}
	if (h->str == NULL)
	{
		printf("[0] (nil)\n");
		num++;
	}
	else
	{
		printf("[%d] %s\n", h->len, h->str);
		num++;
	}
	h = h->next;
	if (h->str == NULL)
	{
		printf("[0] (nil)\n");
		num++;
	}
	else
	{
		printf("[%d] %s\n", h->len, h->str);
		num++;
	}
	return (num);
}
