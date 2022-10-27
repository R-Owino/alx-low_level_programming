#include "lists.h"

/**
 * add_nodeint - adds a node at the beginning
 * @head: pointer to the new node
 * @n: int input to the new node
 * Return: address of the new element, or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	newNode = *head;
	*head = malloc(sizeof(listint_t));
	if (!*head)
		return (NULL);
	(*head)->n = n;
	(*head)->next = newNode;
	return (*head);
}
