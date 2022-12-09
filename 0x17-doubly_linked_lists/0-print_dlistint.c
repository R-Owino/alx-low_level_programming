#include "lists.h"

/**
 * print_dlistint - prints all the elements of dlistint_t
 * @h: pointer to node struct
 * Return: number od nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	int node_count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		node_count++;
	}
	return (node_count);
}
