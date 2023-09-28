#include "main.h"

/**
 * binary_to_uint -converts a binary number to an unsigned int
 * @b: pointer string to be converted
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int len, k, l, sum, pow;
	int base;

	base = 2;
	sum = 0;
	pow = 1;

	if (b == 0)
		return (0);
	for (len = 0; b[len] != '\0'; len++)
		;
	if (len == 1 && (b[0] == '0' || b[0] == '1'))
		return (b[0] - 48);
	for (k = 0; b[k] != '\0'; k++)
	{
		if (b[k] != '0' && b[k] != '1')
			return (0);
		for (l = len - 1; l > 0; l--)
		pow = pow * base;
		sum = sum + (pow * (b[k] - 48));
		len--;
		pow = 1;
	}
	return (sum);
}
