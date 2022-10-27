#include "lists.h"

/**
 * free_listint - frees a linked list
 * @head: pointer to the listint struct
 */

void free_listint(listint_t *head)
{
	listint_t *current;

	while (head)
	{
		current = head;
		head = head->next;
		free(current);
	}
	free(head);
}
