#include "main.h"

/**
 * sqrt_1 -returns the natural square root of a number.
 * @b: integer to be square rooted
 * @a: iterator
 * Return: the square root or -1
 */
int sqrt_1(int a, int b)
{
	if (b * b == a)
	{
		return (b);
	}
	else if (b * b > a)
	{
		return (-1);
	}
	return (sqrt_1(a, b + 1));
}

/**
 * _sqrt_recursion -returns the natural square root of a number.
 * @n: integer to be square rooted
 * Return: the square root
 */

int _sqrt_recursion(int n)
{
	return (sqrt_1(n, 0));
}
