#include "main.h"

/**
 * *rot13 - encodes string using rot13
 *
 * @c: pointer to string
 *
 * Return: encoded string
 */

char *rot13(char *c)
{
	int i;

	char alph[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	char *p = c;

	while (*c)
	{
		for (i = 0; i < 53; i++)
		{
			if (*c == alph[i])
			{
				*c = rot[i];
				break;
			}
		}
		c++;
	}
	return (p);

}
