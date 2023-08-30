#include "main.h"

/**
 * prime_1 -calculate if it is prime
 * @a: input
 * @b: denominator
 * Return: 0
 */

int prime_1(int a, int b)
{
	if (a <= 1 || (a != b && a % b == 0))
	{
		return (0);
	}
	else if (a == b)
	{
		return (1);
	}
	return (prime_1(a, b + 1));
}

/**
 * is_prime_number -check whether its a prime number
 * @n: input number
 * Return: 0 or 1
 */

int is_prime_number(int n)
{
	return (prime_1(n, 2));
}
