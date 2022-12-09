#include "lists.h"

/**
 * dlistint_len - returns number of elements in dlistint_t
 * @h: pointer to node struct
 * Return: number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	int node_count = 0;

	while (h != NULL)
	{
		h = h->next;
		node_count++;
	}

	return (node_count);
}
