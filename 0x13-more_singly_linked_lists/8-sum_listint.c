#include "lists.h"

/**
 * sum_listint - gets the sum of all data in the linked list
 * @head: pointer to the struct
 * Return: sum of n
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
