#include "lists.h"

/**
 * free_listint2 - sets head to NULL
 * @head: pointer to struct
 */

void free_listint2(listint_t **head)
{
	listint_t *current;

	if (head == NULL)
		return;

	current = *head;
	while (*head)
	{
		current = *head;
		(*head) = (*head)->next;
		free(current);
	}
	*head = NULL;
}
