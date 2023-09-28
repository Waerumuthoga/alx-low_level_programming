#include "main.h"
/**
 * flip_bits -function that provided needed bits for fliping.
 * @n: first number to compare
 * @m: second number being compared
 * Return: number of bits one would like to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int mask = 0, count = 0;

	mask = n ^ m;
	while (mask)
	{
		if (mask & 1)
			count++;
		mask >>= 1;
	}

	return (count);
}
