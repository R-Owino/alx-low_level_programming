#include "main.h"

/**
 * is_prime_number - checks if a number is prime
 *
 * @n: the number
 *
 * Return: 1 if n is prime, otherwise 0
 */

int is_prime_number(int n)
{
	return (is_prime(n, 2));
}

/**
 * is_prime - checks divisibility
 * @n: the number
 * @m: integer
 * Return: integer
 */

int is_prime(int n, int m)
{
	if (m >= n && n > 1)
		return (1);

	else if (n % m == 0 || n <= 1)
		return (0);

	else
		return (is_prime(n, m + 1));
}
