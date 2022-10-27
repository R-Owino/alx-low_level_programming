#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * and returns the head node’s data (n)
 * @head: pointer to the struct
 * Return: data from the popped node
 */

int pop_listint(listint_t **head)
{
	listint_t *node;
	int n;

	if (*head == NULL)
		return (0);

	n = (*head)->n;
	node = (*head)->next;
	free(*head);
	*head = node;
	return (n);
}
