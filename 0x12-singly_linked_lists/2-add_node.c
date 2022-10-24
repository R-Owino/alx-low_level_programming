#include "lists.h"

/**
 * _strlen - returns the length of a string
 * @s: string s
 * Return: length of string
 */
int _strlen(char *s)
{
	char *p = s;

	while (*s)
		s++;
	return (s - p);
}

/**
 * add_node - adds node at the beginning
 * @head: pointer to the new node
 * @str: input
 * Return: address of the new element, otherwise NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;
	char *newStr;

	if (!str)
		return (NULL);
	newNode = malloc(sizeof(list_t));
	if (!newNode)
		return (NULL);
	newStr = strdup(str);
	if (!newStr)
	{
		free(newNode);
		return (NULL);
	}
	newNode->len = _strlen(newStr);
	newNode->str = newStr;
	newNode->next = *head;
	*head = newNode;
	return (*head);
}
