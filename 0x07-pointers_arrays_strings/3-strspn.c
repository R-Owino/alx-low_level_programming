#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring
 *
 * @s: pointer to substring
 *
 * @accept: pointer to prefix
 *
 * Return: number of bytes in the initial segment of s
 *		which consist only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j, len = 0;

	for (i = 0; s[i] >= '\0'; i++)
	{
		for (j = 0; accept[j] > '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				len++;
				break;
			}
		}
		if (accept[i] == '\0')
			break;
	}
	return (len);
}
