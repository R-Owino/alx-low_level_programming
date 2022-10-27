#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to the struct
 * @idx: index of the list where the new node should be added
 * @n: data for new node
 * Return: address to new node at specified index, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 1;
	listint_t *newNode, *temp;

	if (head == NULL)
		return (NULL);

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);

	if (*head == NULL)
	{
		*head = newNode;
		newNode->next = NULL;
		newNode->n = n;
		return (newNode);
	}

	if (idx == 0)
	{
		newNode->next = *head;
		newNode->n = n;
		*head = newNode;
		return (newNode);
	}

	temp = *head;
	while (i < idx)
	{
		temp = temp->next;
		i++;
	}

	newNode->n = n;
	newNode->next = temp->next;
	temp->next = newNode;
	return (newNode);
}
