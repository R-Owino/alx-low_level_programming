#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - gets pointer to a new string which is a copy of str
 * @str: string to be duplicated
 * Return: pointer to duplicated string, otherwise NULL
 */

char *_strdup(char *str)
{
	char *str_copy, *start;
	int i, len = 0;

	if (str == NULL)
		return (NULL);

	start = str;

	while (*str)
	{
		len++;
		str++;
	}

	str = start;
	str_copy = malloc(sizeof(char) * (len + 1));
	start = str_copy;

	if (str_copy != NULL)
	{
		for (i = 0; i < len; i++)
		{
			str_copy[i] = *str;
			str++;
		}
		str_copy[i] = '\0';
		return (start);
	}
	else
		return (NULL);
}
