#include "main.h"
/**
 * clear_bit -sets the value of a bit to 0 at a given index.
 * @index: index position that the change will happen
 * @n: pointer to the number
 * Return: 1 if it worked, or -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int mask;

	mask = 1;
	mask = mask << index;
	if (index > sizeof(unsigned long int) * 8 || n == NULL)
		return (-1);
	if (((*n >> index) & 1) == 1)
		*n = mask ^ *n;

	return (1);
}
