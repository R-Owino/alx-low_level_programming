#include "main.h"

/**
 * *_strpbrk - locates the first occurrence in the string s of any of the
 *		bytes in the string accept
 *
 * @s: pointer to the string to search
 *
 * @accept: pointer to match
 *
 * Return: pointer to the byte in s that matches one of the bytes in accept,
 *	NULL if not found
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;
	char *ptr;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				ptr = &s[i];
				return (ptr);
			}
		}
	}
	return (0);


}
