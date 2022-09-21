#include "main.h"

/**
 * *string_toupper - converts a lowercase string to uppercase
 *
 * @str: pointer to string to capitalize
 *
 * Return: uppercase characters
 */

char *string_toupper(char *str)
{
	int i = 0;

	for ( ; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
	}

	return (str);

}
