#include "main.h"

/**
 * *leet - encode string to 1337
 *
 * @c: pointer to the string
 *
 * Return: encoded character
 */

char *leet(char *c)
{
	int i = 0, j;

	char subs[10] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'},
	     str[10] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};

	while (c[i])
	{
		for (j = 0; j < 10; j++)
			if (c[i] == str[j])
				c[i] = subs[j];

		i++;
	}

	return (c);
}
