#include "lists.h"

/**
 * get_nodeint_at_index - gets the nth node
 * @head: pointer to the struct
 * @index: index of the node, starting 0
 * Return: nth node, otherwise NULL if it does not exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	while (head)
	{
		if (i == index)
			return (head);
		head = head->next;
		i++;
	}
	return (NULL);
}
