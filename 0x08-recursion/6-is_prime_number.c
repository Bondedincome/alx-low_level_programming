#include "main.h"
#include <stdio.h>

int prime_numb(int s, int i);

/**
 * is_prime_number - checks wheather its a prime or not.
 * @n: number to be checked
 *
 * Return: 1 if prime and 0 if it isn't
 */

int is_prime_number(int n)
{
	return (prime_numb(n, 1));
}

/**
 * prime_numb - checks if its prime or not
 * @s: number to be checked
 * @i: repeataion
 *
 * Return: 1 if prime and 0 if not
 */

int prime_numb(int s, int i)
{
	if (s <= 1)
	{
		return (0);
	}

	if (s % i == 0 && i > 1)
	{
		return (0);
	}

	if ((s / i) < i)
	{
		return (1);
	}

	return (prime_numb(s, i + 1));
}

