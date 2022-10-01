#include "main.h"

/**
 * *_strchr - locates the first occurence of character c in string s
 *
 * @s: pointer to the string to search character in
 *
 * @c: the character to locate
 *
 * Return: pointer to the first occurence of c, NULL if not found
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}

	return ('\0');
}
