#include "lists.h"

/**
 * list_len - prints number of elements in a linked list_t list
 * @h: input
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	size_t num = 0;

	while (h != NULL)
	{
		h = h->next;
		num++;
	}

	return (num);
}
