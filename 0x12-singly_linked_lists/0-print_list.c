#include "lists.h"
#include <stdio.h>

/**
 * print_list Prints all the elements of a list_t list
 * @h: char
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	int count = 0;

	while (h != 0)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		count++;

		h = h->next;
	}
	printf("-> %d elements\n", count);
	return (count);
}
