#include "main.h"

/**
 * last - get the last index of a string
 * @s: the string
 * Return: last index
 */

int last(char *s)
{
	int i = 0;

	if (*s > '\0')
		i += last(s + 1) + 1;

	return (i);
}

/**
 * is_palindrome - check if string is palindrome
 * @s: string to check
 * Return: 1 if palindrome, otherwise 0
 */

int is_palindrome(char *s)
{
	int n = last(s);

	return (palindrome(s, 0, n - 1, n % 2));
}

/**
 * palindrome - the palindrome checker
 * @s: the string
 * @b: start right to left
 * @n: start left to right
 * @pair: integer
 * Return: 1 if palindrome, otherwise 0
 */

int palindrome(char *s, int b, int n, int pair)
{
	if ((b == n && pair != 0) || (b == n + 1 && pair == 0))
		return (1);
	else if (s[b] != s[n])
		return (0);
	else
		return (palindrome(s, b + 1, n - 1, pair));
}
