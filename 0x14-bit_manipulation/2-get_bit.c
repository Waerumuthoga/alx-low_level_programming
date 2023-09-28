#include "main.h"
/**
 * get_bit - get the value of a bit at a given index.
 * @index: the index of the bit to be given
 * @n: the number to check the value of
 * Return: integer 1 or 0
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int a;

	if (index > sizeof(size_t) * 8)
		return (-1);
	for (a = 0; a < index; a++)
		n = n >> 1;
	return ((n & 1));
}
